# Three DirectSound original-call reconstruction gates — 2026-10-31

**Scope:** conservative, source-proven C++17 declaration repairs; NOT recovered complete Xbox register ABI or 1:1 game behavior.

## Pinned sources and original retail XBE

- Starting main: `852100586c558254f1370180d25a99e52d82cfe5`.
- Original retail XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`; authenticated against the user-provided private executable. Retail XBE, executable chunks, and assets are NOT committed.
- Three original-address caller body hashes independently match contiguous original binary bytes at the listed entry addresses.
- Original Ghidra source bodies, comments, original address labels, Ghidra return expressions and `ABI_UNVERIFIED` labels remain **byte-for-byte unchanged**. Each repair adds ONLY forward declarations matching the callee's present C++ draft, not an Xbox-verified prototype.
- All three edited sources passed isolated strict Clang++17 `-fsyntax-only` at `-O0` and `-O2` (6 checks) using a local relevant-typedef preflight; repo regression test also checks the canonical header in CI. That is syntax, not an executable runtime check.
- `tools/test_cpp_20261031_three_dsound_edges.py` pins original Git blob IDs, verifies preservation, checks syntax, and has synthetic negative controls. With `--xbe /path/to/user-owned/default.xbe`, it also authenticates the original XBE and proves the listed original `E8` destinations. CI does not have or need the retail binary.

| Caller entry | Original body SHA-256 | Original direct CALL sites and destinations |
| --- | --- | --- |
| `0x00315B98` | `9C4C4169C5A0CE88AE9319F2A91DB4AC82E0DF2924783CBF0A3FBDACF51B5C8A` | `0x00315BAA→0x003118F0`, `0x00315BCC→0x00318851`, `0x00315BE9→0x0031BF8D`, `0x00315BF1→0x00311923` |
| `0x00317710` | `2E2C68C204A168CFDE255E89337E86306213B112DB897A5AD637E4B54BB56B6F` | `0x00317721→0x003118F0`, `0x0031777C→0x00315C8F`, `0x00317787→0x003174E3`, `0x0031778F→0x00311923` |
| `0x00317DA9` | `A0B72EA4B98CD3514D4CFF758084048EA92B60DE07FF92F73121C2C6E18C3A25` | `0x00317DB8→0x003118F0`, `0x00317DCC→0x00318D9F`, `0x00317E25→0x00311923` |

## Fidelity boundary and quarantine

The original E8 targets and source provenance are verified. However, the callee drafts may consume register input (notably ECX), and a normal host `void(void)` declaration does not pass the Xbox register context. Neither guest stack cleanup for every downstream call, guest-memory mappings, guest partial writes, imported services, x87/SSE, nor dynamic dispatch is fully reconstructed or executed. **No 1:1 behavior, native linkage, original class layout, or byte-identical compilation is claimed.**

Other DirectSound candidates were reviewed and **not** changed where original/source contracts disagree: `0x00316300` passes an integer to `0x003118C0` whose draft takes `int*`; `0x003164DD` passes an integer to `0x003163B2` whose draft takes `int*`; `0x00317F6D` contains host-incompatible guest32 pointer storage; `0x00318F9C` has unresolved indirect guest-pointer and helper-interface questions. Do not add casts or guessed arguments merely to pass Clang.

The full exact-tree audit of the new pushed SHA, not this declaration batch's isolated tests, determines syntax progress. Do NOT update README percentages from a presumed +3; preserve the complete 13,694 C++17 draft baseline and separate semantic-fidelity gates.
