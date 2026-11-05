#!/usr/bin/env python3
"""Fail-closed bit-origin graph for the two compiled native timestamp leaves.

This is authored analysis of generated native instructions, not game execution.
It accepts only a small scalar transfer language and checks all accesses.
"""
from dataclasses import dataclass
import re


def need(ok, message):
    if not ok:
        raise ValueError(message)


@dataclass(frozen=True)
class Pointer:
    kind: str
    offset: int = 0


def bits(value, width=64):
    return tuple((value >> bit) & 1 for bit in range(width))


REGISTERS = {name: (name, 64) for name in
             ('rax', 'rbx', 'rcx', 'rdx', 'rsi', 'rdi', 'rbp', 'rsp',
              'r8', 'r9', 'r10', 'r11', 'r12', 'r13', 'r14', 'r15')}
REGISTERS.update({name: ('r' + name[1:], 32) for name in
                  ('eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp')})
REGISTERS.update({f'r{i}d': (f'r{i}', 32) for i in range(8, 16)})
LOW = tuple(('low', bit) for bit in range(32))
HIGH = tuple(('high', bit) for bit in range(32))


def parse_disassembly(text, symbol):
    current = False
    result = []
    cursor = None
    for line in text.splitlines():
        heading = re.fullmatch(r'([0-9a-f]+) <([^>]+)>:', line.strip())
        if heading:
            current = heading[2] == symbol
            continue
        if not current or not line.strip():
            continue
        match = re.fullmatch(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )+)\s*([a-z][a-z0-9]*)\s*(.*?)\s*', line)
        need(match is not None, 'unparsed generated instruction: ' + line)
        address = int(match[1], 16)
        raw = bytes.fromhex(match[2])
        need(cursor is None or address == cursor, 'generated instruction gap')
        cursor = address + len(raw)
        result.append((match[3], match[4]))
    need(result, 'missing native symbol')
    return result


