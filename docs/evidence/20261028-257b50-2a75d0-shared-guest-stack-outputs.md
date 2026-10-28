# 2026-10-28: two guest-stack first-error candidates — original instruction gate

**Status: original instruction evidence only; sources deliberately unchanged.** This is
a scoped investigation of two functions in the remaining first-error guest-stack
queue. It is **not** a newly passing source, 1:1 behavioral match, or native PC
linkage fix. Both drafts still have unbound original register/callee contracts.

## Provenance

- Original private Brute Force XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
  Independently rehashed before inspecting the recorded instruction bytes.
- Original source identity labels preserved (no source edits):
  - `0x00257B50`: `src/main_unclassified/band_0025/0x00257b50.c`,
    original body label `9B4393F9FE7DA16045862EF054C10ACDB88C5F4B818DA251431257428A86C660`.
  - `0x002A75D0`: `src/main_unclassified/band_002a/0x002a75d0.c`,
    original body label `F51E4A7788CBA1D5040A9EBD0E1E9F47A77F7B2DAD17D081E2FE0DBE4BCB7A44`.
- The pinned instruction windows use original text VA = file offset + `0x10000`
  in this part of the XBE. Matching these windows does **not** authenticate
  every noncontiguous body range, identify virtual targets, or prove source behavior.
- Private repro: `python3 scripts/verify_guest_stack_pair_20261028.py --xbe /path/to/default.xbe`.
  Run locally; never commit the executable. The extended script checks the full XBE hash
  before the original 26 and additional original instruction windows and fails closed if any byte differs.

## 0x00257B50: one 260-byte string buffer, not two independent arrays

Let `T` be original ESP after `SUB ESP,0x120; PUSH EBP; PUSH ESI`,
before temporary call arguments.

- `0x257C49` pushes `0x104` and `0x257C4E` takes
  `LEA EDX,[ESP+0x28]`. The destination is `T+0x24`.
  `0x257C5C` scans from `LEA EAX,[ESP+0x24]`, also `T+0x24`.
- `0x257C6C` pushes EBX and keeps it saved until `0x257CC0`.
  The later `0x257C88` pushes `0x104`; `0x257C8D` takes
  `LEA EAX,[ESP+0x2C]`. Because EBX is saved, that also points
  to **`T+0x24`**. The scan at `0x257C9B` uses the same bytes.
- The per-item indirect call at `0x257C05` takes an address at
  `T+0x1C`. The later closing operation at `0x257CC6` addresses
  `T+0x14`. These are **not** the 260-byte string buffer base.

**Repair blocker:** the draft's several `stack0x...` references cannot
safely be replaced with separate guessed locals. A correct C representation
must preserve the single `T+0x24` backing buffer and both other output
slots, and must connect the virtual read/write calls and their result
lifetimes. The decompiler's empty indirect-call argument lists are not
original x86 calling-convention evidence.

## 0x002A75D0: one guest word reused by one-byte and four-byte reads

Let `S` be ESP after the early `PUSH EDI` at `0x2A7610`,
excluding temporary call arguments.

- At `0x2A7660`, the one-byte read pushes zero then one;
  `0x2A7663 LEA EDX,[ESP+0x40]` passes **`S+0x34`** to the
  stream vtable slot `+0x10`.
- The other branch at `0x2A76AD` pushes four and
  `0x2A76AF LEA EAX,[ESP+0x3C]` passes that same **`S+0x34`**
  guest address. The difference in raw ESP displacements is explained
  by the additional pushed argument in the one-byte branch.
- `0x2A76B8 MOV EAX,[ESP+0x34]` reads **`S+0x30`**, a distinct
  raw word. Do not silently treat it as the four-byte output.
- The indirect interface query at `0x2A770D/0x2A7717` uses
  output address `S+0x0C`; `0x2A7726` supplies another output
  address `S+0x10`. Their caller/callee handoffs must be joined
  before claiming pointer ABI reconstruction.

**Repair blocker:** a one-byte-only host variable would lose the shared
four-byte storage identity; a guessed initialized DWORD would fabricate
untouched upper bytes. Preserve the common raw-word slot, partial-write
rules and distinct interface outputs only when the downstream call
contracts have been recovered.

## Verification boundary and next action

The earlier private-XBE check passed **12 + 14 = 26** original instruction
windows. The expanded caller/callee check is recorded in the accompanying producer-contract report. This does not run the game, verify virtual method output sizes,
resolve 32-bit guest to host pointers, or validate end-to-end x87/SSE
behavior. No source or canonical digest inventory was changed, and no
syntax progress number should be increased on this evidence alone.

Next repair gate: recover the virtual-call destination writes and
post-call reads, then make a single atomic source/fixture/inventory
change that passes isolated Windows i686 and x86_64 C11 checks and the
full 13,694-function audit. Continue the other 34 first-error stack cases
by their original stack/call patterns, not by their decompiler offset names.
