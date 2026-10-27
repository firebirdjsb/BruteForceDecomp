# 0x002EBEA0: explicit guest stack-effect model

This header models one original function using caller-supplied register state
and four-byte memory callbacks. It does not replace the existing entry source,
change callers, manipulate host ESP, or introduce a global register runtime.
The scoped successful-state model has been compared with a byte-authenticated
native i686 oracle. The original entry and caller bridges remain unresolved.

## Provenance and source boundary

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Original entry `0x002EBEA0`, contiguous 65 bytes
  `0x002EBEA0..0x002EBEE0`.
- Original body SHA-256:
  `B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760`.
- Header `include/bf_x86_stack_probe_002ebea0.h`, SHA-256:
  `5B1743FF0A0349EAD61746FBFF5185A5BB4C159D22F425AB5DA5F2B76D35BA34`.

Fresh private inspection authenticated the whole XBE, original body digest
and all original instruction bytes before this model was written. No behavior
or implementation from another title was used.

## State and preconditions

`bf_stack_probe_002ebea0_state` contains DWORD EAX, ECX, ESP, EIP, EFLAGS and
an EFLAGS definedness mask. The entry preconditions are EIP=`0x002EBEA0` and a
valid memory object with both valid callbacks. The model supplies no fallback
for invalid callbacks or entry state. Registers outside this explicit state
are not implemented as globals or synthesized values.

The memory backend receives the original access's starting uint32 address and
value. Every original memory operand is a four-byte access, including TEST
probes, saved ECX, original return-address reads, relocated return-address
writes and RET reads. DWORD address calculations wrap before the callback.
The backend decides what happens to the access's four-byte extent at page or
address-space boundaries; this model does not split or wrap each byte itself.

## Successful traces

Let `N` be input EAX, `S` input ESP, `C` input ECX, and `A=S+4-N`, with all
address arithmetic modulo 2^32. `R` denotes the original return DWORD at S.
The following results assume a coherent backend with no asynchronous memory
mutation; the actual callbacks remain authoritative for each individual read.

### N = 0

TEST EAX,EAX at `0x2EBEA0` updates logical flags; JE reaches RET at
`0x2EBEB8`. The only memory access is read32(S). Result: EAX=0, ECX=C,
ESP=S+4, EIP=R.

### 0 < N < 4096

NEG/ADD/ADD at `0x2EBEAB..0x2EBEAF` compute A in EAX. Access order:

1. `0x2EBEB2`: read32(A), TEST the result against EAX=A.
2. XCHG ESP,EAX gives ESP=A, EAX=S.
3. `0x2EBEB5`: read32(S), load EAX=R.
4. `0x2EBEB7`: write32(A-4,R), then commit ESP=A-4.
5. `0x2EBEB8`: read32(A-4), then commit ESP=A and EIP=read value.

Final EAX=R, ECX=C, ESP=A, EIP=R. Final logical flags reflect
memory[A] AND A, with no later flag-writing instruction.

### N >= 4096

At `0x2EBEB9` write32(S-4,C), then commit ESP=S-4. LEA sets ECX=S+4.
For j=1 through floor(N/4096), the loop subtracts 4096 from ECX and EAX,
then at `0x2EBEC9` reads `S+4-4096*j` and TESTs against the remaining
EAX=`N-4096*j`. CMP/JAE determine whether to repeat.

After the loop, SUB at `0x2EBED2` subtracts the remaining EAX from ECX,
giving A. MOV at `0x2EBED4` sets EAX=S-4. Remaining accesses in order:

1. `0x2EBED6`: read32(A), TEST against EAX=S-4.
2. MOV ESP,ECX gives ESP=A.
3. `0x2EBEDA`: read32(S-4), restore ECX=C.
4. `0x2EBEDC`: read32(S), load EAX=R.
5. `0x2EBEDF`: write32(A-4,R), then commit ESP=A-4.
6. `0x2EBEE0`: read32(A-4), then commit ESP=A and EIP=read value.

For an exact positive multiple of 4096, the last loop probe and final probe
read the **same address twice**. The final TEST uses S-4 as its other operand;
the loop's EAX operand at its last probe is zero. Neither read is elided.
Final EAX=R, ECX=C, ESP=A, EIP=R. Final logical flags reflect memory[A]
AND (S-4).