def check_graph(instructions, pointer_leaf):
    registers = {name: tuple((name, bit) for bit in range(64))
                 for name, width in REGISTERS.values() if width == 64}
    original = dict(registers)
    registers['rsp'] = Pointer('stack')
    registers['rdi'] = Pointer('output') if pointer_leaf else registers['rdi']
    memory = {}
    stores = []
    reads = 0
    returned = False

    def read_register(name):
        need(name in REGISTERS, 'unsupported register ' + name)
        base, width = REGISTERS[name]
        value = registers[base]
        need(width == 64 or not isinstance(value, Pointer), 'pointer narrowing')
        return value if width == 64 else value[:width]

    def write_register(name, value):
        need(name in REGISTERS, 'unsupported register ' + name)
        base, width = REGISTERS[name]
        if isinstance(value, Pointer):
            need(width == 64, 'pointer truncation')
            registers[base] = value
        else:
            need(len(value) >= width, 'short register assignment')
            registers[base] = value[:width] + (0,) * (64 - width)

    def location(text):
        match = re.fullmatch(r'(DWORD|QWORD) PTR \[([a-z0-9]+)([+-]0x[0-9a-f]+)?\]', text)
        need(match is not None, 'unsupported memory operand: ' + text)
        pointer = read_register(match[2])
        need(isinstance(pointer, Pointer), 'unproved memory address')
        offset = int(match[3], 16) if match[3] else 0
        return Pointer(pointer.kind, pointer.offset + offset), 4 if match[1] == 'DWORD' else 8

    def load(pointer, size):
        need(pointer.kind == 'stack', 'unexpected non-stack read')
        need(registers['rsp'].offset - 128 <= pointer.offset and pointer.offset + size <= 0, 'stack load outside scratch')
        need(all(pointer.offset + i in memory for i in range(size)), 'uninitialized stack load')
        data = tuple(memory[pointer.offset + i] for i in range(size))
        if size == 8 and all(isinstance(b, tuple) and len(b) == 3 and b[0] == 'pointer-byte' for b in data):
            need(all(b == ('pointer-byte', data[0][1], i) for i, b in enumerate(data)), 'split pointer')
            return data[0][1]
        need(all(isinstance(b, tuple) and len(b) == 8 for b in data), 'mixed pointer bits')
        return sum(data, ())

    def save(pointer, size, value):
        if pointer.kind == 'output':
            need(pointer_leaf and reads == 1 and size == 4 and not isinstance(value, Pointer), 'output access width/source/order')
            stores.append((pointer.offset, value[:32]))
            return
        need(pointer.kind == 'stack' and registers['rsp'].offset - 128 <= pointer.offset and pointer.offset + size <= 0, 'stack write outside scratch')
        if isinstance(value, Pointer):
            need(size == 8, 'narrow pointer spill')
            data = [('pointer-byte', value, i) for i in range(8)]
        else:
            need(len(value) >= size * 8, 'short stack store')
            data = [value[i*8:(i+1)*8] for i in range(size)]
        for i, byte in enumerate(data):
            memory[pointer.offset + i] = byte

    def read_operand(text, width):
        if text in REGISTERS:
            return read_register(text)
        if re.fullmatch(r'0x[0-9a-f]+', text):
            return bits(int(text, 16), width)
        pointer, size = location(text)
        need(size * 8 == width, 'load width mismatch')
        return load(pointer, size)

    for index, (op, args) in enumerate(instructions):
        need(not returned, 'instruction after return')
        operands = args.split(',') if args else []
        if op == 'endbr64':
            need(index == 0 and not args, 'entry marker not at entry')
        elif op == 'rdtsc':
            need(not args and reads == 0, 'not exactly one RDTSC')
            reads += 1
            write_register('eax', LOW)
            write_register('edx', HIGH)
        elif op == 'mov':
            need(len(operands) == 2, 'mov arity')
            dst, src = operands
            if dst in REGISTERS:
                width = REGISTERS[dst][1]
                write_register(dst, read_operand(src, width))
            else:
                pointer, size = location(dst)
                save(pointer, size, read_operand(src, size * 8))
        elif op in ('shl', 'shr', 'or', 'xor'):
            need(len(operands) == 2 and operands[0] in REGISTERS, 'ALU operands')
            dst, src = operands
            value = read_register(dst)
            need(not isinstance(value, Pointer), 'bitwise pointer operation')
            width = len(value)
            if op in ('shl', 'shr'):
                need(re.fullmatch(r'0x[0-9a-f]+', src), 'non-immediate shift')
                shift = int(src, 16)
                need(0 <= shift < width, 'unsupported shift')
                value = ((0,) * shift + value[:width-shift] if op == 'shl'
                         else value[shift:] + (0,) * shift)
            else:
                rhs = read_operand(src, width)
                need(not isinstance(rhs, Pointer) and len(rhs) == width, 'ALU width')
                out = []
                for left, right in zip(value, rhs):
                    if op == 'xor':
                        need(left == right, 'unsupported nonzero XOR')
                        out.append(0)
                    else:
                        need(left == 0 or right == 0 or left == right, 'overlapping symbolic OR')
                        out.append(right if left == 0 else left)
                value = tuple(out)
            write_register(dst, value)
        elif op in ('add', 'sub'):
            need(len(operands) == 2 and re.fullmatch(r'0x[0-9a-f]+', operands[1]), 'non-immediate pointer offset')
            dst, amount = operands
            value = read_register(dst)
            need(isinstance(value, Pointer), 'unproved arithmetic')
            amount = int(amount, 16) * (1 if op == 'add' else -1)
            write_register(dst, Pointer(value.kind, value.offset + amount))
        elif op == 'push':
            need(operands == ['rbp'], 'unexpected push')
            sp = registers['rsp'];need(sp == Pointer('stack'), 'unexpected stack frame')
            registers['rsp'] = Pointer('stack', -8)
            save(registers['rsp'], 8, read_register('rbp'))
        elif op == 'pop':
            need(operands == ['rbp'], 'unexpected pop')
            sp = registers['rsp'];need(sp == Pointer('stack', -8), 'unbalanced frame')
            write_register('rbp', load(sp, 8))
            registers['rsp'] = Pointer('stack')
        elif op == 'leave':
            need(not args and registers['rbp'] == Pointer('stack', -8), 'unexpected leave')
            write_register('rbp', load(Pointer('stack', -8), 8))
            registers['rsp'] = Pointer('stack')
        elif op == 'ret':
            need(not args and reads == 1 and registers['rsp'] == Pointer('stack'), 'return/read/stack mismatch')
            need(all(registers[r] == original[r] for r in ('rbp', 'rbx', 'r12', 'r13', 'r14', 'r15')), 'callee-saved register changed')
            expected = bits(1) if pointer_leaf else LOW + HIGH
            need(registers['rax'] == expected, 'incorrect return transport')
            need(stores == ([(0, LOW), (4, HIGH)] if pointer_leaf else []), 'not exactly low/high DWORD stores in order')
            returned = True
        else:
            raise ValueError('unsupported native operation: ' + op + ' ' + args)
    need(returned, 'missing return')
