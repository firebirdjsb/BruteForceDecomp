# Nine f32 repairs and restored validation — 2026-10-23

Scope: correct observed floating-point storage types in nine C drafts and repair
the validation paths broken by the source-folder move. No gameplay redesign,
platform backend, live-process patch, asset change, save change, or deployment.
The native PC port remains the goal in [NATIVE_PC_PORT_GOALS.md](NATIVE_PC_PORT_GOALS.md).

Original user-owned XBE SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Evidence and bounded source changes

The original XBE was read locally. Its section mapping and each affected body
digest were checked against the Ghidra export before inspecting x86 instructions
with Capstone 5.0.9. No executable, complete disassembly, export, or analysis
database was added to Git.

| Original entry | Instruction evidence | C draft change |
| --- | --- | --- |
| `0x00054920` | `0x00054938`: `fcomp m32fp [0x003c05fc]` | `DAT_003c05fc` is `extern float` |
| `0x00057360` | `0x0005739d`: same m32fp comparison | Same declaration |
| `0x000d4460` | `0x000d4479`: same m32fp comparison | Same declaration |
| `0x00116f40` | `0x00117158`: `fcomp`; `0x00117165`: `fld`, both m32fp at `0x003c05fc` | Same declaration |
| `0x0011e3f0` | `0x0011e418`: same m32fp comparison | Same declaration |
| `0x00123ea0` | `0x00123f17`: same m32fp comparison | Same declaration |
| `0x00123f60` | `0x00123f87`: same comparison; `0x00123f94`: DWORD copy from that address | Same declaration |
| `0x00104940` | `0x001049ed` / `0x00104a09`: m32fp at `0x003c0608`; `0x001049fa`: m32fp at `0x003c0604` | Both data declarations are `extern float` |
| `0x00216350` | `0x002163b3` / `0x00216406`: `movss [esp+4],xmm0`; `0x0021640c`: `fld m32fp [esp+4]` | `local_4` is `float`, preserving fractional values |

Original file-backed DWORDs are `0x40800000` (4.0f) at `0x003c05fc`,
`0x40200000` (2.5f) at `0x003c0604`, and `0x3e4ccccd` (the nearest binary32
representation of 0.2) at `0x003c0608`. Declaring these words as integers caused
numeric integer-to-float conversion, rather than the observed x87 m32fp reads.

Reproduce the evidence checks with
`python tools/verify_x87_global_types.py --xbe path/to/original/default.xbe`.
The extended verifier checks 14 original bodies, 60 small instruction windows,
and eight f32 initializers. A modified-XBE negative check was also rejected.
These checks establish the cited storage evidence, not full-function equivalence.

## Validation repairs

- Reproduced the latest full-inventory CI failure at baseline
  `4a7a52ee5265a3e5e63994a904e15a80ff3f7ab3`: the symbol audit mixed absolute
  discovered source paths with relative `--root .`. Resolve the root once.
  A subprocess regression covers `.`, a relative subdirectory, and an absolute root.
- Updated 67 stale source references in the two reviewed-test workflows using
  `tools/source_layout.py`, including both path filters and compiler commands.
- Regenerated all 13,694 navigation paths. Only the source path column and two
  previously stale lexical direct-call counts changed; original hashes and role
  classifications are preserved. The count changes are at `0x0028aeb0` (3 to 4)
  and `0x0037f712` (8 to 9), reflecting pre-existing C declarations, not new calls.
- Extended the layout check to validate navigation rows and literal workflow
  source paths. Reuse its discovered-source set rather than rebuilding that set
  for each of the 13,694 paths.
- Reproduced the hygiene check's false C++ report on the word `class` in a C
  comment. Ignore comments and string/character literals, after C line splicing,
  while retaining rejection of actual C++ tokens. Regression checks cover both
  false positives and actual forbidden syntax.
- Updated only the nine changed canonical Git C-source digests; preserved every
  original XBE body digest. The three newly passing inventory rows record only
  `HOST_CLANG_OK`; all ABI and behavior states remain `UNVERIFIED`.

## Checks and limits

