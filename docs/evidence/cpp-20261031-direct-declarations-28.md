# 28 direct-call declaration repairs — 2026-10-31

Scope: source-matched forward declarations only. No function signature, body, call expression, argument, cast or return handling was edited. Every source retains its original entry/body digest and ABI_UNVERIFIED boundary.

## Baseline and selection

The isolated worktree started at `da16d7829f876c8db13a5251fc1dcc537f75babd`, after fetching remote main. The latest completed baseline artifact, run 41198694970 at `b71c2c6e087f073ec946b0c5551fbaf72420a4c0`, was authenticated against all 13,694 canonical source fingerprints: 3,390 passing / 10,304 failing. Later main commits were inspected before selection; focused before/after checks use each actual selected source, not a stale first-error queue.

The original retail XBE SHA-256 is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Complete ordered original bodies and decoded E8 call boundaries/destinations were rechecked for 55 unique caller/callee bodies and 62 callsites. These facts identify calls, not native C++ calling conventions.

The [manifest](../../metadata/cpp_20261031_direct_declarations_28.json) pins source/Git blobs, original body ranges/hashes, exact declarations, callee definitions and callsites. It also records 24 quarantined candidates. Complex guest-register, x87/SSE, SEH, indirect dispatch, dynamic stack, tail/alias and uncertain byte-conversion cases were excluded. Nothing in this batch resolves their behavior.

## Repaired callers

| Group | Original caller entries |
| --- | --- |
| address_helpers (21) | `0x002eb634`, `0x002fe601`, `0x002fe888`, `0x002ff361`, `0x0031636b`, `0x0034d671`, `0x0035434a`, `0x00335c99`, `0x00335cbd`, `0x0033699b`, `0x0033e9ea`, `0x0033f31d`, `0x00343759`, `0x00343a65`, `0x00343af7`, `0x00343dcb`, `0x00343e46`, `0x00344812`, `0x00344e30`, `0x00383c3a`, `0x0035f9e0` |
| named_helpers (7) | `0x002e7aa0`, `0x002eb08c`, `0x002ecf93`, `0x002f0fcc`, `0x002f1e21`, `0x002f1eda`, `0x00347cda` |

## Verification

`tools/verify_cpp_direct_declaration_batch.py` requires Clang++ and fails if it is missing. It checks canonical source paths and immutable body labels, exact source-definition signatures, all 28 edited source fingerprints and the original Git blobs recovered by removing only the added declaration blocks. Historical inventory origin/C11/ABI/behavior flags remain unchanged; only changed source hashes and explicit evidence issues are recorded.

All 28 complete translation units pass strict Clang++17 at O0 and O2. Twenty-eight declaration-removal controls restore the original undeclared-name errors; twenty-eight changed-signature controls are rejected by the source-fingerprint gate. Existing guest32-to-host pointer warnings remain visible; no permissive flags or warning suppression were added. These are syntax checks, not optimized runtime execution.

With the private XBE and Capstone available, the verifier additionally rechecks whole-image and body hashes, decodes every selected body completely, rejects complex immediate caller/callee instructions and verifies each recorded CALL destination. CI runs the source/compiler controls without distributing the XBE. Original-XBE verification was performed locally.

Independent review covers these source/prototype/evidence boundaries before publication. The batch is committed in groups and pushed once; one complete exact-tree audit follows the push. Published percentages remain tied to a completed exact-commit report, never subtraction from the focused repair count.

## Three distinct milestones

1. C++17 syntax: all 13,694 original-address drafts parse independently.
2. 1:1 Xbox reconstruction: original observable behavior and calling conventions are established.
3. Native PC linkage: reconstructed functions work together with required platform adaptations.

[Milestone state](../progress/milestones.json) and [status](../STATUS.md#three-independently-tracked-milestones) track these independently. This batch addresses syntax visibility only; it provides no whole-function behavior, original ABI, runtime or native linkage credit. Shared external interfaces and callee draft semantics remain unverified.

No game process, installation, saves, assets, deployment or production data was touched. No copyrighted image, full disassembly, private path or scratch analysis is included. The original checkout and its staged work were left intact. Rollback is by reverting the grouped declaration and validation commits together; source declarations are reversible independently of original binary provenance.
