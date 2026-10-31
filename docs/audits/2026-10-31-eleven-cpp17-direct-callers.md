# Strict C++17 declaration batch — 11 original direct calls (2026-10-31)

**Scope:** Eleven original-address C++17 caller drafts, original Xbox retail Brute Force image only. The only source changes are file-scope, callee-draft-matched `extern` declarations. Source function bodies, original entry names, and embedded original x86 body SHA-256 provenance remain unchanged.

**Starting audited baseline:** last completed exact-tree source audit at `1f8f8ccc`, 3,342/13,694 Clang++17 syntax passes (24.40%). This batch's syntax net must be measured by a new completed exact-tree audit; do not project source-level checks into the README percentage.

| Original caller | Original callee | CALL site | Callee RET site / bytes |
| --- | --- | --- | --- |
| 0x00228C10 | 0x0021C380 | 0x00228C57 | 0x0021C3DB / C2 04 00 |
| 0x0022F640 | 0x00126F20 | 0x0022F687 | 0x0012715C / C2 08 00 |
| 0x002596E0 | 0x00252C60 | 0x0025975C | 0x00252C93 / C3 |
| 0x002F19C9 | 0x002F24B7 | 0x002F19CB | 0x002F24D2 / C3 |
| 0x002EE3E4 | 0x002EE3A6 | 0x002EE402 | 0x002EE3E3 / C3 |
| 0x002F2FAC | 0x002F2CCA | 0x002F2FC3 | 0x002F2FA9 / C2 18 00 |
| 0x003118DF | 0x003148CF | 0x003118EA | 0x00314934 / C2 0C 00 |
| 0x00314069 | 0x00313E74 | 0x00314079 | 0x00313F2C / C2 0C 00 |
| 0x003162EA | 0x00315E78 | 0x003162F8 | 0x00315EC5 / C2 04 00 |
| 0x003183EA | 0x003174E7 | 0x00318400 | 0x00317502 / C3 |
| 0x00318408 | 0x003183EA | 0x00318417 | 0x00318405 / C2 08 00 |

## Evidence and tests

- The private retail XBE authenticated to SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Verified *original contiguous function body bytes* against 21 SHA-256 digests, covering all eleven call edges' callers and callees.
- Confirmed all eleven original E8 direct CALL destinations and specific raw callee RET sites inside hash-matched bodies.
- Negative controls rejected modified CALL opcodes, call displacement and original function-byte tampering.
- All eleven original source Git blobs exactly matched `main` before changing them. Each **failed** isolated strict Clang++17 due to an unresolved callee declaration; each **passed** after adding the source-matched declaration. Passing checks: 11 callers × `-O0`, `-O2` = **22**.
- The repository's CI tests in `tools/test_cpp_20261031_eleven_verified_calls.py` independently recheck the source-matched callee signatures, identity/hash labels, strict syntax and negative argument-arity control.
- To rerun original-binary evidence locally (the private executable is **not** committed):

```sh
python3 scripts/verify_cpp_20261031_eleven_edges_xbe.py --xbe /path/to/your/private/original.xbe --self-test
```

## Verification boundary

**Not verified:** Ghidra prototypes as original Xbox ABI, hidden ECX/EAX/EDX producers, all stack memory contracts, `thiscall`, class layout, vtables or indirect dispatch, linked guest32 memory compatibility, 1:1 original behavior and a playable native Windows PC build.

A direct E8 with a particular RET opcode does not prove complete caller/callee register contracts. Every repaired source remains `ABI_UNVERIFIED`. The 11 new syntax passes are not credited until a completed exact-tree 13,694-function audit. No source changes were made to deferred SEH, x87/SSE, guest-pointer or indirect-call cases.
