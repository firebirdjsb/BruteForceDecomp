# Ten retail-XBE-backed EDX list-cursor advance models

## Scope

This pass reconstructs ten **independent original-address** C++17 source drafts with a shared 93-byte, no-call original x86 instruction layout. Their variable data is the **original byte-flag offset** loaded in seven separate `MOV r8,[guest+disp8]` instructions, not an inferred semantic class field.

| Entry | Original flag displacement | Original body | State |
| --- | --- | ---: | --- |
| `0x00076100` | `+0x29` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x000A7D20` | `+0x19` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x0012A720` | `+0x15` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x00139120` | `+0x21` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x00142A80` | `+0x1D` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x001812B0` | `+0x41` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x0024FE80` | `+0x45` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x002501B0` | `+0x11` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x0025DF10` | `+0x25` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |
| `0x00270D00` | `+0x2D` | 93 bytes | `CPP_DRAFT`, `ABI_UNVERIFIED` |

All ten original bodies were taken directly from the **user-owned original retail XBE**, authenticated by SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`, never copied into this repository. Each full-body digest equals `metadata/bulk_13694_inventory.csv`. The bodies become byte-identical after replacing the seven original flag-displacement immediates with a common marker; no complete body contains an E8 direct call.

**Original instruction windows and control flow:** Each body has seven flag-byte loads, eight conditional branches with validated relative targets, and three `RET` exits. Critical guest memory sequencing: initial cursor read; flag test; +8 successor path or +0 child path; optional left +8 traversal; optional right +4 traversal with a read of the potentially updated cursor **at the top of each iteration**; a second final flag-byte read before the last conditional write. The original `PUSH EBX` / `POP EBX` restore sequence is not itself simulated by a host ABI model.

## Verification performed

- `scripts/verify_20261107_ten_guest32_list_advance_xbe.py --xbe <private retail executable>`: 10 complete 93-byte bodies (930 bytes), 70 displacement checks, 80 branch targets, 30 return sites and 930 rejected one-byte original-code mutations.
- `tools/test_cpp_20261107_ten_guest32_list_advance.py`: O0/O2 Clang++17 linked synthetic guest memory tests, 8,192 cases per function per optimization level (163,840 total). Independent expected traces cover fast successor, left-search immediate and multi-hop stops, right-search immediate stop, mismatched cursor, matched single hop, matched multi-hop and mismatch after a match. Guest address wrap and cursor addresses within another guest object are included; each observed read/write event and resulting guest memory map must agree with the oracle.
- Ten separate deliberately changed +8 source reads are rejected by synthetic trace tests.
- Original old source versions were checked with isolated C++17 syntax and fail at native pointer-to-32-bit integer casts. Reconstructed drafts parse at both optimization levels without those casts.
- The original ABI, guest mapping and registration of the ten original incoming `EDX` values as source-level arguments are **not** recovered or verified.

## Not verified / remaining work

The function parameters are **host-side models of original x86 register inputs**, not recovered source signatures, class contracts, or linked native methods. This pass does **not** verify all live-out x86 registers/flags, guest address fault timing and aliases outside the tested trace cases, actual Xbox runtime behavior, inter-function linkage, or game execution. In particular, a strict C++17 syntax pass is never credited as full 1:1 behavioral equivalence. No demo assets are involved.
