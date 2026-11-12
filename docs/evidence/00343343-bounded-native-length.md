# 0x00343343 bounded native byte-string length

This is a one-expression C++17 repair and a bounded native operation test. It is
not a recovered Xbox calling convention, guest address implementation, original
hardware test, cross-function linkage proof or byte-identical rebuild.

## Original evidence and source change

The complete recorded original body contains 23 bytes and 10 instructions,
matching original body SHA-256
`B83710B0CFFD9CA5DB33993979842E1D7A961BC547C5827CD580E7257E5CF3E1`.
There are no calls, uncovered bytes, listing/length/fallthrough overrides or
independent decode disagreements. The optional private record check validates the
complete indexed record. Program-memory body evidence does not reauthenticate
the complete retail XBE, whose pinned hash is unchanged.

The original instruction sequence is:

1. Load the sole DWORD argument from entry ESP+4 into EAX.
2. TEST EAX,EAX; jump directly to RET 4 if null.
3. Set EDX to EAX+1.
4. Load one byte from EAX into CL, increment EAX, test CL and repeat if nonzero.
5. SUB EAX,EDX; RET 4.

The retained source signature is `int FUN_00343343(char *param_1)`. The only code
replacement is `(int)param_1 - (int)pcVar1` to
`static_cast<int>(param_1 - pcVar1)`, with a nearby contract comment. The exact
null branch, byte load, loop, increment and final return remain unchanged.
No argument, implicit input, external declaration or invented object field is
introduced. The preimage SHA-256 is
`4e22daad0a03b13433bc973d6e3a2a535ef111810c8cae172d443eca587668e4`, and its Git blob is
`0102a60adc8b46f33dbb53ff8556ef9fcc587bee`. The repaired source SHA-256 is
`3060403984f04f490bc1ed3304511620b33fef7d9ee83f06637c33a6ec3b8bbb`.
The manifest and gate pin the exact source reversal, immutable historical
fixture, complete body range, instruction windows and operation/control-flow
schedule separately. GNU objdump independently decodes every byte as i386.

## Defined native domain and relation to the original subtraction

The tested host has 8-bit char, 32-bit int, 64-bit pointers and a ptrdiff_t able to
represent INT_MAX. For a nonnull argument, one live char array contains the first
zero at offset L. All bytes 0 through L are readable; every increment, including
the final advance to one past the zero, must stay within the array or its legal
one-past position. Require **L <= min(INT_MAX,PTRDIFF_MAX)**. The final pointers
are p+L+1 and p+1, so their defined same-array difference is exactly L; converting
that value to int is representable, with no implementation-defined narrowing.
For null input, no pointer arithmetic or memory access occurs and the return is
zero.

The separate integer-only guest arithmetic model admits nonzero G with
G+L+1 <= UINT32_MAX and L <= INT_MAX. Then the original DWORD subtraction
(G+L+1)-(G+1) also equals L, with a nonnegative representable signed result.
Large synthetic integer cases reach INT_MAX without fabricating or subtracting
out-of-object native pointers. No huge-array test is claimed.

This is an explicit domain restriction, not a claim that arbitrary guest
wrapping equals native pointer arithmetic. Guest32 mapping/wrap, register and
EFLAGS poststate, stack/RET 4 transport, faults, MMIO, concurrent observers and
whole-function Xbox runtime behavior remain unverified. The host compiler may
legally optimize accesses under the ordinary nonvolatile object contract; exact
architectural read count/timing is not claimed.

## Gates and observed results

Run `python3 tools/test_cpp_00343343_bounded_length.py`. Use `--sanitize` for GCC
ASan+UBSan and `--private-export PATH` for the selected original export directory.
The existing C++17 audit workflow adds the public command without replacing or
relaxing an earlier gate. Private original records are not needed in CI.

- Full original source fails strict Clang C++17 at O0/O2 with exactly the two
  expected pointer-to-int diagnostics; the complete repaired source passes both.
- Each Clang O0/O2 and GCC O2 ASan+UBSan run passes 548,594 initialized native
  cases and 100,027 deterministic independent DWORD-arithmetic cases.
- Coverage includes null, empty strings, all 255 nonzero byte values, varied
  alignment, first terminator, padding/canaries, random inputs, exact allocation
  extents, and read-only guard-page inputs with zero at the final readable byte.
  The guard fixture explicitly creates a live char array using placement new.
- Ten executable mutants must compile and fail with the specific model-mismatch
  exit status, rather than crashes or compilation errors. They alter the null
  result, subtraction base/sign, +/-1 result, read offset, pointer stride,
  high-byte condition, empty/nonempty result or loop count.
- Public mutation controls reject 10 source, 18 manifest and 69 body/window
  corruptions. Optional private validation rejects 159 identity, coverage,
  opcode, operand, analysis-override and control-flow corruptions.
- ASan and UBSan remain enabled. LeakSanitizer is disabled for this environment
  and is not claimed tested.

Only the compiled native C++ function with initialized valid arguments executes.
No original game instruction stream or uploaded script runs. Focused gates do
not replace an exact-tree full inventory audit, and this document does not change
or predict the published syntax count or any 1:1 percentage.
