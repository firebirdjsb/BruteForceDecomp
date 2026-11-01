# 89 evidence-gated C++17 declaration repairs

Starting main: `faeba8c74a848ec6f02949ec13f9e011fa1905b2`.
The previous completed CI audit at `2bf14b8db4431b8f1e7efd95df994adc9d9766c8`
was checked against every current source byte. A new local Clang 18.1.3
full-inventory audit at starting main independently reproduced **3,637
passing, 10,057 failing, zero provenance errors and zero check errors**.
All 13,694 canonical drafts remain present. These are isolated syntax counts.

## Source change and selection

Screened 1,200 current failures with missing original-address declarations.
Of these, 1,045 still failed with the exact existing callee draft signatures,
32 had complex/unavailable signatures and one used a legacy header layout.
122 passed the source-only preflight. Held 33 float/double, allocator and
explicit guest-stack cases for their separate evidence review. Accepted
**89 callers** with **168 file-local declarations**, covering **131 distinct
callee identities** and **217 original direct E8 call sites**.

The 89 edits add declarations after the common type include. Their full
original source bytes are recoverable exactly by removing only the inserted
block. No function body, expression, argument, return type, pointer cast,
original-address identity or original body-digest label was changed.
Every declaration matches its existing callee definition, including parameter
types and names. This preserves the drafts; it does not certify those drafts'
original Xbox ABI or behavior.

`metadata/cpp_20261101_89_direct_declarations.json` records all caller/callee
identities, exact pre-change source SHA-256 values, original body digests,
declarations and original CALL addresses. The test handles a callee which is
also a repaired caller by removing only its authenticated declaration block.

## Original executable and validation

Original private XBE authenticated with SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
No executable bytes, full dump, assets or machine-local paths are committed.

- All 217 E8 destinations were decoded and checked against that executable.
- 190 distinct caller/callee complete contiguous byte ranges reproduce their
  original inventory body digests. For the other 30 of 220 identities, a
  complete contiguous range was not established; their labels are preserved
  but no new complete-body hash claim is made.
- All 89 complete caller sources pass strict Clang++17 at O0 and O2. Removing
  each added block restores an undeclared-function failure.
- All 89 caller objects link relocatably with **30 actual callee source
  definitions**, resolving 36 declared caller/callee pairs. No synthetic
  definitions or stubs are used. Unrelated unresolved game dependencies remain.
- The binary-free evidence fixtures reject 868 displacement mutations and
  217 non-CALL opcode mutations. CI also retains the prior 36-call evidence gate.
- The affected existing 30-caller, 11-caller and 28-caller declaration suites
  pass. Source-layout, body-label, repository safety and progress gates remain
  required. The final 13,694-function audit and progress publication run at the
  pushed tip; focused checks alone do not publish a new percentage.

## Remaining fidelity work

The five return-only fidelity flags now have authenticated original body
evidence in `2026-11-01-return-only-original-effects.md`. Their original effects
are absent from the current drafts, so the flags remain open. The other 534
flags concern naming review, rather than 534 proven missing implementations.

The repaired declarations remain **ABI_UNVERIFIED**. Original implicit
registers, complete stack cleanup, partial returns, guest32 memory, SEH,
x87/SSE, indirect dispatch and source-to-machine execution still require
reconstruction and testing. Partial host symbol linkage does not establish
those contracts. No 1:1 behavior or playable native BruteForce: Reloaded build
is claimed by this batch.
