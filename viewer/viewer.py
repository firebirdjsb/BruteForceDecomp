#!/usr/bin/env python3
"""Local-only Brute Force function viewer. Python 3.9+, stdlib only.
Read a user-supplied FunctionExport ZIP or directory and show drafts as they change.
"""
import argparse
import csv
import io
import json
import os
import re
import sqlite3
import sys
import threading
import time
import webbrowser
import zipfile
from http.server import ThreadingHTTPServer, BaseHTTPRequestHandler
from pathlib import Path
from urllib.parse import urlparse, parse_qs

HERE = Path(__file__).resolve().parent
SAVE_LOCK = threading.Lock()
HEX = re.compile(r'^0x[0-9a-fA-F]{8}$')


def atomic_write(p, text):
    p.parent.mkdir(parents=True, exist_ok=True)
    tmp = p.with_name(p.name + '.tmp')
    tmp.write_text(text, encoding='utf-8')
    os.replace(tmp, p)


def load_json(p, default):
    try:
        return json.loads(p.read_text(encoding='utf-8'))
    except (OSError, ValueError):
        return default


def source_rows(path):
    """Return (file name, bytes) from ZIP or extracted directory, without touching XBE."""
    if path.is_dir():
        files = sorted(path.glob('functions_*.jsonl'))
        for f in files:
            yield f.name, f.read_bytes()
    else:
        with zipfile.ZipFile(path, 'r') as z:
            files = sorted(n for n in z.namelist() if re.search(r'functions_\d+_\d+\.jsonl$', n))
            for filename in files:
                yield filename, z.read(filename)


def init_index(source, workspace):
    workspace.mkdir(parents=True, exist_ok=True)
    db_path = workspace / 'functions.sqlite3'
    if source.is_dir():
        entries = sorted(source.glob('functions_*.jsonl'))
        fingerprint = [str(source.resolve()), len(entries), sum(p.stat().st_size for p in entries), max((p.stat().st_mtime_ns for p in entries), default=0)]
    else:
        stat = source.stat()
        fingerprint = [str(source.resolve()), stat.st_size, stat.st_mtime_ns]
    fp_path = workspace / 'source.json'
    if db_path.exists() and load_json(fp_path, {}).get('fingerprint') == fingerprint:
        return db_path, False
    print('Building function index from:', source, flush=True)
    tmp = workspace / 'functions.new.sqlite3'
    if tmp.exists():
        tmp.unlink()
    con = sqlite3.connect(tmp)
    con.execute('CREATE TABLE functions (idx INTEGER PRIMARY KEY, entry TEXT NOT NULL, name TEXT, namespace TEXT, body_size INTEGER, ghidra_status TEXT, hash TEXT, pseudocode TEXT, warning_count INTEGER, has_hard_warning INTEGER, chunk TEXT)')
    seen = set()
    cnt = 0
    for chunk, data in source_rows(source):
        for line in io.BytesIO(data):
            if not line.strip():
                continue
            row = json.loads(line)
            idx, entry = row['index'], row['entry']
            if not isinstance(idx, int) or idx in seen or not HEX.fullmatch(entry):
                raise RuntimeError(f'Duplicate/bad function index/address: {idx} {entry}')
            seen.add(idx)
            code = row.get('pseudocode') or ''
            warnings = len(re.findall(r'WARNING:|Could not recover|bad instruction|Bad instruction', code, re.I))
            severe = 1 if re.search(r'Could not recover|bad instruction|Unable to recover|jump table', code, re.I) else 0
            con.execute('INSERT INTO functions VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)', (idx, entry.lower(), row.get('name'), row.get('namespace'), row.get('body_address_count'), row.get('decompile_status'), row.get('ghidra_memory_sha256'), code, warnings, severe, chunk))
            cnt += 1
    con.execute('CREATE INDEX idx_name ON functions(name)')
    con.execute('CREATE INDEX idx_warning ON functions(has_hard_warning,warning_count)')
    con.commit()
    con.close()
    os.replace(tmp, db_path)
    atomic_write(fp_path, json.dumps({'fingerprint': fingerprint, 'rows': cnt, 'source': str(source)}, indent=2))
    print(f'Indexed {cnt:,} functions.', flush=True)
    return db_path, True


