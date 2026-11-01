# C++17 two-DWORD output caller/callee repairs — 2026-10-31

## Scope and baseline

- Started at `eab8f0b9a524e1df5af1a14a6bdcc9b05cc9e00a`, latest main before staging.
- Latest completed strict exact-tree C++17 audit: `cfc31ea75f41208fb355278aca00e20ac0b6e0d0`, **3,577 passing / 10,117 failing** out of 13,694 (26.12% host syntax).
- Inspected the 37 arity-matched, single-diagnostic caller/callee candidates with original direct E8 sites and syntax-passing callee drafts. Most candidates had incompatible pointer/scalar, void/return, callback, or guest32 contracts. They were **not** cast or prototyped speculatively.
- Two callers were accepted; one of their callees required a source-type correction. The other callee is unchanged. Original entry identities and embedded x86 body SHA-256 labels are retained. No other game-core body was changed.

## Original retail evidence

Authenticated original retail XBE SHA-256:

`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`

### 0x0033BCAE → 0x0033EE8D

- Original `0x0033BCC2 E8 C6 31 00 00` calls `0x0033EE8D`.
- Caller `0x0033BCB8 LEA EAX,[EBP-4]`, `0x0033BCBB PUSH EAX`, and `0x0033BCCB MOV ECX,[EBP-4]` establish one local, four-byte output word.
- Callee `0x0033EE99 MOV EDX,[EAX+0x18]` followed by `0x0033EE9C MOV [ECX],EDX` writes all four bytes. `0x0033EEAB MOV EAX,[EAX+0x0C]` establishes the observed return register; callee `RET 12`, caller `RET 4`.
- The caller's `local_8` is now neutral `undefined4` rather than signed `int`. Its only later use is equality against the incoming word; comparing the same 32-bit patterns is unchanged. The added declaration is the **exact current callee draft**, not a newly asserted Xbox prototype.
- Callee source `0x0033EE8D` remains byte-for-byte unchanged.

### 0x002E4A30 → 0x002E49C0

- Original `0x002E4A40 E8 7B FF FF FF` calls `0x002E49C0`.
- Caller `0x002E4A30 PUSH ECX` reserves a four-byte local; `0x002E4A31 LEA EAX,[ESP]` passes its address. `0x002E4A3A LEA EDX,[ESP+0xC]` passes the address of the incoming stack DWORD. Caller `0x002E4A45 MOV EAX,[ESP+8]` returns that written word; caller `RET 4`.
- Callee `0x002E49F2 MOV [EDX],ECX` writes the local output DWORD; `0x002E49FF MOV [EAX],ESI` writes the incoming-word output DWORD. Callee `RET 12`.
- Caller local storage is now a neutral four-byte `undefined4`, not a four-byte `undefined1[]` passed to an incompatible typed pointer. Callee's second parameter is now `undefined4*` instead of `int*`, reflecting only the machine-observed full-DWORD store. It is never used for signed arithmetic in the callee. The caller's exported signature and original return expression are unchanged.
- The callee still depends on `FUN_002E4550` and indirect dispatch; their complete contracts remain unresolved.

## Tests and limits

`tools/test_cpp_20261031_two_dword_links.py` checks four pinned source postimages, original body digest comments, Clang++17 O0/O2 isolated syntax and objects, two partial host-symbol links, four source mutation negative controls, two original E8 fixtures, 21 narrow machine-code windows, 27 synthetic negative controls, and modified-retail-XBE rejection when the private XBE is supplied.

Local run:

```sh
python3 tools/test_cpp_20261031_two_dword_links.py --root . --self-test --xbe /private/path/to/default.xbe
```

CI runs `--self-test` only. It never stores or downloads the retail executable.

**Not claimed:** a full original Xbox calling convention, guest-pointer-to-host translation, complete linker closure, virtual dispatch, gameplay behavior, byte-identical executable, or native BruteForce: Reloaded build. In particular, the source drafts still use pseudo-register variables and unsafe guest address assumptions outside this narrow repair. `ABI_UNVERIFIED` remains in force. Do not update README syntax or roadmap percentages until the completed strict exact-tree audit at the pushed SHA proves a net delta.

## Quarantined high-impact queue

- `0x0027E5F0 → 0x0027E580`: original EAX survives the callee, but its draft returns void; a host signature cannot be fabricated without propagating the original register input.
- `0x0034E276 → 0x00352E4C` and `0x0034E296 → 0x00352E5E`: original two-DWORD timer storage and 64-bit output contracts need guest32/kernel translation.
- `0x00061EB0 / 0x0009DB20 → 0x0003D6C0`: caller pseudo-register scalar versus callee pointer argument; do not truncate a host pointer.
- `0x000BB600 / 0x0010AD40 → 0x000CD9C0`: pointer-return draft versus guest32 storage; preserve the original address width.
- Other SEH, x87/SSE, callback, vtable and indirect-call cases remain evidence-needed rather than compiler-only fixes.
