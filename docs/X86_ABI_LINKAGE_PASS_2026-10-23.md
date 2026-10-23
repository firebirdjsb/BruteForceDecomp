# Original x86 ABI and C11 linking progress — 2026-10-23

## Exact source and identity

- Original user's Brute Force retail `default.xbe` checked locally, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- The original executable, Ghidra project, and full disassembly remain **outside Git**.
- All edits are limited to the canonical `main` branch. No 1:1, semantic, or native-link milestone is promoted by C syntax alone.
- The previously published complete syntax audit remains at commit `4f004ac894d524d5796b20a04032cbf5afc904ec`: **12,401 pass / 1,293 fail**. A new exact-tree complete audit must finish before these counts or README percentages can change.

## C11 source corrections

**`0x00081D10`** — The original function uses a caller-owned **32-bit incoming stack argument** at entry `[ESP+4]`. After its frame setup and register saves, the same DWORD appears at `[ESP+0x7C]`:

- `0x00081D5B`: `mov byte ptr [esp+0x7c],bl`;
- `0x00081E78`: `mov dword ptr [esp+0x7c],eax`;
- `0x00081FBF`: `mov byte ptr [esp+0x7c],1`;
- `0x00082020`: `mov al,byte ptr [esp+0x7c]`;
- `0x0008202B`: `ret 8` — this callee consumes **two** caller stack words, and the original caller at `0x00082966` passes two stack words and **EDX=ESI**.

Replaced three invalid `param_1._0_1_` pseudo-member accesses with low-byte `uint8_t` accesses in its existing C11 draft. This resolves only those syntax representations, not EDX state, second argument identity, or indirect virtual-call semantics. Commits `a5f91c22` and `2d4b95c5` (the follow-up replaces the two remaining pseudo-field accesses). All three occurrences are now corrected; a fresh exact-source invariant check passed 13 of 13 records.

**`0x001E8CD0`** — The original `f32` input is consumed at `0x001E8D00` via `fld m32fp`; the compiler subsequently reuses its **stack location** for a counter:

- `0x001E8D14`: full DWORD zero write into reused stack word;
- `0x001E8D5B` / `0x001E8DC1`: WORD comparisons;
- `0x001E8D62`: full DWORD store of EAX into the stack location;
- `0x001E8DCD`: WORD load; `0x001E8DD8`: WORD output store;
- `0x001E8DE0`: `ret 4`.

The draft now uses a separate `uint16_t secondary_max_low16` instead of accessing a nonexistent field of the float. **Important limitation:** upper EAX bits written into the temporary DWORD at `0x001E8D62` are *not reconstructed*; the inspected subsequent local paths consume only the low half. This is an observed data-flow equivalence candidate, not instruction-level or entire function 1:1 proof. Commit `bbcbff11`.

## First substantive native-link contract: `0x00087630`

The original callee prologue is `55 8B 6C 24 08 57 8B F8`, showing that its original input range is supplied as:

| Input | Original source | Status |
| --- | --- | --- |
| Range start | incoming **EAX**, preserved into EDI | observed |
| Range end | **first** caller-pushed DWORD, loaded into EBP | observed |
| Record stride | **32 bytes** between iterations | observed |
| Return | bare `ret` at `0x00087668`, callee pops no arguments | observed |
| Additional caller stack words | present at several call sites, not consumed by this callee | observed for inspected body |
| Full host ABI adapter and side effects | unimplemented | **not linked** |

The original XBE contains **12 raw direct E8+rel32 instruction candidates** resolving to `0x00087630` in the main code range. These twelve are documented with the incoming EAX provenance, first stack word, cleanup observations and open uncertainties in [`metadata/x86_callee_00087630_call_sites.csv`](../metadata/x86_callee_00087630_call_sites.csv). These are confirmed instruction-level direct calls, not proof that all **indirect** callers are known.

The formerly unresolved incoming EAX value at `0x0010B2DE` is now **path-traced** through the original function `0x0010B1E0`: `0x0010B213: mov eax,[esi+4]`; the taken `JA` at `0x0010B228` reaches `0x0010B27F`, and the taken `JA` at `0x0010B291` reaches `0x0010B2D4`, with no intervening write to EAX before `0x0010B2DE`. Here ESI holds the incoming ECX container, giving an evidenced guest start at `[ECX+4]` and end at `[ECX+8]`. The five relevant instruction windows are fingerprinted in the verifier. This does **not** establish a full native calling convention or test unobserved incoming control-flow paths.

Original C drafts `0x000874A0` and `0x00087630` now document this mixed register/stack signature. **The existing C call expression and C callee signature do not yet encode it as a safe native interface.** Future native adapters must preserve 32-bit guest address-space semantics and be approved only after every relevant edge is verified.

## Tests, reporting and next gates

The existing [`tools/verify_x86_c11_lane_contracts.py`](../tools/verify_x86_c11_lane_contracts.py) now contains **48** exact-instruction fingerprints, **28** direct-call checks, and **13** focused source-invariant records. The optional `--xbe` mode requires the exact matching original binary; source-only checks run in public GitHub Actions without storing the executable.

The additional [`tools/verify_x86_callee_87630.py`](../tools/verify_x86_callee_87630.py) verifies that the twelve-entry ledger is complete, has not been silently promoted to a full ABI, and, when supplied `--xbe`, that the direct targets, original callee prologue/RET and raw main-code E8 candidates match the input XBE.

The focused [C11 workflow](../.github/workflows/focused-x86-c11-repairs.yml) now audits **13 actual source files** individually and checks the callee ledger. Its existence is **not** evidence that a CI run has passed. A full inventory on the new tree and actual link tests must be completed before updating any overall roadmap metric.

Local independent read-only checks against the original XBE confirm the added two function repairs and the twelve-entry direct-call set. These are evidence and syntax repair steps only; no entire function is now marked 1:1 or behavior-tested.

Next priority: review the remaining register preservation and indirect callers, build precise guest32 address/register adapters, and link one real two-or-more-function C11 group with a test that rejects unresolved stubs and fabricated platform imports. Preserve original physics/gameplay in the core and keep modern PC enhancements separate.

Reference: [XboxRecomp investigation rules](XBOXRECOMP_REFERENCE_1TO1.md), [main evidence ledger](../metadata/x86_verified_call_edges.csv), [current project status](STATUS.md).
