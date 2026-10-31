# 2026-10-31 — exact-tree C++17 single-error and partial-interface repair pass

## Provenance and baseline

Last completed exact-tree C++17 Clang audit: `48e9a2fa7465d131acf4653bf65a1e188e5d89f8`,
run `41232980884`: **3,552 passing, 10,142 failing, 25.94% of 13,694**.
Recorded body-provenance mismatches: **zero**. The structural audit continues
to report 539 **review flags**, of which five are nontrivial XBE-body/return-only
reviews and 534 are naming reviews; none of these flags means behavioral parity.

The original retail XBE was **not available to reauthenticate in this pass**.
Every item below is **source-draft syntax evidence only, ABI_UNVERIFIED**,
not original instruction-by-instruction recovery, verified calling convention,
runtime behavior or full native link.

## Exact one-diagnostic candidates

These two original-address callers had **exactly one diagnostic** each in the
latest complete compiler report: an undeclared direct callee. Their existing
callee drafts have the matching argument count, compatible C++17 scalar
storage and return usage. Only their file-scope declarations were added:

| Caller | Callee draft | Caller original Git blob | Original XBE body digest label | Independent callee draft |
| --- | --- | --- | --- | --- |
| `0x00374E70` (`src/platform/graphics_d3d`) | `int FUN_00374130(undefined4,uint,uint,uint,int,int,uint*,uint*)` | `1f6f17890c7e792fada551c388440ce77520e6bb` | `8A1B08A7CE4F53DDB65A773BA9EB17B0EDB4E04633A52A4E964AC57F6DA0CD96` | `83359ebdd08c26768df2845d9743b70a382cfd73` |
| `0x003561A3` (`src/platform/network_xnet`) | `void FUN_00355BEA(undefined2,undefined4,undefined4,undefined4*)` | `268b033fcd2cc39f2adfcbddfbf1c275b71cba21` | `D40EDEC1EF8A792E5E38596F254F0A49E49F3CE4EDCED86DD7B678503E9F469A` | `56807b64bef86de6af3db975af628f367d3f5e25` |

`tools/test_cpp_20261031_two_exact_single_errors.py` is wired into the
C++17 audit. It checks exact pre-change Git blob hashes of the callers,
unchanged original XBE digest labels, the **existing callee draft blobs**,
and `clang++ -std=c++17 -fsyntax-only` at `-O0` and `-O2`.
Removing a declaration must restore its expected missing-callee failure.
These checks do **not** establish Xbox ABI, object identity or game behavior.

## Seven declaration edges intentionally *not* credited to syntax coverage

A separate initial source-only pass also added 7 draft-matched prototypes:
`0x0036E6E0 → 0x0036E670`,
`0x0036EFE0 → 0x0036EED0`,
`0x00370590 → 0x00373A30`,
`0x00371FA0 → 0x00372180`,
`0x00373730 → 0x003736B0`,
`0x003738E0 → 0x003736B0`,
and `0x003477CE → 0x003476F1`.

Full audit report inspection confirmed **three separate initial compiler errors
in each of the six graphics callers** and **two in the XNet caller**.
Therefore declaring the first missing function cannot yet make these sources
pass. The further issues include original guest pointer-width assumptions,
unknown D3D command-buffer host typing, and an unresolved XNet native export.
They remain ABI/host-storage investigation tasks. No body conversion,
pointer truncation, argument substitution, or fake host-link definition was
applied. These seven added declarations remain source-only, awaiting the
other independently verified repairs.

The compiler report's "first error" is *not* sufficient for selecting
measurable syntax gains: subsequent compiler diagnostics must be examined.
A new complete audit, not the two isolated tests, must determine whether
either candidate increases exact-tree passing coverage.

## Evidence boundaries and next work

- Original body signatures and SHA-256 labels are preserved. Labels are
  **not** independent proof that a private XBE body was re-hashed.
- Check original `CALL` destination, caller push/ECX/EDX/EAX contracts,
  `RET n`, register/flags changes, guest pointer widths, x87/SSE,
  SEH and virtual dispatch before awarding 1:1 behavior credit.
- Continue original-XBE recovery of mismatched high-frequency declarations,
  including `FUN_002ea01d` and `thunk_FUN_00237ec0`.
- Keep native PC linkage and gameplay testing separate from Clang syntax.
  The downstream release goal remains **BruteForce: Reloaded**.
