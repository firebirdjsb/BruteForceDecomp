# Two existing WORD-limit caller declarations

This batch adds only `extern void FUN_00386141(void);` to `0038620e` and
`extern void FUN_0038618e(void);` to `0038624a`, with explicit unresolved-ABI
comments. Current source preimages come from `0d126ada5b84ae7aac17bd02e97799f8e84291c9`,
after the separately checked WORD-limit extern changes. The older declaration
triage source hashes do not apply. Function bodies, signatures, call arguments,
return expressions and the historical inventory, including `c_sha256`, are unchanged.

## Evidence and tests

The immutable manifest pins exact raw source bytes before and after each
insertion, existing callee signatures, header/routing dependencies, historical
inventory rows and original body hashes. Each insertion reverses exactly to its
WORD-corrected predecessor. Public tests use strict C++17 syntax and object-only
compilation of callers, callees and combined source at O0/O2, with function-pointer
type assertions: 24 positive checks and 16 rejected declaration/return/arity
controls. No draft, original function or linked game object is executed.

Optional private replay validates four complete bodies, 274 bytes and 84
instructions, using the indexed export and independent 32-bit decoding. Every
boundary, direct CALL operand, internal branch, RET and fallthrough is checked,
with no flow, length or fallthrough overrides accepted. Public coverage includes
467 metadata leaves and 212 individual instruction-window byte mutations;
private controls cover 1,262 record leaves, 52 index leaves, 548 byte mutations
and 1,388 independent byte/structure/flow checks.

Run `python3 tools/test_cpp_20261105_word_source_declarations.py` publicly.
For private replay, pass `--private-export <export-directory>` and
`--tooldeps <capstone-module-directory>`. Private evidence is never committed.

The prior WORD-limit verifier retains its immutable manifest and raw width
apply/restore hashes. It accepts later source only by reversing this exact,
separately pinned declaration insertion. It also knows the exact independently
authored counter-width manifest `f21931924ea7c42ccde29b00284942e8321f84fc3ad3da0d8f71e641b120ba69`:
only its seven approved substitutions across five specified paths can project
back to prior source and region-footprint pins. Tests cover baseline,
declaration-only, counter-only and combined source layouts when that optional
counter package is installed. No broad declaration stripping or hash relaxation
is used. The old 19/1/1 diagnostic comparison is explicitly replayed at the
recovered historical WORD stage, not claimed for the newly passing callers.

The 4,052-pass baseline audit is not a final integrated audit. These two callers
now pass isolated syntax; the coordinator must perform an exact-tree full audit
before publishing an aggregate count. The older WORD gate's optional audit is
specific to its historical isolated package and is not repurposed as evidence
for a later combined tree.

## Boundaries

Original callers consume ECX and EDX and preserve ECX for their callees. Callees
save incoming ECX in ESI. Their zero-argument draft signatures do not bind this
register state, and register pseudo-locals remain unbound. Downstream direct
operands `00385d64`, `00385d45` and `00385df0` are observed only. The latter also
receives hidden EDX and ECX; downstream calling conventions and cleanup remain
unresolved. Existing WORD-limit externs stay unchanged, without global storage,
layout, alias or guest-pointer mapping proof. This is source syntax admission,
not original ABI recovery, whole-function behavior, semantic equivalence,
full-XBE reauthentication or a byte-identical rebuild.
