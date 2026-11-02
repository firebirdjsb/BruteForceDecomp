# C++17 declaration dry-run gate (retail source, no Xbox ABI promotion)

Audited source SHA: `2f928b2f3f555018cfbacb0539cd07bf098cf2b9` (13,694 checked, 3,917 pass, 9,777 fail). Main HEAD at triage start: `2f0d64f86ca95c4bae9f3742509b7e0c9ea2ae64` (progress publication only). No original retail XBE bytes were accessible in this execution, so no new Xbox CALL/RET, register, guest32, or 1:1 behavioral claims are made.

The declaration-edge audit reports 2,226 `DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE` candidates. **Matching argument count is not matching C++ type or Xbox ABI.** The following 25 candidate call edges were examined against their current caller expressions and callee draft definitions; none is safe for a declaration-only source repair. These are **screened, not patched**.

| Caller(s) | Callee | Source-level blocker |
|---|---|---|
| `0x0028A170`, `0x00294BF0`, `0x00294C70`, `0x002992E0`, `0x00299310`, `0x00299650`, `0x0029D540`, `0x0029D580` | `0x00294B10` | Callee draft returns `void`; callers consume its result |
| `0x000A2090`, `0x001353C0`, `0x00174420`, `0x001744F0`, `0x00225D20` | `0x000A2840` | Callee draft returns `undefined4*`; callers assign to `int` |
| `0x000A7220`, `0x0015FD80`, `0x0025D090` | `0x000A7BA0` | Callee draft returns `undefined4*`; callers assign to `int` |
| `0x00293FF0`, `0x00294150`, `0x002941A0` | `0x00294270` | Callee draft expects `undefined4*`; callers pass guest-address integers |
| `0x00074AD0`, `0x00075380` | `0x00075F00` | Callee draft returns `undefined4*`; callers assign to `int` |
| `0x000BB600`, `0x0010AD40` | `0x000CD9C0` | Callee draft returns `int*`; callers store into 32-bit guest scalar words |
| `0x000F4830`, `0x00106600` | `0x001ED100` | Callee draft expects `undefined4*`; callers supply `undefined1[]` buffers |

The new read-only `scripts/triage_cpp_draft_call_type_risks.py` tests the *exact* caller and callee source SHA-256 preimages and original-body digest labels, inserts the exact callee draft signature **in a temporary file only**, and runs isolated strict Clang++17 `-O0` and `-O2`. It quarantines type/return failures and marks any passing result `SOURCE_ONLY_CPP17_READY_FOR_MANUAL_REVIEW`, **never `X86_OBJECT_ABI_REVIEWED`**. It does not mutate canonical `.cpp` files, fabricate casts, or update syntax progress.

```sh
python3 scripts/triage_cpp_draft_call_type_risks.py \
  --root . \
  --audit cpp_compat_results/cpp_compat_report.json \
  --edges cpp_compat_results/cpp_declaration_edge_triage.json \
  --limit 50 --out cpp_compat_results/cpp_declaration_type_dryrun.json
python3 tests/test_triage_cpp_draft_call_type_risks.py
```

This infrastructure does not replace original retail XBE authentication (required SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`), register/stack/RET verification, cross-function linkage, or behavioral testing. Do not remove retail code from the 1:1 decompilation; verified demo-only material is excluded from the eventual Reloaded release package, not from retail provenance.
