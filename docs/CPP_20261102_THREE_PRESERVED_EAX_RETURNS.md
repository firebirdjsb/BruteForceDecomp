# Three bounded original-EAX return repairs (2026-11-02)

Starting `main`: `c0206ffc9f3173ab0891666142f186589394748d`. The latest completed exact-tree C++17 audit was `37c76b704998a5feb1a94b4bbdc99b092c71b0a3`, with 3,934/13,694 isolated syntax passes. These source repairs do **not** establish a new full-audit delta.

Original retail XBE SHA-256 (authenticated locally):
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

| Caller → callee | Original E8 site | Authenticated callee body | Original RET | Return register |
| --- | --- | --- | --- | --- |
| `0x0017E200 → 0x000A0C60` | `0x0017E43B` | 130 bytes, SHA-256 `935B88AD31D3725F6207AA21E0490ED49242151D70F54666D78641AE85450B90` | `0x000A0CE1` | incoming EAX, unmodified |
| `0x00232290 → 0x002334B0` | `0x00232445` | 219 bytes, SHA-256 `9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60` | `0x0023358A` | incoming EAX, unmodified |
| `0x0027E5F0 → 0x0027E580` | `0x0027E5F7` | 109 bytes, SHA-256 `8358708E600B6F9F067D56692D9392F122F720D7E717DC538F6BBC53154E445B` | `0x0027E5C3`, `0x0027E5EC` | incoming EAX, unmodified on both paths |

All three original caller bodies also matched their complete original-body SHA-256 labels over lengths 729, 538, and 130 bytes respectively. Each callee's complete original instructions were disassembled and checked for EAX/AX/AL/AH writes and nested calls. The source changes only expose the existing incoming register as the result and add exact source-matched declarations. They do not change memory writes, floating-point expressions, stack operations, addresses, or original body labels.

The first two callees contain x87 memory operations; this batch does **not** certify x87 rounding, exception state, native host pointers, or complete Xbox calling conventions. The third is a register-preserving buffer helper. All three retain `ABI_UNVERIFIED` because incoming register binding and guest32-to-host memory translation remain unresolved.

The full 40-candidate exact-tree declaration review produced three independently defensible return-contract repairs and 37 evidence-needed candidates. No casts, invented parameters, class layouts, demo-only code, or guessed return values were introduced.

Verification: six authenticated original caller/callee body hashes, three direct E8 targets, four original RET sites, three displacement-mutation controls, three body-mutation controls, and six positive/six negative synthetic Clang++17 O0/O2 type probes passed locally. `tests/test_cpp_20261102_three_eax_returns.py` additionally reconstructs the audited source SHA-256 preimages from the bounded edits, syntax-checks all six original-address sources in CI, and optionally rechecks the private XBE with `BF_ORIGINAL_XBE`.

Host syntax, cross-function linkage, Xbox ABI equivalence, virtual dispatch, x87 fidelity, and playable native-PC behavior are distinct milestones. Do not update README percentages without a completed exact-tree audit of the pushed SHA.
