# 0x002eaa70 bounded native word-string length

This is one C++17 expression repair supported by a bounded native operation
model. It is not a recovered Xbox ABI, guest address implementation, original
hardware test, cross-function linkage proof, or byte-identical rebuild.

## Original evidence and exact source change

The complete original body has 22 bytes and 10 instructions, original-body
SHA-256 `AB4BAB194AAE7751EAE686A11B9B3777DD65C29138D9A7D064CC8A88CB137299`.
The selected private record has no calls, uncovered bytes, analyzed overrides,
or independent decode disagreements. Its complete indexed record is optionally
replayed by the gate. Program-memory body consistency does not reauthenticate
the full retail XBE. Its pinned original hash remains unchanged.

The original instructions load EAX from entry ESP+4; load a word at EAX into CX;
increment EAX twice; TEST CX,CX; and JNZ back to the word load. Once the word is
zero, they SUB the original entry argument from EAX, SAR EAX by 1, DEC EAX, and
RET without an immediate. This is a complete function body, not a fragment.
There is no null guard and none is added. No call, implicit-input parameter,
external declaration, or object field is introduced.

The signature remains `int FUN_002eaa70(short *param_1)`. The one expression
changes from `((int)psVar2 - (int)param_1 >> 1) + -1` to
`static_cast<int>(psVar2 - param_1) - 1`, with a nearby domain comment.
The original word load, loop test, increment, and return position are unchanged.

- Exact baseline commit: `dcfa46ea5ff5774364e45f18e0cb521c44559801`.
- Preimage SHA-256: `127b3aeb95429bc817d4092f6f0474db01b1b39bae4d83d314b745bd79ed23cf`.
- Preimage Git blob: `02972748ce3c900492d65a542e33bde1f64f4c3d`.
- Repaired source SHA-256: `916c139a16084a113a24f512e98843917b6bd12e5f7a675eebb77c169dd969af`.

The manifest and gate pin the complete source before and after the change, an
exact reversible replacement, all original bytes, instruction boundaries,
operands, and control-flow edges. GNU objdump independently decodes every byte
as i386. The original bytes are data for decoding only and are never executed.

## Defined native domain and the SAR cutoff

The tested host has 8-bit char, two's-complement 16-bit short, 32-bit int, and
64-bit pointers. The fixture asserts SHRT_MIN == -32768 and SHRT_MAX == 32767,
so every nonzero raw word pattern is nonzero as a native short.
The argument is non-null and suitably aligned into one live short array with
its first zero at element L. All elements through that zero must be readable.
Every pointer advance, including the last, must remain in the array or at its
legal one-past position. Require **L <= 0x3ffffffe and L+1 <= PTRDIFF_MAX**.
The final element difference is L+1, representable in ptrdiff_t and int; the
repaired return is therefore exactly L with no signed overflow or narrowing.

The independent integer model admits G >= 1 and
G+2*(L+1) <= UINT32_MAX. The original DWORD SUB then yields 2*(L+1), at most
0x7ffffffe. Its sign bit is clear, so SAR by 1 yields L+1 and DEC yields L.
The bound matters: at excluded L=0x3fffffff, SUB yields 0x80000000 and SAR/DEC
produces 0xbfffffff, not L. The model checks this counterexample explicitly.
It is not safe to call this an unrestricted word-string length replacement.

Large lengths and high guest bases are tested as integers only, not giant
native allocations or fabricated native pointers. No unaligned short pointer,
null input, unterminated object, or out-of-bounds native pointer is executed.
Guest mapping/wrap, register and flags poststate (including the preserved high
half of ECX), stack/RET transport, faults, MMIO, and concurrent access remain
unverified. Host optimizations may alter the architectural read count or timing
under the ordinary nonvolatile object contract. No such equivalence is claimed.

## Gates and observed results

Run `python3 tools/test_cpp_002eaa70_bounded_length.py`. `--sanitize` enables GCC
ASan+UBSan; `--private-export PATH` checks the selected original export record.
Public CI needs neither the private export nor the original XBE. The new gate
is added after the existing bounded-byte-length gate, without relaxing it.

- Strict Clang C++17 at O0 and O2 rejects the complete preimage with exactly two
  pointer-to-int errors and accepts the complete repaired source.
- Clang O0/O2 and GCC O2 ASan+UBSan each pass 2,113,265 initialized native cases
  and 100,030 deterministic independent DWORD arithmetic cases.
- Inputs cover all 65,535 nonzero word bit patterns, eight string lengths, four
  array offsets, empty strings, first terminator behavior, padding/canaries,
  random mixed words, exact allocation extents, and a read-only guarded page
  with zero at its last readable word. Placement new explicitly establishes
  the live short array in that guarded mapping.
- Eleven executable source mutations compile and fail by the explicit
  model-mismatch status. Compilation failures or crashes do not count. They
  alter the starting pointer, read offset, stride, return offset/sign, word
  width/sign termination, loop count, or erroneously halve the element count.
- Negative controls reject 9 source, 18 manifest, and 68 raw-body/window
  corruptions. Private validation rejects 159 record/coverage/operand/override/
  control-flow corruptions.
- ASan and UBSan remain enabled; LeakSanitizer is disabled and not claimed.

Only initialized compiled native C++ executes. Focused tests do not substitute
for the exact-tree full-inventory audit. This document does not change or predict
the published syntax count, guest ABI status, or any 1:1 runtime percentage.
