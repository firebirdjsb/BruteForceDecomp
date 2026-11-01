# Eight bounded C++17 guest byte-offset repairs (2026-11-01)

Evidence target: original retail Brute Force XBE, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Each edited original-address C++ draft replaces a host pointer-to-`int` detour with byte-pointer offset arithmetic. This preserves the observed byte displacement without assuming host pointers fit in 32 bits. The function's original entry, Ghidra body SHA-256 comment, and other source operations remain unchanged. Original guest-address translation, implicit registers, calling conventions, indirect dispatch, cross-function linkage, and complete 1:1 behavior remain **ABI_UNVERIFIED**.

| Entry | Original x86 instruction observation | Body bytes SHA-256 verified |
| --- | --- | --- |
| `0x000A9B90` | `0x000A9BAA: 66 89 46 0E` — WORD store at ESI+0x0E | yes |
| `0x000FBD90` | `0x000FBDB6: 89 51 2D` — DWORD store at ECX+0x2D | yes |
| `0x000FBE20` | `0x000FBE46: 89 51 31` — DWORD store at ECX+0x31 | yes |
| `0x0012AA50` | `0x0012AA74: C6 40 21 00` — BYTE store at EAX+0x21 | yes |
| `0x00181350` | `0x00181372: C6 40 15 00` — BYTE store at EAX+0x15 | yes |
| `0x001813E0` | `0x0018140C: C6 40 41 00` — BYTE store at EAX+0x41 | yes |
| `0x00173720` | `0x00173734: 8D 48 0C` then `0x00173740: 88 51 02` — effective BYTE offset EAX+0x0E | yes |
| `0x0014B5D0` | `0x0014B5E5: 0F BF 46 1A` — signed WORD load at ESI+0x1A | yes |

Original contiguous body hashes match all eight canonical draft provenance comments, including the original RET boundary. Nine exact instruction windows and nine altered-instruction negative controls were checked against the authenticated retail XBE. The original source expressions fail strict Clang++17 pointer-to-int checks; equivalent corrected expression probes pass at `-O0` and `-O2` (16 positives, 16 original negatives).

**Verification boundary:** these are focused expression/compiler probes and original instruction checks, not proof of complete isolated source-file compilation or Xbox ABI. The strict 13,694-function exact-tree CI audit is the repository-wide syntax gate. Do not update syntax/overall progress until that audit completes at the pushed SHA. No guest-to-native pointer truncation, invented parameters, or new C++ object layouts were introduced.
