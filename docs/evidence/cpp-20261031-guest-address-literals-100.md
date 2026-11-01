# 100 bounded original guest-address repairs

This cumulative batch extends the [first 63 repairs](cpp-20261031-guest-address-literals-63.md)
with 37 further files and 96 further address expressions. Total: **100 original
functions, 159 DWORD immediate values**. It establishes those values and isolated
C++17 syntax; it does not establish complete function behavior.

The original XBE SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
All 100 complete ordered original bodies and all 159 `MOV r/m32,imm32` store
instructions were authenticated locally against that image. Each source
`&PTR_LAB_â€¦` / `&PTR_FUN_â€¦` / `&LAB_â€¦` replacement corresponds one-to-one with
the same exact immediate address stored by the original instruction.
No host-pointer cast or truncation is used.

The 52 repository preflight commands also passed for the combined local batch.
Upstream changes pulled after that run require the current expanded gates to be
rerun on the integrated tree before publication.

The original statements, store widths, ordering, guards, calls and unresolved
register variables are otherwise unchanged. The source preimages are preserved
by SHA-256 and Git blob ID in the
[manifest](../../metadata/cpp_20261031_guest_address_literals.json).
Removing the explanatory comment and reversing only the recorded expressions
reproduces each entire preimage. The first 63 repaired source fingerprints are
unchanged by the 37-file extension.

## Validation and review

All 100 complete translation units pass isolated strict Clang++17 at `-O0` and
`-O2`, using `-ferror-limit=0 -Werror=pointer-to-int-cast`. All 100 restoration
negative controls reproduce the original pointer-assignment error; all 100
changed-value controls are rejected. These optimization settings are syntax
checks, not execution tests. The compiler is required and no audit flags or
diagnostic suppressions are weakened.

Independent review checked the 63-file group and then the 37-file extension
against source preimages, complete body hashes, instruction boundaries and
operands. For the extension, every error in the uncapped original diagnostics
is a pointer-to-DWORD assignment at a recorded address-expression location;
independent O0/O2 overlays passed all 37 files. Review approved the bounded
immediate-value scope. The mapping from each draft pseudo-register lvalue to
the original machine destination, guest memory mapping, calling conventions,
callee behavior and complete function semantics remain **ABI_UNVERIFIED**.

The gate is `python tools/verify_cpp_guest_address_literals.py`. Public CI checks
all source preimages, edits, metadata and strict syntax; `--xbe <private-image>`
additionally authenticates the original instructions with Capstone. No original
binary, complete disassembly or private path is stored in Git.

## Selection and progress boundaries

The 63-file group came from 78 single-diagnostic candidates: 14 instruction-risk
cases and one occurrence/store mismatch were quarantined. The extension came
from 189 disjoint multiple-diagnostic candidates: 121 had other errors under
uncapped diagnostics, 25 had complex instruction risks, and six failed the
exact occurrence/store check. The resulting 167 exclusions are recorded and
remain unedited. x87/SIMD, SEH, indirect/virtual calls and dynamic stack contracts
are not repaired by this batch.

Only the 100 affected source fingerprints/issues change in the canonical
inventory; original-body, historical C11, ABI and behavior fields retain their
values. The separate 27-declaration batch and its dependency owners are disjoint.
The three milestones remain independent in
[milestones.json](../progress/milestones.json): C++17 syntax, 1:1 Xbox behavior
and calling conventions, and native PC linkage/adaptations.

The complete pre-batch source audit is `41eb6491b56548b9fc00c5aee5aa9ce0f23d1caa`,
run `41203948583`: **3,463 pass / 10,231 fail (25.29%)**. Its 13,694 source
fingerprints match canonical Git archive bytes. The combined final tree requires
its own full audit; local candidate totals do not update published coverage.

No game process, installation, saves or production data were touched. Only
reviewed source/evidence and checkers are published. Revert this extension's
source/inventory and verification commits to return to the 63-file batch;
reverting that batch's four commits returns to the original baseline.
