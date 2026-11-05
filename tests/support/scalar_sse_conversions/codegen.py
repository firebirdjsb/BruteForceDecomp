#!/usr/bin/env python3
"""Fail-closed checks on freshly authored wrapper disassemblies, not game code."""
import re

REG64 = r'(?:r(?:ax|bx|cx|dx|si|di|bp|sp)|r(?:[89]|1[0-5]))'
STACK = r'QWORD PTR \[(?:rbp|rsp)(?:[+-]0x[0-9a-f]+)?\]'
TLS = 'QWORD PTR fs:0x28'
FAIL = r'[0-9a-f]+ <__stack_chk_fail(?:@plt)?>'

REG32 = r'(?:e(?:ax|bx|cx|dx|si|di|bp|sp)|r(?:[89]|1[0-5])d)'

def functions(text):
    result = {}
    for name in ('native_tt', 'native_si'):
        m = re.search(r'^\w+ <'+name+r'>:\n(.*?)(?=\n\n|\Z)', text, re.M | re.S)
        if not m:
            raise AssertionError('missing function '+name)
        insns = []
        for line in m[1].splitlines():
            v = re.match(r'\s*([0-9a-f]+):\s+([a-z0-9]+)\s*(.*)$', line)
            if v:
                insns.append((v[2], v[3].strip(), int(v[1], 16)))
        result[name] = insns
    return result

def stack_failure(name, insns, start, end):
    """Recognize only observed Linux x86-64 GCC/Clang canary failure edges.

    Addresses are retained by functions() so a plausible symbol or nearby
    conditional branch alone cannot authorize a call. This is wrapper codegen
    validation, not a general control-flow or stack-protector proof.
    """
    calls = [i for i, x in enumerate(insns)
             if x[0] in ('call', 'callq') and re.fullmatch(FAIL, x[1])]
    tls = [i for i, x in enumerate(insns) if 'fs:' in x[1]]
    if not calls and not tls:
        return set()
    assert len(calls) == 1, (name, 'stack failure count')
    call = calls[0]
    assert call > end, (name, 'stack failure before restore')
    saves = []
    for i in range(start - 1):
        m = re.fullmatch('(' + REG64 + '),' + TLS, insns[i][1])
        if insns[i][0] == 'mov' and m and insns[i+1][0] == 'mov':
            slot = re.fullmatch('(' + STACK + '),' + m[1], insns[i+1][1])
            if slot:
                saves.append((i, slot[1]))
    assert len(saves) == 1, (name, 'stack guard save')
    save, slot = saves[0]
    guards = []
    for i in range(end + 1, len(insns) - 2):
        # GCC: reload the saved canary and subtract the TLS canary.
        m = re.fullmatch('(' + REG64 + '),' + re.escape(slot), insns[i][1])
        if (insns[i][0] == 'mov' and m and
                insns[i+1][:2] == ('sub', m[1] + ',' + TLS)):
            guards.append((i, i+2, i+1))
        # Clang: reload TLS, compare with the saved canary in memory or a GPR.
        m = re.fullmatch('(' + REG64 + '),' + TLS, insns[i][1])
        if insns[i][0] != 'mov' or not m:
            continue
        if insns[i+1][:2] == ('cmp', m[1] + ',' + slot):
            guards.append((i, i+2, i))
        elif i + 3 < len(insns):
            other = re.fullmatch('(' + REG64 + '),' + re.escape(slot), insns[i+1][1])
            if (insns[i+1][0] == 'mov' and other and other[1] != m[1] and
                    insns[i+2][:2] == ('cmp', m[1] + ',' + other[1])):
                guards.append((i, i+3, i))
    assert len(guards) == 1, (name, 'stack guard comparison')
    guard, branch, reload_tls = guards[0]
    frame = re.fullmatch(r'QWORD PTR \[(rbp|rsp)([+-]0x[0-9a-f]+)?\]', slot)
    base, offset = frame[1], int(frame[2] or '0', 16)
    sizes = {'BYTE': 1, 'WORD': 2, 'DWORD': 4, 'QWORD': 8,
             'XMMWORD': 16, 'YMMWORD': 32, 'ZMMWORD': 64}
    overlaps = []
    for i, x in enumerate(insns):
        for memory in re.finditer(r'([A-Z]+) PTR \[(' + base + r')([^\]]*)\]', x[1]):
            assert memory[1] in sizes and re.fullmatch(r'(?:[+-]0x[0-9a-f]+)?', memory[3]), (name, 'complex canary frame access')
            at = int(memory[3] or '0', 16)
            if at < offset + 8 and offset < at + sizes[memory[1]]:
                overlaps.append(i)
    slot_read = guard if insns[guard][1].endswith(',' + slot) else guard + 1
    assert overlaps == [save+1, slot_read], (name, 'unexpected canary slot access')
    assert tls == [save, reload_tls], (name, 'unexpected TLS use')
    addresses = {x[2]: i for i, x in enumerate(insns) if len(x) == 3}
    assert len(addresses) == len(insns), (name, 'instruction addresses')

    def target(i):
        m = re.fullmatch(r'([0-9a-f]+) <' + name + r'\+0x[0-9a-f]+>', insns[i][1])
        assert m and int(m[1], 16) in addresses, (name, 'stack guard target')
        return addresses[int(m[1], 16)]

    if insns[branch][0] == 'je':
        assert branch + 1 == call and target(branch) == call + 1, (name, 'stack guard equal edge')
        normal = call + 1
    else:
        assert insns[branch][0] == 'jne' and target(branch) == call, (name, 'stack guard unequal edge')
        normal = branch + 1
    # The success edge must reach a return without taking another branch/call.
    # GCC sanitizers may place other failure blocks between that return and call.
    while normal < len(insns) and insns[normal][0] != 'ret':
        assert insns[normal][0] in ('mov', 'add', 'pop', 'leave', 'nop'), (name, 'stack success path')
        normal += 1
    assert normal < len(insns), (name, 'stack success return')
    success = (call + 1 if insns[branch][0] == 'je' else branch + 1)
    assert [i for i, x in enumerate(insns) if x[0] == 'ret'] == [normal], (name, 'unguarded return')
    for i, x in enumerate(insns):
        if x[0].startswith('j') and i != branch:
            destination = target(i)
            assert (destination != call and not guard < destination <= branch and
                    not success <= destination <= normal and
                    not (i <= end and destination == guard)), (name, 'stack guard bypass')
    # Every returning path must pass initialization, the complete conversion
    # region and the comparison. Known nonreturning sanitizer reports terminate
    # a path; stack-allocation and other permitted sanitizer calls return.
    successors = {}
    fatal = r'[0-9a-f]+ <__(?:stack_chk_fail|asan_report_(?:load|store)(?:1|2|4|8|16|_n)|ubsan_handle_[a-z0-9_]+_abort)(?:@plt)?>'
    for i, x in enumerate(insns):
        if x[0] in ('ret', 'ud2') or (x[0] in ('call', 'callq') and re.fullmatch(fatal, x[1])):
            successors[i] = []
        elif x[0].startswith('j'):
            successors[i] = [target(i)] + ([] if x[0] == 'jmp' else [i+1])
        else:
            successors[i] = [i+1] if i+1 < len(insns) else []

    def reaches_return_without(checkpoint):
        pending, seen = [0], {checkpoint}
        while pending:
            i = pending.pop()
            if i in seen:
                continue
            if i == normal:
                return True
            seen.add(i)
            pending.extend(successors[i])
        return False

    assert reaches_return_without(-1), (name, 'unreachable success return')
    for checkpoint in (save, save+1, start, end, guard, branch):
        assert not reaches_return_without(checkpoint), (name, 'uninitialized or skipped protected region')
    return {call}


