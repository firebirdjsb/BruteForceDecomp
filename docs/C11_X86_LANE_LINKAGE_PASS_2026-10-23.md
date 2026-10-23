# C11 instruction-backed repair pass — 2026-10-23

## Exact input and scope

- Original Xbox `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`, verified again from the user-supplied local file.
- `main` only; C11 sources and safe verification files only. The original XBE and extracted instruction bytes are not committed as binary artifacts.
- The five affected original entry identities and embedded original body SHA-256 labels remain unchanged.
- These are focused repairs of type/byte-lane interpretation and function arguments. They are not verified full Xbox calling conventions, complete cross-function linkage, original behavior, or a runnable PC executable.

## Evidence-backed corrections

| Entry | Original instruction observation | Source-level reconstruction |
| --- | --- | --- |
| `0x00024F80` | `0x00025033` direct call to `0x000388B0`; `0x00025038` tests/stores EAX DWORD; `0x000251AF` reads it as an object address and dereferences `+0x80`. `0x000252AA` and `0x000252C7` write one byte to `[esp+0x60]`; `0x00025368` and `0x0002556C` read it | Preserve the returned object address as a 32-bit integer and use unsigned-char access to the low byte of the stack word, without numeric float conversions |
| `0x000435F0` | `0x000436A6` compares a byte at `[esp+0x10]`; `0x00043810` loads the same byte | Replace invalid float member syntax with unsigned-char access; lower-half clear of `uStack_74` expressed with the corresponding C11 mask |
| `0x0005C5E0` | `0x0005C659` takes a byte from an incoming stack word, `0x0005C661` writes the low byte of a local, `0x0005C67F` loads the full local DWORD, and `0x0005C688` writes that full DWORD at offset 8 | Preserve the byte-only store and raw DWORD copy using byte access and `memcpy`; the remaining three bytes are **unknown**, not guessed or silently initialized |
| `0x002876A0` | `0x002876CB` prepares the two input stack words, `0x002876D5` takes the address of two adjacent output DWORDs, and `0x002876DA` calls `0x00287930` | Restore three caller arguments and an actual two-element output array; previous two-word leaf-call fixes are retained |
| `0x0029D2A0` | `0x0029D2F8` reads `[esp+0x40]` as a byte and `0x0029D309` tests it | Replace invalid `float._0_1_` syntax with C11 unsigned-char byte access |

## Reproduction

Local instruction-evidence check, with the matching original XBE, kept **outside Git**:

```sh
python3 tools/verify_x86_c11_lane_contracts.py --xbe "path/to/default.xbe" --root .
```

The evidence verifier covers 15 exact instruction windows and three E8 direct-call destinations in the matching XBE, plus five source invariants when run from a checkout. Its source-only subset can run in CI without distributing the game executable:

```sh
python3 tools/verify_x86_c11_lane_contracts.py --root .
```

The separate `.github/workflows/focused-x86-c11-repairs.yml` performs five individually scoped Clang C11 syntax checks, using the same declared warning allowances as the main syntax inventory. No successful CI run or fresh whole-repository count is asserted by the presence of this workflow alone.

The earlier [exact published syntax audit](progress/current.json) remains **12,401 pass / 1,293 fail** at audited commit `4f004ac894d524d5796b20a04032cbf5afc904ec`. Several post-audit recursive call repairs and the changes here have not yet been incorporated into a *new completed* 13,694-function audit. Do not subtract failures speculatively or update the README progress bar without a new exact-tree report.

## Known limits

- The C11 argument types still model an original 32-bit Xbox process. In particular, the partition helper's C output array fixes adjacency but does not prove its implicit register, allocation, callback, or ownership contracts.
- Indirect vtable calls, Xbox platform APIs, implicit registers, x87 behavior, and 64-bit host pointer incompatibilities remain under review.
- The undefined high bytes at `0x0005C5E0` are preserved as unknown; syntax checks do not make their use defined or prove game behavior.
- No integrated object link or native PC execution is claimed.

