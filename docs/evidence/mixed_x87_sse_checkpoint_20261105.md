# Mixed x87/SSE checkpoint, 2026-11-05

The exact-tree Clang 21 C++17 audit of source commit
`2e708322076c25612cd998c95d7e1f93d202140e` checks all 13,694 original entries:
4,056 pass, 9,638 fail, with zero provenance errors and zero checker errors.
This is 29.61881115817146% isolated syntax coverage, not game completion,
original Xbox execution, recovered guest ABI, or byte-identical reconstruction.

Compared with the prior 4,055-entry audit, only `0x002b6640` changes from fail
to pass. No prior pass regresses and every original body identity is unchanged.
Report SHA-256:
`4a3c9a240280e46d8b438cb51961e52b8cb919a2775992c041f04b46a51c7bb2`.
The exact-tree audit verifier passed.

## Accepted reconstruction

See [the bounded operation contract](002b6640_mixed_operation.md). The complete
103-byte/30-instruction private record was statically decoded, never executed.
The original signature and exact source preimage are preserved. Arithmetic,
NaN undefinedness, x87 state, packed hidden-lane exceptions, overlap and exact
12-byte external spans retain their documented boundaries.

Installed-layout independent review accepted the 20-file package at patch hash
`0df4196b243191ba2b1e3faf472ffb7f2c9d99646228cab7261b7b642a61caad`
and source-manifest hash
`0e7d8230e5978bcd80bfa7e1bbf89e76723f8c59fe378c2fe3bf3b1bf798d1fe`.
Review report hash:
`730d176f47f41fe526612c98df225287a97f7890dc17124a18a5906da41fc83f`.
Canonical integration matches all twenty accepted file hashes. The additional
workflow step and exact-byte fixture attributes are integration changes.

The integrated Clang 21 and official Ubuntu GCC 15.2.0-16ubuntu1 amd64 suite
passed O0/O2, protected and GCC ASan/UBSan variants, including enabled ASan fake
stack. It passed the independent integer/Fraction arithmetic and reviewer
state checks, 110 provenance mutations and twelve native mutation classes.
ASan does not instrument inline assembly; protected pages and codegen checks
cover those operations. Leak detection is disabled in this environment.

All 133 existing workflow aggregate commands also passed with Clang 21 and
the baseline amd64 GCC 15 package. This does not cover the different amd64v3
defaults implicated by hosted CI.

The broad tools discovery ran 439 tests with 14 failing subchecks, one error
and 33 skips. All fifteen failure/error identities exactly match the prior
baseline; this is not a blanket green suite. The existing source-matched caller
provenance/interface failures remain unresolved. C++-only policy passed and the
tracked-file safety scan reported zero high-confidence alerts.

## CI boundary

Published predecessor `b471733af1b4906519f9a7e8c55b40f8f5bb34ef`, Actions run
`42023629522`, passed its conversion-wrapper repair but failed later in the
ordered-matrix codegen checker on compiler-emitted `vzeroupper`. This checkpoint
must not be represented as successful remote CI. Its dedicated mixed-operation
step has not yet run remotely; publication and exact-commit CI remain pending.

## Reviewed amd64v3 portability repair

The official same-version Ubuntu GCC amd64v3 package defaults to x86-64-v3;
its unchanged command reproduces the matrix checker's `vzeroupper` rejection.
The previous amd64 package defaults to baseline x86-64. The hosted log does not
show its configure options, so the specific package variant remains inferred;
the instruction-generation mechanism and rejection were directly reproduced.

The test-only repair accepts exactly one operand-free `vzeroupper` after the
complete 71-event asm region, immediately before the verified return. Native
upper vector bits are caller-clobbered and outside the existing contract. Low
XMM, memory, x87/MXCSR, pointer transport and all original event checks remain
unchanged. No compiler protection or numerical check is disabled.

Accepted patch SHA-256:
`89d088e56ddbcb1071272202b45bb7a7e58c4cd51bcd99ab6ccd50d472201861`.
Independent review report SHA-256:
`200e4519f70df515de0ef4727f3eec7b4984b16a89481419fd69c2400055ef4f`.
Independent review passed three full focused gates, 84 compiled/assembled/
disassembled compiler-CET-ISA combinations, 2,772 existing controls and 10,120
additional rejection mutations. The exact prior checker rejected all 21
outputs containing cleanup and accepted the remaining 63. This is focused
review acceptance, not hosted-CI success.

The integrated mixed-operation suite also passed public Clang 21 and GCC 15
amd64v3 O0/O2, protected and ASan/UBSan variants. Its private program-record
replay was separately validated in the earlier integrated amd64 run.

Final integration also passed the complete existing 133-command workflow
aggregate with Clang 21 and Ubuntu GCC 15 amd64v3: the 132 unaffected commands
ran together, and the reviewed matrix command ran separately with its complete
numeric/state/protection/sanitizer gate and 433 negative controls. All game
source bytes remain identical to the audited source commit. Hosted CI for the
new publication is still required.