def verify_regions(regions, allow_sanitizer=False):
    assert set(regions) == {'native_tt', 'native_si'}, 'wrapper set'
    for name, insns in regions.items():
        starts = [i for i,x in enumerate(insns) if x[0]=='stmxcsr']
        ends = [i for i,x in enumerate(insns) if x[0]=='ldmxcsr']
        assert len(starts)==2 and len(ends)==2, (name, 'csr count')
        region = insns[starts[0]:ends[-1]+1]
        expected = ['stmxcsr','ldmxcsr','movups',
                    'cvttss2si' if name=='native_tt' else 'cvtsi2ss']
        if name=='native_si':
            expected += ['movd']
        expected += ['stmxcsr','movups','ldmxcsr']
        assert [x[0] for x in region] == expected, (name, 'sequence')
        assert region[0][1] == region[-1][1], (name,'restore source')
        assert region[0][1] != region[1][1], (name,'requested csr not saved csr')
        assert all(x[1].startswith('DWORD PTR ') for x in region if x[0] in ('stmxcsr','ldmxcsr'))
        assert re.fullmatch(r'xmm0,XMMWORD PTR \[.+\]',region[2][1]), (name,'load')
        assert re.fullmatch(r'XMMWORD PTR \[.+\],xmm0',region[-2][1]), (name,'lane capture')
        conversion_pattern = REG32+r',xmm0' if name=='native_tt' else 'xmm0,'+REG32
        assert re.fullmatch(conversion_pattern,region[3][1]), (name,'operand width')
        if name=='native_si':
            assert re.fullmatch(REG32+r',xmm0',region[4][1]), (name,'extract width')
        allowed_failure = stack_failure(name, insns, starts[0], ends[-1])
        # No hidden conversions, FP arithmetic or unvalidated wrapper calls.
        for i,x in enumerate(insns):
            if x[0] in ('call','callq'):
                assert i in allowed_failure or (allow_sanitizer and re.fullmatch(
                    r'[0-9a-f]+ <__(?:asan|ubsan)_[^>]+>', x[1])), (name,'unexpected call')
            if i < starts[0] or i > ends[-1]:
                assert not re.match(r'(?:v?(?:cvt|addss|subss|mulss|divss)|f(?:add|sub|mul|div|ld|st))',x[0]), (name,'hidden FP')
    return True

