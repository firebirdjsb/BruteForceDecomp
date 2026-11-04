# Sixteen easiest-first source-matched C++17 caller repairs — 2026-10-31

## Original authority and evidence level

- Starting main after reconciliation: `adf10769b9a39b7bee37fe69d36b0fee4ab19f24`; 6 intervening concurrent commits were retained. This batch targets the canonical **13,694 C++17 .cpp original-address drafts**, not historical C11.
- Exact retail Brute Force XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Original XBE bytes were authenticated privately and are **not committed**.
- Each of the 16 original caller-body SHA-256 values matched a **contiguous original machine-code body** at its original entry; 40 original `E8 rel32` CALL sites resolve to the existing draft callee identities. Narrow facts only, not the entire original ABI.
- Affected function source statements, Ghidra draft pseudocode, original entry addresses, body SHA-256 comments and `ABI_UNVERIFIED` tags are unchanged. Edits are **forward declarations** matching the existing callee draft definitions. No guessed host-pointer casts, operands, classes, object layouts, return contracts or native runtime behavior.
- The original `0x0001F4F0` three-word stack cleanup and `0x002B3C60` zero-argument Ghidra draft were independently considered; **implicit ECX/EAX guest register inputs and all cross-function behavior remain unverified**.

## Easiest-first groups

| Source entries | Scope | Declared interfaces |
| --- | --- | --- |
| `0x001D11C0`, `0x001D9150`, `0x001D9190`, `0x001D91E0` | four scalar copying/loop drafts | draft-matched `0x0001F4F0`, `0x0010B1E0`, `0x001D5B10`, `0x0010BC40` as individually used |
| `0x001D1230`, `0x001E0BF0`, `0x001DD250`, `0x001D1CD0` | four independent scalar-only callers | draft-matched `0x0001F4F0`, `0x001D5B10`, `0x0010BC40`, `0x0010B470`, `0x000B0DB0` as individually used |
| `0x001C9660`, `0x0024F1D0` | two guest-word call contexts | draft-matched `0x0001F4F0`, `0x001CBA30` where called |
| `0x002D14C0`, `0x002D14F0`, `0x002D1520`, `0x002D18C0`, `0x002D18F0`, `0x002D1920` | six short state-writer caller drafts | zero-argument Ghidra drafts `0x002B3C60` and `0x002CE2C0`/`0x002CE3A0` |

## Validation and quarantine

- Local original binary gate: **16 matched original-body digests, 40 matching direct E8 destinations**, with correct function addresses and caller windows.
- Local Clang++17 `-fsyntax-only` O0/O2 checks passed for 10 **focused source-body replicas**; this is a narrower gate than 16 exact Git-source checks and **must not** be counted as full canonical C++17 syntax coverage.
- The committed `tools/test_cpp_20261031_16_easy_evidenced_callers.py` checks **all 16 actual canonical source files** at strict `-O0`/`-O2`, restores their pre-edit Git blob SHA-1 by removing only the added declarations, checks original SHA-256 provenance and mutation controls, and optionally authenticates the private XBE and all 40 E8 edges when invoked with `--xbe`. Repository CI must run to establish exact-tree syntax results.
- The current completed exact-tree baseline is distinct from the result of this batch. **Do not update README syntax or overall roadmap from presumed +16 progress.** Host syntax is not evidence of runtime behavior.

**Quarantined:** callers whose Ghidra arguments disagree with the callee's draft, `0x0001F4F0` invocations passing 32-bit guest pointer values through host pointers, non-contiguous original bodies, float/CONCAT width issues, `0x002EA01D` allocator return/stack contracts, SEH, x87/SSE, vtable and indirect-call cases. No cast/return/argument was invented to satisfy the compiler. Any original XBE or third-party sources remain out of Git.

**Next high-impact queue:** completed audit first-error declaration families that agree with real original call and register/stack evidence, then guest32 memory storage, mismatched call contracts, virtual dispatch and full native linkage. These syntax-only repairs remain `ABI_UNVERIFIED`, `CPP_DRAFT`; no 1:1 behavior or game build claimed.