## Flag values and definedness

The arithmetic mask is CF/PF/AF/ZF/SF/OF = `0x8D5`. ADD, SUB, CMP and NEG
calculate these six values using unsigned DWORD arithmetic; CMP only writes
flags, and NEG is modeled as subtraction from zero. PF uses even parity of
the low eight result bits. LEA, MOV, XCHG, PUSH, RET and branches do not
change flags in this model.

TEST clears CF/OF, calculates PF/ZF/SF, and leaves AF's stored value intact
while clearing its definedness bit. This retained value is not a claim that
the original AF is preserved. Every arithmetic instruction marks all six
arithmetic flag bits defined. Other EFLAGS values and definedness bits retain
their incoming state; no host flag state is consulted.

## Fault result contract

A false read32/write32 immediately returns READ_FAULT/WRITE_FAULT with the
failed starting address and EIP at the exact original instruction. Register
and flag results contain only the completed instruction prefix. A failing
TEST read does not update its flags; a failing MOV read does not assign its
destination. A failing PUSH write does not commit its ESP decrement. A
failing RET read does not increment ESP or assign its destination EIP.

Earlier successful writes are never rolled back. Backend partial writes on
a failed write are also not undone. This is a deterministic prefix-publication
contract, **not guest exception delivery**: it does not model guard-page
handling, exception frames, kernel stack growth, debug traps, interrupts,
instruction fetch faults, access checks on register-only instructions or
microarchitectural restart state. Success leaves fault_address=0, which is
not interpreted as a guest read or synthesized memory value.

## Checks and integration limits

The header passes Clang ISO C11 syntax checks using an including translation
unit that calls the public model, with `-Wall -Wextra -Werror -pedantic`, for
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`. Directly compiling the
header alone with unused-static-function warnings is not an integration test.
Repeat the checks with `python scripts/verify_002ebea0_stack_probe.py`; pass
`--xbe` with a private original image to recheck instruction provenance too.
Clang must be on PATH. No emulator package or new compiler dependency is added.

- Portable O0/O2 builds each pass 478 scenarios and 15,682 checks. These
  compare independent formula-derived memory traces, full byte buffers,
  register/flag prefixes, every-access failure injection, partial failed writes,
  callback-authoritative reloads, wrapping backend mappings and huge requests
  that promptly encounter an unavailable probe. Thirteen cases use the actual
  rounded allocation and relative frame formulas of the two pilot callers.
- On Windows, the runner also builds an i686 executable at O0/O2. It parses
  the temporary PE export labels and requires the assembled reference body's
  length and SHA-256 to equal the original 65 bytes **before execution**.
  Deliberately altered temporary copies are rejected without execution.
- Each native build passes 2,160 successful, fully mapped comparisons. The
  reference performs real ESP changes in a synthetic mapping. The trampoline
  restores the host stack before capturing flags with PUSHFD, using only
  MOV/LEA before that capture. Both executions start with identical memory at
  identical addresses; every mapped byte and EAX/ECX/ESP/return EIP is compared.
  Native flags compared are CF/PF/ZF/SF/OF plus DF; undefined AF is excluded.
- Three mutations of the actual header are rejected: eliding the duplicate
  final exact-page probe, using the wrong final TEST operand, and claiming AF
  is defined. An independent reviewer approved the model, C tests and runner;
  the coordinator independently reviewed the reviewer's assembly compatibility
  changes and reran all checks.

The oracle uses the original body's exact encodings, including four pinned
register-register direction forms for which the assembler otherwise selects
equivalent alternative opcodes. Its no-handler COFF feature metadata preserves
SafeSEH compatibility. No original executable, generated PE, asset or full
decompiler dump is committed. Temporary binaries are discarded after testing.
The full-audit workflow runs the portable checks on Linux; native i686 execution
is explicitly Windows-only. None of this is a byte-identical game rebuild,
Xbox stack-growth test, fault-delivery test or connected guest-runtime bridge.

The original 13,694 entry sources, their signatures and inventory verification
labels are unchanged. The new internal header, test sources, runner, evidence
and scoped CI/provenance checks are the implementation. Neither pilot caller
is counted as repaired merely for having a tested allocation formula. No game
installation, production data or deployment was touched. Rollback reverts the
scoped commit and reruns the complete audit.
