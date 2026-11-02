# Six source-matched C++17 declarations — 2026-11-02

The completed exact-tree Clang++17 audit at `d090dfb2083cb82896213adb4beb56f1b4b63b94` (run 41413736049) checked all **13,694** original-address drafts: **3,923 pass; 9,771 fail**. Its six selected caller files each failed solely because two or more calls to one already-defined callee draft lacked a visible declaration. The later starting `main` at `5c843fd2c724e1442d59d3e4117f6889781f8d4f` only published exact-audit progress.

| Original caller | Source-matched existing callee draft | Original missing call sites |
|---|---|---:|
| `0x00105af0` | `void FUN_00105910(void)` | 2 |
| `0x0014d470` | `void FUN_0014ae80(void)` | 2 |
| `0x0014d500` | `void FUN_0014ae80(void)` | 2 |
| `0x0014d570` | `void FUN_0014ae80(void)` | 2 |
| `0x0015b9d0` | `void FUN_0010bc40(void)` | 2 |
| `0x00289fa0` | `void FUN_0028a460(void)` | 2 |

Each caller adds only one explicitly `ABI_UNVERIFIED` forward declaration after `bf_ghidra_types.h`. Original call expressions, function bodies, x86 entry identities and original-body SHA-256 comments remain unchanged. Callee draft source fingerprints and caller source preimages are pinned in `scripts/verify_cpp_20261102_six_source_matched.py`. The gate checks exact-source Clang++17 O0/O2 syntax and host-object compilation, declaration-removal negatives, source-drift negatives and source layout. This is **source syntax only**: it does not establish original Xbox calling conventions, register inputs, return behavior, cross-function linkage or gameplay equivalence.

Candidate screening also rejected caller/callee mismatches involving integer-to-float conversion, pointer-to-guest-word conversion, extra/missing parameters, void returns consumed as values, and functions with additional unresolved errors. No casts, classes, new arguments or behavior were invented. Complex SEH, x87/SSE, virtual dispatch and indirect calls remain evidence-needed.

The original retail XBE was **unavailable** for this run. Required SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No original CALL, register producer, stack cleanup, RET or negative-control machine-code contract was newly authenticated. No guest32 address was cast to a host pointer as a repair. The retail-only Reloaded boundary is unchanged.

Do not publish any new syntax percentage until the full strict 13,694-function audit finishes against the exact pushed SHA; host syntax is not 1:1 behavior or native linkage.
