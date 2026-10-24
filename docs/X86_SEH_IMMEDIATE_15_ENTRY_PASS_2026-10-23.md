# Original XBE-verified SEH address correction batch (2026-10-23)

This pass repairs **15** original Brute Force C11 draft functions which failed host-Clang syntax with undefined Ghidra `LAB_...` labels. Each was checked against original user-supplied `default.xbe` SHA-256 `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`, using the original XBE's section-file-offset to guest-virtual-address mapping.

Each independently verified function starts with the exact 17-byte x86 sequence: `55 8B EC 6A FF 68 <imm32 little endian> 64 A1 00 00 00 00 50`. The four-byte immediate after `68` is **exactly** the same value as the invalid Ghidra `&LAB_...` pseudo-address. Replacing `undefined1 *puStack_c` and `&LAB_...` with a `uint32_t puStack_c = UINT32_C(guest-handler-address)` records the exact **original 32-bit guest immediate**. This does not implement FS:0, Windows exception chaining, SEH linkage, or native pointer/callback relocation.

| Original entry | Verified guest handler immediate |
| --- | --- |
| `0x0001c630` | `0x00307a10` |
| `0x0001c980` | `0x00307f00` |
| `0x0004aff0` | `0x003085e0` |
| `0x000615d0` | `0x00307a20` |
| `0x00062a10` | `0x00307e60` |
| `0x00085cf0` | `0x00308560` |
| `0x0008ee10` | `0x00308530` |
| `0x000b1370` | `0x00307e10` |
| `0x000d2a60` | `0x00307db0` |
| `0x0016d7f0` | `0x003080f0` |
| `0x001c54b0` | `0x00308120` |
| `0x001c6cc0` | `0x00308100` |
| `0x001c9110` | `0x00308860` |
| `0x00218790` | `0x00308c00` |
| `0x00287270` | `0x00308a30` |

The existing `tools/verify_x86_seh_immediates.py --xbe <original XBE>` validates these exact 17 original bytes when run with the retail user-supplied input, and source-only checks may run without distributing the executable. These replacements preserve all source file addresses, original function body SHA-256 annotations, and unverified ABI warnings.

**Scope:** syntax and byte-backed immediate only. A complete 1:1 native C11 equivalent and functioning PC game remain unfinished. Do not count this as behavioral equivalence.
