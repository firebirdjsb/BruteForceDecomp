# Eight source-matched C++17 caller declarations — 2026-10-31

## Evidence level and scope

This is a **host C++17 syntax-only** repair batch, not original Xbox ABI or 1:1
behavior verification. Source-only candidate selection used the last completed
exact-tree Clang++17 artifact for `15586ce8ccd00c99ae8dc05e78399887639bdad3`
(3,360 / 13,694 passing, 10,334 failing). The working parent was rebased to
the latest available `main` without modifying concurrent contributors' files.

The retail XBE was **not available in this run**. The required reference SHA-256
is `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`,
but no fresh CALL, RET, register-producer, stack-cleanup or negative original
machine-code verification is claimed. Previously recorded evidence is not
silently promoted to a new whole-function proof.

| Caller entry | Source-matched callee draft | Declaration-only repair |
| --- | --- | --- |
| `0x00161620` | `0x00160050` | `void(void)` |
| `0x00161660` | `0x00160180` | `void(void)` |
| `0x00161680` | `0x00160220` | `void(void)` |
| `0x00161720` | `0x001604C0` | `void(void)` |
| `0x001DD290` | `0x001E0DD0` | `int(int)` |
| `0x00289D40` | `0x0028A460` | `void(void)` |
| `0x002A8930` | `0x002A5BD0` | `void(int)` |
| `0x002AA750` | `0x002A5BD0` | `void(int)` |

Each caller keeps its exact original entry, original x86 body SHA-256 label,
pre-existing source bytes, call operands, implicit-register pseudocode, and
`ABI_UNVERIFIED` warning. The only source edit is one explicitly draft-only
forward declaration. Original pre-edit Git blob SHAs are pinned in
`tools/test_cpp_20261031_eight_source_only_callers.py`, which restores the
original bytes by removing the declaration, verifies callee draft spelling,
and rejects mutated call/provenance controls. All eight caller sources passed
isolated strict Clang++17 `-O0` and `-O2` preflight (16 checks).

## Quarantined alternatives (no speculative source changes)

The audit's apparent high-frequency identifiers are **not** a safe global
declaration queue. The `FUN_0008F6A0` draft models original ESI plus a
pushed DWORD; many remaining one-argument caller drafts omit one or both
guest inputs. `FUN_00294B10` callers assign a return value and pass string
pointers while its current draft declares `void(unsigned,int)`.
`FUN_00294640` callers omit all three draft arguments.
`FUN_001E0DD0` callers often omit its declared argument, while other
callers pass pointer values requiring guest32 analysis. The `0x001DD3xx`
and `0x0024BDxx` wrapper families often pass fewer arguments than their
callee drafts. None was repaired with invented casts, return values, stack
arguments or class layouts.

The original XBE, guest32 memory translation, x86 calling conventions,
virtual dispatch, SEH, x87/SSE, cross-function linkage, and native game
behavior remain separate unresolved gates. Do not publish a new syntax or
overall percentage until a **completed exact-tree full audit** identifies
the pushed commit SHA and verifies provenance.
