# C++17 source-matched 21-caller repair — retail XBE instruction gate (2026-10-31)

## Scope and original authority

- Starting `main` HEAD: `5395668b4ae3dcc6897b38faae30860a9342a6ab`.
- Active target: 13,694 original-address `.cpp` drafts, strict host Clang++17.
- Private original Brute Force retail XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` — independently authenticated from user-provided bytes.
- Candidate selection: completed exact-tree audit of `15586ce8ccd00c99ae8dc05e78399887639bdad3` (3,360 passing; 10,334 failing). These baseline metrics are **not** the new batch result.
- 21 source files received declaration-only additions; original function bodies, embedded original-body SHA-256 comments, instruction pseudocode and `ABI_UNVERIFIED` labels are unchanged.
- The stage-and-verify source test is `tools/test_cpp_20261031_21_source_matched_callers.py`, pinning the pre-edit Git blob and running strict isolated Clang++17 O0/O2 with negative controls. Its Clang stage must be run against the final source tree; a test's existence is not a claim it has executed.

## Authenticated original direct CALL evidence

Fourteen platform/audio callers each have a real `E8 rel32` call to `0x003118F0` and `0x00311923`. The original callee entries read **ECX** and return with bare `RET`. The new declarations are only signatures matching existing Ghidra drafts `void(void)`; no host C++ call adapter for ECX is recovered.

| Original caller entry | CALL to 0x003118F0 | CALL to 0x00311923 |
| --- | --- | --- |
| `0x00315bfb` | `0x00315c0d` | `0x00315c81` |
| `0x00315c8f` | `0x00315c9f` | `0x00315cf7` |
| `0x00316110` | `0x0031611c` | `0x0031613c` |
| `0x00316147` | `0x00316156` | `0x00316180` |
| `0x003175fd` | `0x0031760e` | `0x00317705` |
| `0x00318072` | `0x00318083` | `0x003181f6` |
| `0x00318204` | `0x00318216` | `0x00318351` |
| `0x00318da3` | `0x00318db2` | `0x00318e0b` |
| `0x0031b8ca` | `0x0031b8d6` | `0x0031b8f8` |
| `0x0031b901` | `0x0031b90d` | `0x0031b92f` |
| `0x0031b938` | `0x0031b944` | `0x0031b98a` |
| `0x0031b993` | `0x0031b99f` | `0x0031b9ec` |
| `0x0031c132` | `0x0031c141` | `0x0031c159` |
| `0x0031c1f1` | `0x0031c200` | `0x0031c218` |

Seven main-executable callers contain direct `E8 rel32` calls to `0x0001F4F0` with three original pushed argument words. The callee's original `RET 0x0C` confirms a three-DWORD callee cleanup; incoming **ECX** remains separate and unresolved. New declarations retain the existing draft spelling `void(int,uint,uint)`, not an established complete Xbox function ABI.

| Original caller entry | Original CALL to 0x0001F4F0 |
| --- | --- |
| `0x001cfaa0` | `0x001cfade` |
| `0x00247ff0` | `0x00248025` |
| `0x002496b0` | `0x002496ce` |
| `0x00249740` | `0x00249776` |
| `0x0024af50` | `0x0024af70` |
| `0x0024aff0` | `0x0024b028` |
| `0x0024bcf0` | `0x0024bd11` |

## Gates, limits and quarantines

The uploaded XBE passed: exact retail SHA; **21 contiguous original caller-body SHA-256 checks**, **35 direct original `E8` destination checks**, **three original return instruction windows**, and **four mutated-input controls**. The three callee original-body SHA labels (0x003118F0, 0x00311923, 0x0001F4F0) also matched their contiguous backed bytes.

The pre-push binary check is *not* a native runtime test, a cross-function linkage test, an original MSVC object model, or evidence of all implicit register inputs. The host C++17 declarations do not carry ECX into the callee; this remains `ABI_UNVERIFIED`. Do not promote these 21 to 1:1 behaviorally verified. No guest32-to-native pointer casts, guessed operands, extra arguments, vtables, SEH layouts, or object structures were added.

Quarantined without source modification: four `0x000A2840` callers whose integer locals conflict with the callee draft pointer return; five callers of `0x00051570` whose five actual draft arguments conflict with the callee's three draft parameters; similarly uncertain `0x001E0DD0` no-argument cases and `0x00131E20` 14-argument cases.

Do **not** update README syntax or overall roadmap until a completed exact-tree audit identifies the **new pushed HEAD** and proves provenance and no regressions. Remaining gates: ECX register-entry ABI, guest-stack and guest-memory translation, SEH, x87/SSE, virtual dispatch, object layouts, indirect imports, native linkage and gameplay behavior.
