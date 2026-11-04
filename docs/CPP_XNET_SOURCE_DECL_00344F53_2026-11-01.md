# C++17 XNet source-only declaration pass — 2026-11-01

Base: `c5c31545cbb6b9de5bfc7b0f99d7c9035afdc422` (completed exact-tree audit for `10c90ea`: **3,916 / 13,694**, 9,778 failing).

The original retail XBE **was unavailable in this run**. Required SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The source's original-body SHA label was preserved but not independently authenticated against the binary. No Xbox CALL/ECX/stack/RET, native linkage, or 1:1 runtime claims are made.

## Safe change

`0x00344f53.cpp` invokes `FUN_0034c7e5(param_1,param_2)` with two `undefined4` arguments. The original-address callee draft defines `void FUN_0034c7e5(undefined4 param_1,undefined4 param_2)`. Added only that matching forward declaration, marked `ABI_UNVERIFIED`. Original caller byte content, function entry and body SHA label are unchanged.

Preimage source SHA-256: `e7db0f2a496a30d78aacbf824c64f4b4089013456a2dc484ef9cd94558adcd71`. Original-body digest LABEL: `D6B97D1DB2DA6F7BB0BAD3A760F00B4186FFB16C4DE287E70DA0EF2F25F0EA8C`.

## Validation

Local isolated Clang++17 `-fsyntax-only -O0` and `-O2` passed with a reduced compatible header; both declaration-removal negative controls failed as intended. The verifier additionally checks source preimage and the exact callee draft signature. Run on the full checkout: `python3 scripts/verify_cpp_xnet_00344f53_source_forwarder.py --root .`. Only the full strict exact-tree audit may update the published C++ syntax percentage.

## Quarantine

Reviewed 15 previously deferred XNet call edges and 17 adjacent XNet wrappers, plus 17 DSound wrappers as a broader screening queue (49 candidates total). Only one source-only call declaration was established with matching arity and result contract. Other examined XNet forwarders call callee drafts with mismatched parameter counts or hidden register inputs; DSound wrappers require independently verified callee contracts and audit-first-error classification before edits. Do not manufacture parameters or C++ casts to force syntax.

Original retail functions must be retained in the 1:1 decompilation; independently verified demo-only content must be excluded only at the future BruteForce: Reloaded packaging boundary.
