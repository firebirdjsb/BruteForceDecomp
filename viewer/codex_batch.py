#!/usr/bin/env python3
"""Opt-in Codex CLI reconstruction of a bounded number of locally exported functions.
Requires installed/authenticated Codex CLI; use viewer.py to inspect results.
"""
import argparse
import json
import re
import shutil
import sqlite3
import subprocess
import sys
import time
from pathlib import Path
from viewer import atomic_write, dbconnect, init_index, load_json


def write_status(workspace, **fields):
    atomic_write(workspace / 'active.json', json.dumps(fields, indent=2))


def clean_output(text):
    text = text.strip().lstrip('\ufeff')
    m = re.fullmatch(r'```(?:c)?\s*\n([\s\S]*?)\n```', text, re.I)
    return m.group(1).strip() if m else text


def make_prompt(f, legacy_cpp=None):
    code = f['pseudocode']
    return '''You are reviewing evidence from a user-supplied original Xbox x86 game binary for private interoperability and preservation analysis.
Write a SINGLE conservative, readable C++17 function draft based strictly on the Ghidra pseudocode provided below. This is an unverified source reconstruction, NOT recovered original code.

Rules:
- Keep the control flow, integer widths, signedness, pointer offsets, constants, and side effects from evidence. If unknown, keep a neutral name/type or comment TODO; do not invent gameplay semantics.
- Never claim to have compiled, tested, or achieved byte-for-byte equivalence.
- Do not modify files, use tools, search other content, or execute the game. Return only the C++17 source text, no markdown fences.
- Function may depend on missing types, members, globals, or ABI; put clear TODO comments for missing information. Do not fabricate implementations of external functions.
- Use strict C++17. Preserve guest32 addresses, original register/stack contracts, partial writes and x87/SSE semantics. Recover classes, layouts and virtual interfaces only from original XBE evidence.
- Preserve 32-bit pointer/ABI assumptions. Do not simplify signed/unsigned arithmetic without proof.
- Externals and unresolved globals must be explicit declarations or TODOs and must not be invented as working implementations.
- If faithful C++ source is not determinable, report the missing evidence and unresolved contract; do not emit a stub or claim a completed conversion.
- At beginning add // DRAFT: not validated against the original executable.
- When pseudocode has decompiler warnings or visibly invalid flow, preserve that uncertainty in TODOs rather than presenting recovered logic as certain.

Function index: {index}
Function entry: {entry}
Existing name: {name}
Recorded body SHA256: {hash}

Ghidra pseudocode:
{pseudocode}
'''.format(index=f['idx'],entry=f['entry'],name=f['name'],hash=f['hash'],pseudocode=code) + (('\nAdditional unverified legacy C++ draft, for comparison only. Reconcile every line against the Ghidra pseudocode; do not assume that the legacy draft is correct or ABI-accurate. Convert to C++17 rather than simply renaming the file:\n' + legacy_cpp) if legacy_cpp else '')


