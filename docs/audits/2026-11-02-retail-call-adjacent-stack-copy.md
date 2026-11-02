# Retail-XBE call-adjacent and stack-copy evidence — 2026-11-02

Evidence source: authenticated original retail `default.xbe`, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Private XBE bytes remain outside Git. The preceding/succeeding instruction windows for 40 previously authenticated direct E8 edges are pinned in `scripts/verify_cpp_20261102_40_adjacent_windows.py`; 21 further instruction windows support the two specific contracts below. These are x86 instruction observations, not verified C++ prototypes.

## `0x000F4830` and `0x00106600` → `0x001ED100`

Both callers reserve `0x224` bytes of stack storage, compute `ECX = ESP+4`, push ECX as a destination argument, and call `0x001ED100`. Both subsequently test **AL**, not the entire EAX register. The callee obtains its destination from the incoming stack argument, sets `ECX=0x89`, and executes `REP MOVSD`, which writes **0x89 DWORDs = 548 bytes**. Success explicitly sets AL to 1, while failure copies BL into AL; the two observed exit sites use `RET 4`. The original caller stack buffer and the decompiler's separately named local arrays cannot be assumed to have identical contiguous host layout. In particular, the `0x000F4830` draft names `local_224[532]` and `auStack_10[4]`; treating the first array as a standalone 532-byte destination for a 548-byte write would overflow it in host C++. **Do not insert a cast or a guessed 548-byte host buffer** without reconstructing the guest stack layout and every downstream access. No source change is authorized by these observations alone.

## `0x001D10B0` → `0x001D2D60`

At `0x001D10C0`, the caller pushes ESI as a destination address; at `0x001D10C1`, it moves EBX into EAX as the source before the direct call. The callee saves EAX in EBX, reads the incoming stack argument at its `MOV EBP,[ESP+0xC]` site (after its own register saves), and exits through an observed `RET 4`. The caller advances ESI by `0x24` bytes on each loop iteration. This is a verified local **register and stack handoff**, not a fully recovered C++ calling convention, guest-memory mapping, nested-call contract, or semantic equivalent implementation.

## Source-repair quarantine

Forty audited candidates were reviewed. All 40 remain blocked by host C++17 type/argument mismatches or absent proof of guest32 storage. Source repairs validated/pushed in this pass: **zero**. Original-address `.cpp` bodies, original-body digest labels, and progress metrics are unchanged. The next repair needs to preserve the 548-byte guest stack transfer and the EAX/ESI source/destination contract without reinterpreting guest32 addresses as native pointers. SEH, x87/SSE, indirect dispatch, and virtual functions remain evidence-needed.

## Verification boundaries

The private-XBE verifier authenticates the full retail SHA-256 and validates 40 E8 targets, 80 immediate instruction windows, 21 focused windows, and 26 previously selected RET windows. The binary-free CI test checks manifest alignment, exact evidence values, and 101 synthetic mutation controls; it cannot itself authenticate the retail XBE or certify 1:1 game behavior. No demo content or executable bytes are included in this evidence.