Code commits: `a921342` (nine storage repairs) and
`a75a90a1c42cf9a7da3e2946b4112cda63cd9429` (validation repairs).

All nine affected sources pass focused Clang 22.1.8 syntax checks on both
`x86_64-pc-windows-msvc` and `i686-pc-windows-msvc`, using the existing audit's
explicit allowances for unresolved declarations and pointer conversions.
Three failures become passes: `0x00054920`, `0x00104940`, and `0x00216350`.
The other six were already syntax-passing; their storage corrections matter to
behavior regardless of parser success.

The body-label, audit-root, lexical-hygiene, layout, complete source-hygiene,
and full entry-symbol checks pass. Existing float-word transfer checks pass
11 edge values and 65,536 bit patterns; DWORD-lane checks pass as well.
These are isolated checks, not original game execution.
Independently reading every exported body range also reproduced all 13,694
canonical original-body digests from the original XBE, with no mismatches.

The complete local audit of committed code tree
`a75a90a1c42cf9a7da3e2946b4112cda63cd9429` checked all 13,694 functions with
Clang 22.1.8 in 201.4 seconds: **12,341 pass / 1,353 fail / zero other outcomes**.
There are zero original-body label mismatches and zero missing body labels.
Comparing per-address results against the baseline CI artifact finds exactly the
three newly passing entries above and **zero newly failing entries**.
The remaining failures are preserved, including unresolved stack variables,
indirect-call types, float/pointer casts, and SIMD pseudocode.

The Windows audit reports raw C-file digest drift for all 13,694 files because
checkout CRLF bytes differ from the historical inventory's source representation;
that counter is not a count of changed functions or original-body mismatches.
The nine updated inventory digests were independently checked against the exact
staged Git blobs before commit. Other historical source-digest drift is not
silently refreshed by this repair.

A whole-tree syntax inventory remains distinct from linking, Xbox ABI recovery,
x87 precision, or gameplay validation.

All four GitHub workflows passed on the audited code commit:

- [Full C11 draft syntax inventory](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39965352659):
  Ubuntu Clang 21.1.8 independently reports the same **12,341 pass / 1,353 fail**,
  zero original-body mismatches/missing labels, and no new per-address failures.
  The formerly crashing entry-symbol audit now finishes with 12,950 direct-name
  candidates, 13 alias candidates, and 731 entries still requiring identity review.
- [Reviewed C11 ABI models](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39965352596).
- [Numeric and EAX-stack C11 review](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39965352624).
- [Function-group validation](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/39965352681).

The GitHub artifact confirms all nine changed C-source digests match their
inventory entries. It also reports 646 other historical C-source digest differences;
those are not original-body hash mismatches. Green inventory collection explicitly
permits the 1,353 known compiler failures and is not a green game build.

Unresolved examples: incoming register contracts, indirect-call signatures,
data-symbol binding, other decompiler casts, and SSE min/max NaN selection and
upper EAX behavior in `0x00216350`. The x87 extended-precision constant at
`0x003b7232` in `0x002f032e` was deliberately left unresolved: a host integer or
an unverified host `long double` is not evidence of its 80-bit representation.
No function is newly marked behavior-verified or 1:1.

## Deployment and rollback

Source and validation changes only. No installed game, production service,
permanent save, or proprietary evidence was modified. Roll back with normal
Git reverts of the two code commits, preserving the original XBE and evidence
outside the checkout. Re-run the inventory after any revert; the pre-fix audit
crash and old workflow paths would return if the validation repair is reverted.

## REA workflow boundary

Followed the official
[reverse-engineer-anything instructions](https://github.com/morluto/rea/blob/main/.agents/skills/reverse-engineer-anything/SKILL.md):
bind the exact artifact, inspect focused instruction evidence, preserve unknowns,
and separate observation from inference and execution.
The read-only REA 6.7.0 diagnostic reported missing Codex registration and no
configured native analysis engine. No client configuration or engine installation
was changed. The XBE observations above come from local hashing, Ghidra exports,
and Capstone, and are not claimed as REA Evidence records.
