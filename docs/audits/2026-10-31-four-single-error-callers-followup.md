# 2026-10-31 — four additional single-error C++17 source-only call edges

## Starting audited baseline

The last **completed** original-address C++17 Clang audit used for this
selection was at `48e9a2fa7465d131acf4653bf65a1e188e5d89f8`,
workflow `41232980884`: **3,552 passing, 10,142 failing,
25.94% of all 13,694 canonical functions**, zero reported original-body
provenance mismatches. This is *not* the final post-repair measurement.
The complete audit on the preceding nine-repair batch was still pending
when this batch began. GitHub's full audit and progress publishing are
the authoritative later checkpoints; do not extrapolate a pass count.

## Changes: exact existing callee draft signatures only

All four callers failed with exactly one reported C++ diagnostic in
the completed baseline: an undeclared `FUN_...` direct call.
The independent callee draft from the same pinned source tree had
compatible argument count and return usage. The only source change
is a file-scope `extern` with its *existing callee draft* signature.
The original caller function body, call expression, original entry
address and SHA-256 digest label were unchanged.

| Caller | Callee draft | Caller before Git blob | Callee draft Git blob | Original x86 body digest label |
| --- | --- | --- | --- | --- |
| `0x00281870` | `void FUN_00281560(void)` | `c7f85eb87464ed4e0d02fea9c25df1db7af99ef1` | `ee9aa06b0d1a4ad02b33f2084400b42f8f04b62f` | `26D4096631383E574CCAE3FC6079553539BDB595BB449BC94E67FEA638916E63` |
| `0x002899D0` | `undefined4 FUN_00289e20(void)` | `209dec5cd065333aa611a06bdd6733d0f6d499a2` | `240a83c27888727b27e548c6991d1a18789a0293` | `365A33F8B8B6661500B572E7793F9492ABCD87A8748EF7F8B29F489559BF3B26` |
| `0x002BD4E0` | `void FUN_002be8b0(void)` | `a201556289f8e20c615b84a2418c407d4e8dd572` | `36177c5f6e68e371cb021a3f66f1bbbed5fcb2e1` | `0398C2C32EC917C2BAB5225F5DF071FA25E44A564A11391C39669E33B1D22277` |
| `0x00375B20` | `float10 FUN_00375940(float param_1)` | `e83ad8595df65d0699cc78a2f4cd18cab80d7df8` | `d2ad2a9604c125cc952e8f712747817ffb9f760d` | `9FCAFBE6FE11122EA7F5CCF612456CA82EB6C7FCD612B17CFF39BF13126D99A6` |

## Tests and safeguards

`tools/test_cpp_20261031_four_mapped_source_calls.py` is registered in
`.github/workflows/cpp-compatibility-audit.yml`. The test asserts:
- Exact original Git source blobs when only the newly inserted declaration
  is stripped; no function body mutations or origin-address changes
- Exact callee draft blobs and prototype matches; retained original x86 SHA labels
- Strict Clang++17 syntax checks at `-O0` and `-O2`
- Negative-control compilation **fails** when the new declaration is removed

The tests and workflow run have to **finish successfully** before any of
these functions are credited as newly syntax-passing in the README or
progress JSON. Older full audits may be cancelled/replaced by a
new exact-main-tree run; do not manually publish speculative coverage.

## Quarantines and original behavior proof

Rejected additional first-error candidates included:
- `0x00074AD0` and `0x00075380`: source drafts consume a
  `undefined4 *` callee return as a host integer; cannot silently truncate
  pointers to make strict C++17 compile.
- `0x0012DF60`: source stores a void-returning callee draft as `int *`.
- `0x000B2CA0`: caller passes a four-byte byte array where the callee
  draft declares an `int *` output. A verified guest-storage overlay
  or original XBE must settle the exact alias contract.
- `0x002BB050` and `0x0017DF40`: original draft call arities disagree
  with independent callee draft declarations.
- `0x0027E5F0`: stores a callee-draft `void` output into an `int`.

No fake overload, guessed host pointer conversion, made-up return, synthetic
guest stack value or removed original operation is permitted to bypass these
constraints.

All newly declared symbols remain **ABI_UNVERIFIED**.
The original Xbox XBE was not available to authenticate in this session.
Pinned XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original CALL location, input registers, 32-bit stack layout,
callee `RET n`, x87 result path for `0x00375B20`,
SEH and virtual method identity still need direct original instruction
evidence. None of the declarations prove gameplay parity or native PC
linkage for **BruteForce: Reloaded**. The 539 fidelity review flags must
also remain triaged independently from syntax-only progress.
