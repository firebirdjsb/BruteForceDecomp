# Ten authenticated guest32 source drafts — independent copy, list, and REP MOVSD paths

## Evidence boundary

- Original retail `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The original user-owned binary is required for the private verifier and is **not included** in the repository.
- The ten original-address bodies are contiguous, fully SHA-256 authenticated, and their exact original conditional displacements and `RET` opcodes are separately checked.
- The bounded host models expose incoming x86 registers and stack operands explicitly as *guest* DWORDs. They are **not recovered original C++ signatures**. No guest VA is cast to an actual host pointer.
- Two `REP MOVSD` bodies use an explicit incoming Direction Flag parameter, so both `DF=0` and `DF=1` ordered DWORD transfers are modeled. Actual guest EFLAGS inputs, faults, segment overrides, register live-outs, and host ABI/linkage remain unresolved.
- The 16-bit copy preserves distinct WORD guest reads/writes. Its `bf_guest_read_u16` and `bf_guest_write_u16` declarations are source-local; no runtime translation implementation is claimed.
- The tests compare host O0/O2 models against an independently authored ordered guest-memory oracle, not executed retail game code. Synthetic traces cannot establish full gameplay equivalence or byte-identical C++ compilation.

## Original body index

| Entry | Behavior | Original body bytes | Branch sites | Return sites |
|---|---|---:|---:|---:|
| `0x002614a0` | `backward_dword` | 38 | 2 | 1 |
| `0x001dcc40` | `backward_word` | 40 | 2 | 1 |
| `0x002588f0` | `backward_byte` | 34 | 2 | 1 |
| `0x00294900` | `unlink_empty_nodes` | 38 | 5 | 1 |
| `0x00218c70` | `search_two_dwords` | 43 | 4 | 1 |
| `0x0024f210` | `forward_dword_to_end` | 49 | 3 | 1 |
| `0x001d66d0` | `backward_rep_movsd` | 56 | 2 | 2 |
| `0x001d6710` | `backward_rep_movsd` | 56 | 2 | 2 |
| `0x001d6460` | `backward_pair_dword` | 52 | 2 | 2 |
| `0x00071ce0` | `forward_byte_to_end` | 54 | 3 | 1 |

## Verification

- Private original-XBE gate: `python3 scripts/verify_20261107_next_ten_independent_xbe.py --xbe /path/to/owned/default.xbe`.
- Public strict C++17 fixture: `python3 tools/test_cpp_20261107_next_ten_independent_guest32.py` (compiles at `-O0` and `-O2`, tests ordered memory events, guest-address wraparound, overlapping records, and ten rejected source mutations).
- Original historical draft bytes are pinned by SHA-256 in metadata. The user-owned XBE is never checked into the tree.
- Original source drafts individually failed C++17 syntax; all ten replacement source drafts pass in the isolated compiler inventory.
- The repository safeguards still require `tools/test_source_layout.py`, `tools/test_body_hash_labels.py`, `scripts/check_sources.py`, `tools/check_cpp_only_policy.py`, `tools/test_progress.py`, and `tools/check_repository_safety.py`.

## Important remaining work

Before considering any one of these functions fully 1:1 or natively linkable: recover stack cleanup, callee-saved register/flag state, guest-memory mapping and fault semantics; prove caller-provided x86 register/stack words and execution continuity against the original retail XBE. `CPP_DRAFT` and `ABI_UNVERIFIED` remain deliberate.