def dbconnect(db_path):
    return sqlite3.connect(db_path.resolve().as_uri()+'?mode=ro', uri=True)


def api_status(db, workspace):
    with dbconnect(db) as con:
        total, high = con.execute('SELECT count(*),sum(has_hard_warning) FROM functions').fetchone()
    drafts = len(list((workspace / 'drafts').glob('0x????????.c')))
    reviews = load_json(workspace / 'reviews.json', {})
    active = load_json(workspace / 'active.json', {})
    return {'total': total, 'drafts': drafts, 'reviewed': sum(1 for value in reviews.values() if value.get('reviewed')), 'remaining': max(0, total - drafts), 'high_warning': high or 0, 'active': active, 'source': load_json(workspace / 'source.json', {})['source']}


def api_listing(db, workspace, args):
    q = (args.get('q') or [''])[0].strip()[:80]
    only = (args.get('only') or ['all'])[0]
    offset = max(0, min(1000000, int((args.get('offset') or ['0'])[0])))
    limit = max(1, min(150, int((args.get('limit') or ['70'])[0])))
    where, vals = [], []
    if q:
        where.append('(name LIKE ? OR entry LIKE ? OR CAST(idx AS TEXT) LIKE ?)')
        vals.extend(['%'+q+'%'] * 3)
    if only == 'warning':
        where.append('has_hard_warning=1')
    elif only == 'ghidra_warning':
        where.append('warning_count>0')
    elif only == 'draft':
        # Drafts are on disk; filter index in-process below to remain read-only to DB.
        pass
    sql_where = ' WHERE ' + ' AND '.join(where) if where else ''
    with dbconnect(db) as con:
        con.row_factory = sqlite3.Row
        if only == 'draft':
            # Filtering against all 13,694 metadata rows is intentionally bounded.
            rows = con.execute('SELECT idx,entry,name,body_size,warning_count,has_hard_warning FROM functions'+sql_where+' ORDER BY idx', vals).fetchall()
            rows = [dict(r) for r in rows if (workspace/'drafts'/(r['entry']+'.c')).is_file()]
            count = len(rows)
            rows = rows[offset:offset+limit]
        else:
            count = con.execute('SELECT COUNT(*) FROM functions'+sql_where, vals).fetchone()[0]
            rows = [dict(r) for r in con.execute('SELECT idx,entry,name,body_size,warning_count,has_hard_warning FROM functions'+sql_where+' ORDER BY idx LIMIT ? OFFSET ?', vals+[limit,offset]).fetchall()]
    reviews = load_json(workspace/'reviews.json', {})
    for row in rows:
        row['has_draft'] = (workspace / 'drafts' / (row['entry']+'.c')).is_file()
        row['reviewed'] = bool(reviews.get(row['entry'], {}).get('reviewed'))
    return {'total':count,'rows':rows,'offset':offset,'limit':limit}


def get_function(db, workspace, idx):
    with dbconnect(db) as con:
        con.row_factory = sqlite3.Row
        row = con.execute('SELECT * FROM functions WHERE idx=?', (idx,)).fetchone()
    if row is None:
        return None
    row = dict(row)
    candidate = workspace / 'drafts' / (row['entry']+'.c')
    row['c'] = candidate.read_text(encoding='utf-8') if candidate.exists() else ''
    row['has_draft'] = candidate.exists()
    row['review'] = load_json(workspace / 'reviews.json', {}).get(row['entry'], {})
    row['draft_mtime'] = candidate.stat().st_mtime_ns if candidate.exists() else 0
    return row