## Main-branch repair commits

- `4b29b349` — `0x00024F80` byte/return-address repair
- `a7301257` — `0x002876A0` partition call and output pair
- `b529ec4c` — `0x000435F0` float byte and 16-bit lane
- `037b45f1` / `236746e9` — `0x0005C5E0` raw byte and DWORD copies
- `f892e611` — `0x0029D2A0` low byte
- `62304687` / `1c49e45f` — exact-XBE and source invariant verifier
- `bf4d7f99` — five-file focused syntax CI


## Continued evidence-backed pass — same day, on `main`

These corrections were made after the original five-entry repair ledger above; the historical audit counters remain unchanged until another **complete, exact-tree C11 audit** finishes.

| Original entry | XBE instruction evidence | Limited correction |
| --- | --- | --- |
| `0x000388B0` | `0x000388E3: push 0x0030DE90`; `0x000388E8: call 0x002EA4BF`. The executable at `0x0030DE90` begins with `push esi; mov esi,0x004A88D0`. | Replace undeclared Ghidra `__func` and `LAB` expression with the **observed raw callback address** cast to a C11 function-pointer type. Address translation to a **native** linked function remains **unresolved**. |
| `0x0003D970` | `0x0003D99B: mov dl,[esi+0x14]`; `0x0003D9A4: mov [esp+0xc],dl`; `0x0003D9C7` calls `0x0001D4C0`. | Replace invalid pointer `._1_3_` member access with byte-only write to the original stack word. The original Xbox width is 32 bits; 64-bit Windows representation is **not** verified. |
| `0x00043470` | `0x00043539: xor eax,eax`, then `0x00043559` and `0x0004355D` store zero AL into consecutive bytes. `0x00043488` and `0x000434B9` both call `0x000388B0`. | Replace invalid DWORD `._2_2_` access with a low-16-bit clear. Upper two bytes are left as previously observed; no initialization is invented. |
| `0x0004E150` | `0x0004E17B-0x0004E189`: output pointer plus two range endpoints; `0x0004E18A: call 0x0004E260`. `0x0004E200` and `0x0004E241` call the small-range and fallback helpers with two stack arguments. | Restore the three-argument partition call, two adjacent output DWORDs, and two-argument helper calls for the 8-byte record path. |
| `0x00050980` | `0x000509AB-0x000509B9`: same stack setup; `0x000509BA: call 0x00050E90`. `0x00050A30` and `0x00050A71` call the small-range and fallback helpers with two stack arguments. | Restore the three-argument partition call, two adjacent output DWORDs, and two-argument helper calls for the 4-byte record path. |

**Instruction verification:** the continued pass checked **nine** exact XBE instruction windows (seven partial-word/callback locations plus two fifteen-byte partition-setup windows) and **ten** direct E8 call destinations against the input XBE. All matched. The source verifier was extended to contain these checks, along with expected post-repair C expressions; use `python3 tools/verify_x86_c11_lane_contracts.py --xbe path/to/default.xbe --root .` locally.

**Compiler verification:** local Clang C11 syntax fixtures for the five repairs above passed under the same warning allowances as the inventory workflow. The five checked files were reconstructed as focused syntax fixtures, so this does **not** replace the exact repository-source CI. The focused CI workflow now checks ten original C files individually. **No new complete 13,694-source pass count or successful GitHub Actions status is asserted here.**

**Remaining uncertainty:** the Ghidra-provided function types remain drafts. In `0x0004E150` and `0x00050980`, the fallback helper paths may still have partially unresolved unused caller stack slots: no argument was invented where the callee's semantic contract was not verified. Callback relocation, register-only inputs, indirect calls, global data ownership, i686 ABI compatibility, and full native linking remain independent requirements.

Continued commits on `main`: `5ee86fc8`, `a0cf84de`, `02a959be`, `a659fb64`, `50a470b1`, `eccb1aa7`, `8238a376`, `36a874f2`, `58853be2`.
