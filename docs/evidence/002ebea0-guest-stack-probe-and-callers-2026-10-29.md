# 0x002EBEA0 original x86 stack probe: verified guest interface

Date: 2026-10-29. Reference image: user's private original
`default(2).xbe` SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original bytes `0x002EBEA0..0x002EBEE0` (65 bytes) SHA-256
`B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760`.
The original `FUN_002ebea0` draft remains unchanged and
`ABI_UNVERIFIED`; this is *not* a whole-function 1:1 verdict.

## Original executable, not a generic `alloca`

At `0x002EBEA0`, the incoming EAX is the allocation byte count;
incoming ESP addresses the CALL-pushed return word.

| Original path | Instruction behavior verified |
| --- | --- |
| EAX = 0 | `TEST EAX,EAX; JE; RET`. No frame allocation or probe. |
| 0 < EAX < 0x1000 | EAX becomes `ESP+4-size`; `TEST DWORD [EAX],EAX` touches that guest location. `XCHG ESP,EAX; MOV EAX,[EAX]; PUSH EAX; RET` relocates return address. |
| EAX >= 0x1000 | `PUSH ECX`, then `ECX = original ESP+4`. Repeatedly subtract 0x1000 from ECX/EAX and `TEST DWORD [ECX],EAX`. After the final remainder, `TEST DWORD [ECX],saved-ECX-stack-VA`; restore ECX and return address; `PUSH` and `RET`. |

Successful original output: next EIP = original return DWORD, guest
ESP = entry ESP + 4 - requested bytes. For nonzero sizes, original
EAX becomes the return DWORD. ECX is preserved. The original TEST
writes CF=0, OF=0, and sets PF, SF and ZF; AF is undefined.
Memory-page access failures and guest exception dispatch must be handled
by an actual guest CPU backend, not by C host exceptions or a guessed
stack pointer.

Important alias: for allocations 1, 2 or 3 bytes, the relocated
return-address word partially overlaps the *old* return slot. Original
source contents at the old slot are not necessarily preserved.

## Source artifacts and tests

- `src/guest_cpu/bf_002ebea0_guest_chkstk.h` models guest reads,
  page touches, guest writes, return-address relocation and defined
  EFLAGS. All addresses are 32-bit unsigned; it never casts a guest
  address into a native host pointer and never modifies host ESP.
- `src/guest_cpu/bf_002ebea0_callers.h` binds two **observed**
  original-prologue callsites without guessing their function inputs:

| Caller | Original prologue | EAX allocation | Return EIP |
| --- | --- | --- | --- |
| `0x001F3AA0` | `PUSH EBP; MOV EBP,ESP; AND ESP,0xFFFFFFF0` | `0x20A8` | `0x001F3AB0` |
| `0x00269600` | `PUSH EBP; MOV EBP,ESP; AND ESP,0xFFFFFFF8` | `0x14B4` | `0x00269610` |

Both bindings derive original call-entry ESP as
`(guest_EBP & alignment_mask)-4`. The original CPU CALL's pushed
return address must already exist at that location before calling the
guest probe bridge. No original callers are patched until their
implicit entry-register contracts and all stack locals are recovered.

- `tests/test_002ebea0_guest_chkstk.c` exercises 16 sizes,
  128 repetitions, probe read/write ordering, alias cases, faults,
  EFLAGS and exact-multiple-of-page behavior; 51,386 focused assertions.
- `tests/test_002ebea0_callers.c` checks 16 EBP alignments for
  each caller, original requested sizes and return addresses; 788
  assertions per optimization level.
- `scripts/verify_002ebea0_guest_chkstk_xbe.py` checks original XBE
  whole-file hash, exact 65-byte function hash, and 11 original
  instruction windows, including both caller sites. Run locally
  against the private user-supplied executable, never upload XBE.

The isolated C11 tests pass Clang at `-O0` and `-O2`, plus ASan
and UBSan for the guest probe. These are deterministic guest-memory
fixtures with verified instruction ordering; they are **not** Xbox
hardware exception, memory-map or native function ABI parity.

## Next implementation gate

Recover original `0x001F3AA0` and `0x00269600` stack-frame
lifetime/extent after the allocation, including the 0x100-increment
sparse zero writes in `0x001F3AA0` and the REP STOSD/MOVSD regions
in `0x00269600`. Connect them to a guest-memory CPU state rather
than treating Ghidra `stack0x...` symbols as host globals.
Then repair original FUN_ source and compare source semantics against
the original instruction windows.

Syntax coverage is a **separate** metric. None of the three unmodified
original function sources is marked newly syntax passing by this bridge.