class Handler(BaseHTTPRequestHandler):
    server_version = 'BruteForceLive/1.0'
    def log_message(self, format, *args):
        if not self.path.startswith('/api/status'):
            super().log_message(format, *args)
    def json(self, obj, code=200):
        b = json.dumps(obj, ensure_ascii=False).encode('utf-8')
        self.send_response(code)
        self.send_header('Content-Type', 'application/json; charset=utf-8')
        self.send_header('Cache-Control', 'no-store')
        self.send_header('Content-Length', str(len(b)))
        self.end_headers()
        self.wfile.write(b)
    def do_GET(self):
        p = urlparse(self.path)
        if p.path == '/':
            b = (HERE/'index.html').read_bytes()
            self.send_response(200)
            self.send_header('Content-Type','text/html; charset=utf-8')
            self.send_header('Content-Length',str(len(b)))
            self.end_headers()
            self.wfile.write(b)
            return
        try:
            if p.path == '/api/status':
                return self.json(api_status(self.server.db_path, self.server.workspace))
            if p.path == '/api/list':
                return self.json(api_listing(self.server.db_path, self.server.workspace, parse_qs(p.query)))
            if re.fullmatch(r'/api/function/\d+', p.path):
                obj = get_function(self.server.db_path,self.server.workspace,int(p.path.rsplit('/',1)[-1]))
                return self.json(obj,200 if obj else 404)
            self.json({'error':'Not found'},404)
        except Exception as e:
            self.json({'error':str(e)},500)
    def do_POST(self):
        origin = self.headers.get('Origin','')
        if origin and origin != f'http://127.0.0.1:{self.server.server_port}':
            return self.json({'error':'Incorrect origin'},403)
        if self.headers.get('Content-Type', '').split(';')[0] != 'application/json':
            return self.json({'error':'JSON required'},415)
        try:
            n = int(self.headers.get('Content-Length','0'))
            if n <= 0 or n > 300000:
                return self.json({'error':'Invalid request length'},413)
            data = json.loads(self.rfile.read(n).decode('utf-8'))
            match = re.fullmatch(r'/api/(save|review)/(\d+)',self.path)
            if not match:
                return self.json({'error':'Not found'},404)
            op, idx = match.group(1),int(match.group(2))
            fn = get_function(self.server.db_path,self.server.workspace,idx)
            if fn is None:
                return self.json({'error':'Unknown function'},404)
            key = fn['entry']
            if op == 'save':
                code = data.get('c')
                if not isinstance(code,str) or len(code) > 200000:
                    return self.json({'error':'Expected C text'},400)
                draft = self.server.workspace/'drafts'/(key+'.c')
                atomic_write(draft,code)
                return self.json({'ok':True,'path':str(draft)})
            elif op == 'review':
                if not fn['has_draft']:
                    return self.json({'error':'A saved C draft is required before review'},400)
                state = bool(data.get('reviewed'))
                with SAVE_LOCK:
                    p = self.server.workspace/'reviews.json'
                    reviews = load_json(p,{})
                    reviews[key]={'reviewed':state,'timestamp_utc':time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime()),'note':'Human marking; not proof of behavior or byte equivalence'}
                    atomic_write(p,json.dumps(reviews,indent=2))
                return self.json({'ok':True,'reviewed':state})
        except Exception as e:
            return self.json({'error':str(e)},500)


def main():
    p = argparse.ArgumentParser(description='Local function viewer, no extra packages')
    p.add_argument('--source',type=Path,required=True,help='FunctionExport.zip or extracted FunctionExport folder')
    p.add_argument('--workspace',type=Path,required=True)
    p.add_argument('--port',type=int,default=8765)
    p.add_argument('--no-browser',action='store_true')
    a = p.parse_args()
    if not a.source.exists():
        p.error(f'Export source not found: {a.source}')
    db,_ = init_index(a.source,a.workspace)
    server = ThreadingHTTPServer(('127.0.0.1',a.port),Handler)
    server.db_path,server.workspace = db,a.workspace
    url = f'http://127.0.0.1:{a.port}/'
    print('Local viewer:',url,flush=True)
    print('Workspace:',a.workspace,flush=True)
    if not a.no_browser:
        webbrowser.open(url)
    try:
        server.serve_forever(poll_interval=0.5)
    except KeyboardInterrupt:
        print('Viewer stopped.')
    finally:
        server.server_close()

if __name__=='__main__':main()