def negatives(regions, allow_sanitizer=False):
    import copy
    count=0
    for name, insns in regions.items():
        start=next(i for i,x in enumerate(insns) if x[0]=='stmxcsr')
        end=max(i for i,x in enumerate(insns) if x[0]=='ldmxcsr')
        variations=[]
        for i in range(start,end+1):
            v=copy.deepcopy(regions); del v[name][i]; variations.append(v)
            v=copy.deepcopy(regions); v[name][i]=('nop',''); variations.append(v)
        for i in range(start,end):
            v=copy.deepcopy(regions); v[name][i],v[name][i+1]=v[name][i+1],v[name][i]; variations.append(v)
        for opcode,operand in [('cvttss2si','rax,xmm0'),('cvtss2si','eax,xmm0'),
                               ('cvtsi2ss','xmm0,rax'),('cvtsi2ss','xmm1,eax'),
                               ('vcvtsi2ss','xmm0,xmm0,eax')]:
            v=copy.deepcopy(regions); v[name][start+3]=(opcode,operand); variations.append(v)
        v=copy.deepcopy(regions); v[name][end]=(v[name][end][0],'DWORD PTR [rsp-0x999]'); variations.append(v)
        v=copy.deepcopy(regions); v[name][start+2]=('movups','xmm0,DWORD PTR [rsp]'); variations.append(v)
        for v in variations:
            try: verify_regions(v, allow_sanitizer)
            except AssertionError: count+=1
            else: raise AssertionError('codegen mutant survived')
    return count


