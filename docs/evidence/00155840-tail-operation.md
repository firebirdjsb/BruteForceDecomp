# 0x00155840 bounded tail operation

Status: the complete arithmetic/memory sequence at `0x00155c1c..0x00155d35`
has an isolated ISO C11 instruction-backend implementation. The original
`FUN_00155840` caller remains unchanged and unintegrated. This makes no syntax
coverage, full-function behavior, Xbox execution or rebuilt-byte-match claim.

## Authenticated original evidence

The verifier section-maps the private original image and checks all four hashes:

| Original span | SHA-256 |
| --- | --- |
| Whole XBE | `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` |
| 1,500-byte body at `0x00155840` | `F7B7FFD8D854213AFA2EF6FFE9CE142C332CD7EC3A27B05BCCE526F83A1A78C6` |
| 282-byte tail at `0x00155c1c` | `26B91436B54E8C53FCE7F711A5EEE4A9C238F3A8765F61316C689E3F0AF2B58C` |
| 40-byte getter at `0x0001fc40` | `DE39B6DECE42B44E9508DD2033A9641D4725D83CE2F99F0BBC52BE9D5E26A993` |

`include/bf_00155840_tail_operation.h` extends the existing callback vocabulary
locally with memory FDIV, FSUBP, non-popping FST, indexed register duplication,
register multiplication, exchange and discard. Every operation records its
original instruction address. Values remain in the executing backend's x87
stack until the original spill; the header uses no host floating arithmetic.
Both RSQRTSS low results require an explicit approximation/environment backend.

The getter callback receives original EAX=`EBP-0x38`, ECX=ESI and must execute
the original getter's effects. Original `0x0001fc40` never changes EAX; the
interface cannot redirect later memory reads. Its complete guest CALL/RET,
scratch allocation and floating state remain the callback owner's responsibility.
The test uses a documented synthetic scratch span solely for that callback.

Integer loads/copies remain interleaved with the floating operations. A byte
read at `0x0037bd48` occurs at `0x00155ce5`; the result of TEST AL,0x10 is
returned for the subsequent branch. This does not add a guessed global type.
Other general registers and upper XMM0 lanes are outside the operation.

## Local validation

`scripts/verify_00155840_tail_operation.py --xbe <private-image>` requires
x86-64 Windows, Clang and Capstone (`--tooldeps` can identify its private
installation). It generates an executable oracle in a temporary directory from
the authenticated original bytes. Original bytes are never committed.

The oracle adapts only the host execution boundary: a register-preserving
Windows x64 entry wrapper; original EBP memory accesses through RBP with a
frame allocated below 4 GiB; a relocated getter CALL; RSP-width getter scratch
allocation; the absolute byte load through an explicit R8 test pointer; and
snapshots of both rounded RSQRT inputs outside the tested frame. Snapshot MOVs
do not change floating state or the later TEST flags. It is an adapted host
instruction oracle, not an unmodified original-Xbox process.

Clang C11 `-O0` and `-O2`, each with `-Wall -Wextra -Werror -pedantic-errors
-ffp-contract=off`, passed **389,439 assertions per build**:

- 4,096 finite cases compare all affected frame words and both RSQRT inputs
  against the adapted original-byte oracle. All four x87 rounding modes occur;
  a preexisting x87 stack sentinel survives both paths unchanged.
- The exact 84-event guest memory trace is independently derived from the
  authenticated original instructions, including integer copies, byte read
  and the documented getter scratch model. Every access failure stops at its
  original prefix; the attempted address is reported where owned by the tail.
- All 81 floating-backend failure positions, both RSQRT failures, getter
  refusal and an invalid interface fail explicitly.
- Three negative controls fail at both optimization levels. Prematurely
  rounding the retained first cross-product X changes a compared RSQRT input;
  prematurely rounding normalized X/Y changes compared arithmetic output.
  These controls must fail an arithmetic comparison, not merely a trace count.
  Swapping the integer output copies fails the original-derived memory trace.

The production header also passes standalone C11 syntax for i686 and x86-64.
These tests use actual host x87 instructions and host RSQRTSS; they do not
establish Xbox-specific approximation, NaN, denormal, control/status, trap or
exception-restart parity. Callback failure reporting is diagnostic; effects
already applied are not rolled back, and original fault restart is unverified.

## Integration and rollback boundary

The returned matrix words/layout still require original evidence for supported
caller object layouts. The isolated operation is not connected to the caller
before that evidence exists. Source inventory, progress/coverage, the original
function and existing unrelated edits are untouched. No game process, installed
mod, save, production data or deployment was touched. The new helper, verifier,
test and this evidence document can be removed together to roll back this work.
