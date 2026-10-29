# 0x00155840 — complete 48-byte upload storage, indirect target audit, x87 edge checks

Date: 2026-10-29. Source: authenticated original Xbox XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Caller body (1,500 bytes) SHA-256:
`F7B7FFD8D854213AFA2EF6FFE9CE142C332CD7EC3A27B05BCCE526F83A1A78C6`.

## All twelve upload words and their final original writer

| Word | Original EBP offset | Final writer before REP MOVSD | Meaning from machine instructions |
|---|---|---|---|
| 0 | -0x68 | 0x00155C01 | x87 FSTP m32fp, vector component |
| 1 | -0x64 | 0x00155C0D | x87 FSTP m32fp |
| 2 | -0x60 | 0x00155C19 | x87 FSTP m32fp |
| 3 | -0x5c | 0x0015595B | original immediate 0x3f800000, float 1.0 |
| 4 | -0x58 | 0x00155D24 | x87 FSTP m32fp |
| 5 | -0x54 | 0x00155D2A | x87 FSTP m32fp |
| 6 | -0x50 | 0x00155D33 | x87 FSTP m32fp |
| 7 | -0x4c | 0x00155C3D | original MOV DWORD 0 |
| 8 | -0x48 | 0x00155D0A | x87 FSTP m32fp |
| 9 | -0x44 | 0x00155D13 | x87 FSTP m32fp |
| 10 | -0x40 | 0x00155D1C | x87 FSTP m32fp |
| 11 | -0x3c | 0x00155C44 | original MOV DWORD 0 |

These are **last-write observations on the upload-reached path**, not an assertion
that every source value is initialized on all earlier exits. Some entries have
previous writes on intermediate branches. Preserve the original instructions,
operation order, exceptional behavior and intermediate x87 precision.

At 0x00155D36, a branch skips the copy when the original 0x10 flag is set.
Otherwise 0x00155D38..45 issues ECX=12, ESI=&[EBP-0x68],
EDI=0x0037E1E8, REP MOVSD; even if the copy is skipped,
0x00155D47..51 passes 12 in the stack, EDX=&[EBP-0x68],
ECX=0x1b to 0x0036F6C0. The shader helper's **actual side effects and
native-call ABI remain unverified**.

## New executable, separately scoped C11 helper

`include/bf_00155840_upload_bridge.h` replays only the conditional 12-word
copy using read/write guest DWORD callbacks and 32-bit guest addresses; no
host-pointer cast, no synthesized missing bytes, no change to the original
`FUN_00155840` source body. It also exposes the recorded call inputs for
0x0036F6C0. Fault returns are diagnostics, not guest exception/SEH behavior.

`tests/test_00155840_upload_bridge.c` exercises 512 data cases, conditional
skip, in-order read/write, forward-overlap semantics, and each of twelve
read/write failure positions (45,438 assertions in each local build).
Clang ISO C11 -O0 and -O2 and AddressSanitizer/UBSan checks passed.

`tests/test_00155840_x87_rounding.c` exercises the previously implemented
0x000621C0 guest/x87 instruction bridge with a **test-only** host long-double
reference backend, four rounding modes, positive and negative half-ULP ties,
infinity×zero invalid operation, float32 overflow, and underflow.
Tests passed at -O0, -O2, and with sanitizers. They are bounded checks on a
host reference: **not original Xbox control word, full 80-bit status,
trap delivery, signed-zero/NaN payload equivalence or guest SEH parity**.

## Concrete virtual method target: still unresolved

At 0x00155A7E..92, the caller obtains an object pointer from [EBP+8],
reads a table pointer at [object+0x48], and performs
`call dword ptr [table+0x14]`, then uses the **returned EAX** as the
ECX matrix pointer for 0x000621C0.

Searching the original XBE reveals **19 separate stored occurrences**
of the function pointer 0x00155840, including distinct table layouts.
This supports the need for a real object-construction/vtable assignment
trace, **not** selecting one guessed target by table proximity.
None of these 19 occurrences identifies the concrete target of
`[table+0x14]` in a particular runtime object.

The existing virtual executor correctly requires an explicitly recognized
target; its test method is synthetic. Do not hard-code the synthetic target
or invent a universal concrete method.

## Reproducible original binary evidence

Run locally with the user's private XBE, never adding it to Git:

`python3 tools/verify_00155840_original_frame.py /path/to/default.xbe`

This checks the original whole-file hash, the caller body hash, 26
instruction fingerprints, and prints the candidate function-pointer slots.
It is not a dynamic vtable trace and cannot prove runtime target identity.

## Remaining implementation gates

1. Follow construction and assignment of the subobject vtable at
   [object+0x48] to identify concrete implementations and their EAX contracts.
2. Recreate the full path-sensitive x87 production of all twelve upload
   words, including SSE scalar instructions and float32 stores before copy.
3. Provide a real x87 executor with the original control/status state,
   NaN/denormal behavior, exception ordering, and guest SEH translation.
4. Only then wire the guest execution bridges into original
   `FUN_00155840` and run focused + full-tree C11 audits plus behavioral
   comparisons.

**No claim of 1:1 full-function correctness or fewer source syntax
failures follows from these helpers or tests.**
