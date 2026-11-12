# Timestamp caller declaration and local-storage checkpoint

The complete exact-source Clang 21 C++17 audit at
`444944072dbed0760230b8246045ecaeeffb9510` verifies **4,060/13,694 passes**,
9,634 failures, zero provenance errors and zero checker errors. Syntax coverage
is 29.648021031108513%, not recovered gameplay, Xbox ABI or native caller safety.
Only `0x002e3f20` and `0x002e3f50` change from failing to passing. No prior pass
regresses and all original body identities remain unchanged. Exact-tree
verification passed. Audit report SHA-256:
`61d708cae52e1fe8efd70afa567c42e3a7ccf3ce4ba33ad6e044b34002144f1b`.

The exact declaration supplies the syntax gains. Separately, original stack
instructions prove contiguous eight-byte scratch passed to the callee and read
back as low/high DWORDs. Replacing split local objects with a two-element array
corrects that bounded representation. It does not initialize scratch, bind
incoming ECX, change guest object expressions or execute either canonical caller.
See [the scoped evidence and limitations](timestamp_caller_storage_20261105.md).

The accepted nine-file patch SHA-256 is
`1117ccd3002d90dfe49d71cf30199378d173031eb00678be212939f164dfd3e3`.
Independent review report SHA-256:
`d690219833797c528f5854730f1738523d0b63362f1059b9396f5f991c2e3485`.
Review verified all 114 original bytes/43 instructions, call displacements,
stack lifetime, conditional skip, signatures and exact raw source reversal.
It reproduced the public/private gates and added 228 compiler checks, 35
structural mutations and 180 independently authored fixture commands, including
86 negative outcomes and sanitizer bounds/lifetime canaries.

Canonical installation matched all nine accepted postimages before the separate
raw-preimage attributes and evidence-document trigger were added. Integrated
Clang 19/21 and official Ubuntu GCC 15 amd64v3 validation passed 287 negative
controls and 260 compile/run commands. Canonical callers were compile-only;
only authored deterministic storage fixtures executed. Those fixtures reject
missing/partial producers before reading unwritten values. This is not native
timestamp equality, production output guarding or MemorySanitizer coverage.
ASan/UBSan uses detect_leaks=0 because leak inspection is unavailable.

All 133 existing aggregate commands passed with Clang 21/GCC 15 amd64v3. The new
caller gate and rational-foundation verifier passed separately. Broad discovery
ran 451 tests with the exact prior fourteen failing subchecks, one error and
33 skips, so no blanket all-green suite is claimed. C++ policy, all 13,694 source
locations/body identities and tracked-file safety scan passed.

Predecessor `7124071d8f91eace5b5a98c662a0f920ca6e5198` completed Actions run
`42048587829` successfully. Its progress-bot commit `98b2a167` is preserved.
The new publication still requires its own hosted CI. Hidden ECX, guest mapping,
clock semantics, caller behavior and byte-identical reconstruction remain
unverified; neither a syntax gain nor this local-array repair resolves them.