def protector_controls():
    """Compiler-observed shapes, with independent malformed-edge controls.

    The numerical corpus executes actual fresh compiler output. These small
    disassembly fixtures test this parser/checker even on an unprotected host.
    """
    import copy
    count = 0
    positives = 0
    for style in ('gcc_equal', 'gcc_unequal', 'clang_register', 'clang_memory'):
        regions = {}
        labels = {}
        for name in ('native_tt', 'native_si'):
            before = [('endbr64', ''), ('mov', 'rax,' + TLS),
                      ('mov', 'QWORD PTR [rbp-0x8],rax')]
            core = [('stmxcsr', 'DWORD PTR [rbp-0x10]'),
                    ('ldmxcsr', 'DWORD PTR [rbp-0x14]'),
                    ('movups', 'xmm0,XMMWORD PTR [rdi]'),
                    ('cvttss2si', 'eax,xmm0') if name == 'native_tt'
                    else ('cvtsi2ss', 'xmm0,eax')]
            if name == 'native_si':
                core += [('movd', 'eax,xmm0')]
            core += [('stmxcsr', 'DWORD PTR [rsi+0x4]'),
                     ('movups', 'XMMWORD PTR [rsi+0x8],xmm0'),
                     ('ldmxcsr', 'DWORD PTR [rbp-0x10]')]
            if style.startswith('gcc'):
                guard = [('mov', 'rdx,QWORD PTR [rbp-0x8]'), ('sub', 'rdx,' + TLS)]
            elif style == 'clang_register':
                guard = [('mov', 'rdx,' + TLS), ('mov', 'rcx,QWORD PTR [rbp-0x8]'),
                         ('cmp', 'rdx,rcx')]
            else:
                guard = [('mov', 'rdx,' + TLS), ('cmp', 'rdx,QWORD PTR [rbp-0x8]')]
            body = before + core + [('nop', '')] + guard
            branch = len(body)
            if style == 'gcc_equal':
                body += [('je', ''), ('call', '800 <__stack_chk_fail@plt>'), ('leave', ''), ('ret', '')]
                call, normal = branch + 1, branch + 2
                target = normal
            else:
                body += [('jne', ''), ('leave', ''), ('ret', ''), ('call', '800 <__stack_chk_fail@plt>')]
                call, normal = branch + 3, branch + 1
                target = call
            body[branch] = (body[branch][0], f'{0x100 + target*4:x} <{name}+0x{target*4:x}>')
            regions[name] = body
            labels[name] = (len(before), len(before)+len(core)-1,
                            len(before)+len(core)+1, branch, call, normal)
        text = '\n\n'.join(f'00000100 <{name}>:\n' + '\n'.join(
            f' {0x100+i*4:x}: {op} {args}' for i, (op, args) in enumerate(body))
            for name, body in regions.items()) + '\n\n'
        regions = functions(text)
        for sanitized in (False, True):
            verify_regions(regions, sanitized)
            positives += 1
        for name in regions:
            start, end, guard, branch, call, normal = labels[name]
            changes = []

            def change(label, index, op=None, args=None):
                v = copy.deepcopy(regions)
                old = v[name][index]
                v[name][index] = (old[0] if op is None else op,
                                  old[1] if args is None else args, old[2])
                changes.append((label, v))

            for symbol in ('memcpy', 'arbitrary', '__stack_chk_fail_extra', '__stack_chk_fail@plt+0x1'):
                change('call symbol ' + symbol, call, args='800 <' + symbol + '>')
            change('indirect call', call, args='QWORD PTR [rip+0x10] # 800 <__stack_chk_fail@plt>')
            change('initialization bypass to core', 0, 'jmp', f'{0x100+start*4:x} <{name}+0x{start*4:x}>')
            change('initialization bypass after core', 0, 'jmp', f'{0x100+(end+1)*4:x} <{name}+0x{(end+1)*4:x}>')
            change('initialization bypass after save', 0, 'jmp', f'{0x100+(start-1)*4:x} <{name}+0x{(start-1)*4:x}>')
            change('guard missing', guard, 'nop', '')
            change('comparison missing', branch-1, 'nop', '')
            change('comparison wrong', branch-1, 'add', regions[name][branch-1][1])
            change('branch missing', branch, 'nop', '')
            change('branch unconditional', branch, 'jmp')
            change('branch inverted', branch, 'jne' if style == 'gcc_equal' else 'je')
            change('branch wrong function', branch, args=regions[name][branch][1].replace(name, 'other'))
            change('branch wrong destination', branch, args=f'100 <{name}+0x0>')
            change('branch unknown address', branch, args=f'101 <{name}+0x1>')
            change('normal edge calls', normal, 'call', '800 <arbitrary>')
            change('normal edge jumps', normal, 'jmp', f'100 <{name}+0x0>')
            change('normal return absent', normal+1, 'nop', '')
            change('canary clobber QWORD', end+1, 'mov', 'QWORD PTR [rbp-0x8],0x0')
            change('canary clobber DWORD', end+1, 'mov', 'DWORD PTR [rbp-0x8],0x0')
            for delta in range(1, 8):
                change('canary byte overlap ' + str(delta), end+1, 'mov', f'BYTE PTR [rbp-0x{8-delta:x}],0x0')
            change('canary overlap before slot', end+1, 'mov', 'DWORD PTR [rbp-0xa],0x0')
            change('canary vector overlap', end+1, 'movups', 'XMMWORD PTR [rbp-0x10],xmm1')
            change('canary complex frame alias', end+1, 'mov', 'BYTE PTR [rbp+rax*1-0x8],0x0')
            change('guard save absent', 2, 'nop', '')
            change('guard save wrong slot', 2, args='QWORD PTR [rbp-0x18],rax')
            change('guard save wrong register', 2, args='QWORD PTR [rbp-0x8],rcx')
            change('guard save wrong width', 2, args='DWORD PTR [rbp-0x8],eax')
            change('TLS save wrong offset', 1, args='rax,QWORD PTR fs:0x20')
            change('TLS save wrong segment', 1, args='rax,QWORD PTR gs:0x28')
            change('TLS save wrong width', 1, args='eax,DWORD PTR fs:0x28')
            change('call before conversion', 0, 'call', '800 <__stack_chk_fail@plt>')
            change('call inside conversion', start+1, 'call', '800 <__stack_chk_fail@plt>')
            change('call before restore', end-1, 'call', '800 <__stack_chk_fail@plt>')
            change('guard bypass', 0, 'jmp', f'{0x100+call*4:x} <{name}+0x{call*4:x}>')
            change('success bypass', 0, 'jmp', f'{0x100+normal*4:x} <{name}+0x{normal*4:x}>')
            change('return bypass', 0, 'jmp', f'{0x100+(normal+1)*4:x} <{name}+0x{(normal+1)*4:x}>')
            change('early return', 0, 'ret', '')
            change('tail call', 0, 'jmp', '800 <arbitrary>')
            change('comparison bypass', 0, 'jmp', f'{0x100+branch*4:x} <{name}+0x{branch*4:x}>')
            change('duplicate guard address', 0, 'nop', '')
            v = changes[-1][1]
            x = v[name][0]
            v[name][0] = (x[0], x[1], v[name][1][2])
            for label, variant in changes:
                for sanitized in (False, True):
                    try:
                        verify_regions(variant, sanitized)
                    except AssertionError:
                        count += 1
                    else:
                        raise AssertionError(('protector mutant survived', style, name, label, sanitized))
    assert positives == 8 and count == 784, (positives, count)
    return count
