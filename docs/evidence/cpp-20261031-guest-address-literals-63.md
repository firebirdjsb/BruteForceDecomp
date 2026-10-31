# 63 original guest-address literal repairs

Base: `41eb6491b56548b9fc00c5aee5aa9ce0f23d1caa`. Canonical language: C++17.
This batch changes exactly one address expression in each of 63 original-address
drafts. It preserves the original entry/body SHA-256 labels and all other
statements, accesses, widths, call expressions and register pseudo-variables.

## Original instruction evidence

The private retail XBE was authenticated with SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
All 63 complete, ordered original bodies matched their recorded hashes.
Each replacement has exactly one decoded `MOV r/m32,imm32` instruction storing
the same known 32-bit label address. Only that address value is reconstructed.
An address label does not establish its data layout, class, vtable or behavior.

For example, original `0x0001D704` has `C7 00 28 40 3A 00`, storing DWORD
`0x003A4028` through EAX. Its draft assigned `&PTR_LAB_003a4028` to a DWORD,
which constructs a host pointer. The corrected expression is
`UINT32_C(0x003a4028)`. The surrounding stores and unresolved incoming EAX/ECX
contracts remain unchanged. No host-pointer truncation or cast is introduced.

[The public manifest](../../metadata/cpp_20261031_guest_address_literals.json)
records every source preimage Git blob/SHA-256, resulting source fingerprint,
exact replacement, original body ranges/hash, instruction address and operands.
It contains only compact instruction windows, not a complete disassembly.

## Validation

The complete pre-batch audit at the base commit is GitHub Actions run
`41203948583`: **3,463 pass / 10,231 fail (25.29%)**. All 13,694 report source
fingerprints were checked against canonical Git archive bytes before repair.

- All 63 entire translation units pass isolated strict Clang++17 at `-O0` and
  `-O2`, with `-ferror-limit=0 -Werror=pointer-to-int-cast`. These are syntax
  checks; optimization flags do not constitute execution tests.
- All 63 restoration controls reproduce the original pointer-assignment error.
  All 63 changed-literal controls are rejected by the source fingerprint gate.
- Removing the comment and reversing the single expression exactly reproduces
  each original canonical-LF source and Git blob. No other source edits occur.
- Private-XBE verification decodes every complete body, authenticates all 63
  store boundaries/operands and checks one-to-one immediate occurrences.
- All 52 commands in the repository CI preflight passed locally on canonical-LF
  sources. No global syntax flags, diagnostic suppressions or audit limits changed.
- The previous 27 declaration repairs still pass their separate gate. None of
  their caller/callee owners or quarantined functions overlaps this batch.
- Only the 63 affected inventory source fingerprints/issues are updated.
  Twelve of those historical `c_sha256` fields were already stale relative to
  the audited sources; their previous values remain in this batch's manifest.
  Original-body, historical C11, ABI and behavior fields retain their values.

Run `python tools/verify_cpp_guest_address_literals.py` for public source/syntax
checks. Add `--xbe <private-image>` and, if needed, `--tooldeps <capstone-dir>`
to authenticate original instructions locally. The compiler is required;
missing tools never count as a pass. Public CI has no private XBE and clearly
reports that instruction authenticity was not rechecked in that run.

## Quarantine and milestone boundaries

Of 78 initially eligible single-diagnostic drafts, 14 were excluded for original
x87/SIMD, FS/SEH, indirect-call or dynamic-stack instruction risks. One failed
the exact source-occurrence/store-immediate correspondence. All 15 are recorded
in the manifest and remain unedited. The register-sensitive constructor at
`0x00092330` and caller `0x000922A0` remain separate work: their implicit EAX/ESI,
byte writes and returned register must not be fabricated to satisfy syntax.

Independent review approved this limited value/syntax scope. The mapping of
each draft pseudo-register lvalue to the machine store destination is still
unverified; matching an immediate does not establish that mapping.

This batch establishes bounded original DWORD **values**, plus host C++17
syntax. It does not establish complete caller semantics, guest memory mapping,
calling conventions, native PC linkage, byte-identical rebuilding or in-game
behavior. The three milestones remain distinct in
[milestones.json](../progress/milestones.json). Published percentages require
a complete exact-tree audit; local candidate totals are not published coverage.

No executable/assets, game process, installation, saves or production data were
touched. Rollback is a normal revert of this batch's source/inventory and
verification commits; no game deployment is required.
