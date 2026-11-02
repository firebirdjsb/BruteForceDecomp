# C++17 89-edge provenance gate reconciliation — 2026-11-02

Starting main: `34a16389a6aa51841e02056eefcd59aa67290c23`. This is a **test-only** repair. No canonical original-address `.cpp` body, source signature, XBE body digest or call expression was edited.

## Observed failure

The strict [run 41425344491](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41425344491) passed the six-declaration gate, then failed `tools/test_cpp_20261101_89_direct_declarations.py` for caller `0x001faf20` -> callee `0x0015b9d0`. The 89-edge manifest records the callee's **original source preimage** SHA-256 `e113046418ddb4814cc32559717835c3925d132d04decb2697597844a6fbeb49`. A later independently reviewed source-only forward declaration `extern void FUN_0010bc40(void);` changed that callee's **full source** SHA-256 to `f1afaa60039d01addf0a7f451835a495e09a6bdf5e45a2a2c5ae09f1d2c06128`.

The callee's original x86 body label remains `179124130DEAF4C1E9D5CF52AA84585082E2EA08D9913A2D195C4CC94977239B`. Removing **only** the exact, pinned two-line source-only declaration block from the current callee recovers the historical manifest's preimage SHA-256 exactly. This is not an excuse to ignore arbitrary callee edits or to rewrite the original evidence manifest.

## Conservative repair and controls

The 89-edge verifier now pins both the complete post-repair callee SHA-256 and the exact declaration block, strips that block solely for `0x0015b9d0`, and then checks the original manifest SHA-256, body label and signature as before. Added negatives reject a changed prototype, changed call, removed block and duplicated block. The existing 89-caller Clang++17 O0/O2 and partial-host-link tests remain unchanged.

The source-only declaration is **ABI_UNVERIFIED**. No original retail XBE was present in this execution, so original machine-code CALL, register, stack cleanup, output, guest32, indirect dispatch, behavioral 1:1 and native-PC linkage are not newly verified. A future independent edit to this callee must receive an explicit new evidence review; it will not pass this pinned reconciliation silently.

The last completed full exact-tree C++17 syntax audit was at `d090dfb2083cb82896213adb4beb56f1b4b63b94`: 3,923 passing and 9,771 failing out of 13,694. No new syntax delta is claimed until the full audit of the final pushed tree completes. The XBE hash remains `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