def main():
    p = argparse.ArgumentParser(description='Generate a few review-required C++17 drafts with installed Codex CLI')
    p.add_argument('--source', required=True, type=Path, help='FunctionExport ZIP or directory')
    p.add_argument('--workspace', required=True, type=Path)
    p.add_argument('--start', type=int, default=0)
    p.add_argument('--count', type=int, default=3)
    p.add_argument('--high-warnings-first', action='store_true')
    p.add_argument('--timeout', type=int, default=900)
    p.add_argument('--codex', help='Path to codex executable; otherwise detect it on PATH')
    a = p.parse_args()
    if a.count < 1 or a.count > 100:
        p.error('Count must be 1..100. Bounded batches avoid accidentally processing 13,694 functions.')
    cli = a.codex or shutil.which('codex.cmd') or shutil.which('codex.exe') or shutil.which('codex')
    if not cli:
        sys.exit('Codex CLI not found on PATH. Install/sign into Codex CLI, or use Copy Codex prompt in the viewer.')
    db_path, _ = init_index(a.source,a.workspace)
    a.workspace.mkdir(parents=True,exist_ok=True)
    draftdir=a.workspace/'drafts'; draftdir.mkdir(exist_ok=True)
    with dbconnect(db_path) as con:
        con.row_factory=sqlite3.Row
        order = 'ORDER BY has_hard_warning DESC, warning_count DESC, idx ASC' if a.high_warnings_first else 'ORDER BY idx ASC'
        entries=[dict(row) for row in con.execute(f'SELECT * FROM functions WHERE idx>=? {order}',(a.start,))]
    targets=[]
    for entry in entries:
        if (draftdir / (entry['entry']+'.cpp')).exists(): continue
        targets.append(entry)
        if len(targets)==a.count:break
    if not targets:
        print('Nothing to convert in the requested range: all available drafts already exist.')
        write_status(a.workspace,state='complete',target=0,completed=0,message='Nothing to do')
        return
    print('Codex executable:',cli)
    print('This sends each selected function pseudocode to the configured Codex model. No game executable is uploaded by this script.')
    print('Functions selected:',len(targets),'starting with',targets[0]['entry'])
    errors=[]
    for step, fn in enumerate(targets, 1):
        if len(fn['pseudocode']) > 110000:
            msg=f"Skipping oversized pseudocode {fn['entry']}: {len(fn['pseudocode'])} chars"
            errors.append(msg);print(msg,flush=True)
            continue
        print(f"[{step}/{len(targets)}] Reconstructing {fn['name']} ({fn['entry']})",flush=True)
        write_status(a.workspace,state='running',idx=fn['idx'],entry=fn['entry'],name=fn['name'],completed=step-1,target=len(targets),message='Codex is analyzing this function')
        last = a.workspace/'last_codex_message.txt'
        last.unlink(missing_ok=True)
        command = [cli, 'exec', '--sandbox', 'read-only', '--skip-git-repo-check', '--output-last-message', str(last), '-']
        try:
            legacy_path = draftdir / (fn['entry'] + '.cpp')
            legacy_text = legacy_path.read_text(encoding='utf-8')[:100000] if legacy_path.exists() else None
            finished = subprocess.run(command,input=make_prompt(fn, legacy_text),text=True,encoding='utf-8',errors='replace',cwd=a.workspace,capture_output=True,timeout=a.timeout)
            if finished.returncode != 0 or not last.is_file():
                tail=(finished.stderr or finished.stdout or 'No output')[-1400:]
                raise RuntimeError(f'codex exec failed (exit {finished.returncode}): {tail}')
            code=clean_output(last.read_text(encoding='utf-8'))
            cpp_tokens = re.findall(r'\b(?:reinterpret_cast|static_cast|dynamic_cast|const_cast|nullptr|namespace|class|template|using|auto)\b|std::|#include\s*<c(?:stdint|stddef|string)>|::', code)
            if cpp_tokens:
                raise RuntimeError('Codex returned C++ syntax in C-only mode: ' + ', '.join(sorted(set(cpp_tokens))))
            if len(code)<25:
                raise RuntimeError('Codex returned empty or implausibly short C')
            draft = draftdir/(fn['entry']+'.cpp')
            if draft.exists():
                print('Skipping because another process created:', draft)
                continue
            atomic_write(draft, '// Brute Force: '+fn['entry']+' | Ghidra label '+fn['name']+'\n// Ghidra function-body SHA-256: '+fn['hash']+'\n// HUMAN REVIEW REQUIRED. Not compiled, tested or byte-equivalent.\n\n'+code.rstrip()+'\n')
            atomic_write(draft.with_suffix('.metadata.json'),json.dumps({'function_idx':fn['idx'],'entry':fn['entry'],'original_name':fn['name'],'body_sha256':fn['hash'],'source':'codex_cli_reconstruction','confidence':'not_verified','generated_utc':time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime())},indent=2))
            print('Draft saved:',draft,flush=True)
        except (subprocess.TimeoutExpired,OSError,RuntimeError) as e:
            msg=f'{fn["entry"]}: {str(e)[:1600]}'
            errors.append(msg)
            print('ERROR:',msg,flush=True)
            write_status(a.workspace,state='error',idx=fn['idx'],entry=fn['entry'],completed=step-1,target=len(targets),message=msg)
            if step==1:break
    total = len(list(draftdir.glob('0x????????.cpp')))
    write_status(a.workspace,state='complete' if not errors else 'error',completed=len(targets)-len(errors),target=len(targets),drafts_total=total,errors=errors,message=('Done, inspect drafts' if not errors else 'Some functions could not be reconstructed. See terminal.'))
    print('Codex run finished:',len(targets)-len(errors),'drafts generated,',len(errors),'errors. Total drafts:',total)
    if errors:sys.exit(1)

if __name__=='__main__':main()
