# Timestamp leaf checkpoint, 2026-11-05

Full exact-tree Clang 21 C++17 audit at source commit
`f3f82d48ae499bf0418a3a7c5006638afff36015`: **4,058 of 13,694 pass**, 9,636
fail, zero provenance errors and zero checker errors. Isolated syntax coverage
is 29.633416094639987%, not game completion or proven Xbox behavior.

Only `0x002f2986` and `0x00377780` improve from fail to pass compared with the
4,056 checkpoint. No prior pass regresses; all original body labels remain
unchanged. Exact-tree verification passed. Report SHA-256:
`8a41ad85d1f450ef897791f29cf26571f9e5ff6304b944349058244ebb2db096`.

See [the bounded native projection](timestamp_leaves_native_projection.md).
The exact two original records total 20 bytes and nine instructions. They are
statically decoded data, never executed game code. Native RDTSC transport is
not an Xbox clock source or guest ABI implementation. No clock frequency,
monotonicity, CPU ordering or equality between separate timestamp reads is
claimed. Standard C++ array bounds and the stated alignment/lifetime contract
apply to the two DWORD output objects.

The eleven-file package was independently accepted at patch SHA-256
`eec82f0f8f9773d792e85c9e9527b19233225cbb1f963a8b0c7a7c3601db76b7`.
Independent report SHA-256:
`0cd4c4820a24f2c33a2941f2942e3f48f58a72190e9180e35233a9b5164b8321`.
Review passed all 60 compiler/ISA/CET configurations and added 37 assembled
adversarial negatives, five positives, 40 optimizer/frame configurations and
68,608 independently controlled paired cases. Native code is statically
checked; controlled authored primitive substitution tests transport rather
than nondeterministic timestamp equality.

Canonical integration matched all eleven frozen file hashes, with an additional
exact-byte preimage attribute rule. Its GCC 15 amd64v3 twelve-way matrix passed
private record replay, native codegen graphs, controlled transport, ASan/UBSan,
separate UBSan, alignment negatives and 90 controls. Leak checking is explicitly
unavailable; process-local detect_leaks=0 preserves ASan/UBSan access checks.
An initial coordinator command supplied a file where the private-export option
expects a directory; it stopped before compilation and passed after correcting
that input path. No source correction was needed.

The broad tools discovery retains exactly the previous failure identities:
439 tests, 14 failing subchecks, one error and 33 skips. This is not a blanket
green regression result. C++-only policy, all 13,694 source locations/body labels
and tracked-file safety scan passed. The preceding checkpoint's complete
workflow aggregate was verified separately; this batch adds focused integrated
checks and the fresh whole-inventory syntax/broad discovery runs.

Publication and exact-commit hosted CI are separate gates and must be verified
before claiming remote completion.

A subsequent complete run of all 133 existing workflow aggregate commands also
passed on this batch with Clang 21 and official Ubuntu GCC 15 amd64v3. The new
timestamp gate was separately validated as described above. Predecessor main
`c0c45a50049e060ee0ded648361439fba7ccebef` completed hosted Actions run
`42030304358` successfully. Its progress publication `87cd7691` is preserved;
those published metrics correctly describe that predecessor, not this new batch.
