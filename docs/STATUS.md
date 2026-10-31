# C++ reconstruction status

The active target is C++17 source reconstructed from the original hash-pinned Brute Force XBE. All 13,694 original-address drafts use `.cpp`; original addresses and body digests remain immutable.

The current published C++ audit is in [progress/current.json](progress/current.json). A strict C++ syntax pass does not establish recovered classes, Xbox register/stack ABI, cross-function linkage, 1:1 behavior or a playable native build.

## Three independently tracked milestones

| Milestone | Completion evidence | Current status |
| --- | --- | --- |
| C++17 syntax coverage | All 13,694 original-address drafts pass an exact-tree isolated strict Clang++17 audit | Measured in [current.json](progress/current.json); incomplete |
| 1:1 Xbox reconstruction | Original instructions' observable behavior and calling conventions are preserved | Not comprehensively verified; no whole-function count inferred from syntax |
| Native PC linkage | Reconstructed functions work together with the necessary platform adaptations | Not buildable or playable; linkage and runtime work remain |

The [machine-readable milestone ledger](progress/milestones.json) keeps these gates separate. A declaration repair can improve the first gate without establishing either of the other two. The existing seven-stage roadmap graphic is a planning proxy, not a combined completion score for these milestones.

Run `tools/sweep_cpp_compat.py` for the canonical full audit. GitHub uses `.github/workflows/cpp-compatibility-audit.yml`. Previous C11 workflows are retired under [archive/c11-workflows](archive/c11-workflows); they are historical evidence and do not certify current C++ source.

Preserve guest32 storage, partial writes, x87/SSE state and original instruction evidence. No guessed prototypes or initial values may be introduced to produce a green result. See [CPP_MIGRATION.md](CPP_MIGRATION.md) and [REFERENCE_WORKFLOW_1TO1.md](REFERENCE_WORKFLOW_1TO1.md).

[Historical C11 status](archive/STATUS_C11_HISTORY.md) is retained separately.
