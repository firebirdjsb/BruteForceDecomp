# Tagged conversion and ESI/stack checkpoint

The exact-tree audit at `a352cb91bf1d6350387ef2cdcc6a3a605130a5fb` checks all 13,694 canonical sources: **4,000 pass (29.2099%)**, 9,694 fail, zero provenance errors and zero check errors. Exactly eight reviewed entries change from fail to pass relative to the 3,992 checkpoint, with no regressions and unchanged original body hashes. This is +55 over the initial 3,945 baseline.

Report SHA-256: `338d2e2afea9facfed60df468197e4800ed6aeec26f389c9012fde7407f19c6f`.

The tagged conversion at 00077eb0 restores bounded native conversion operations. Its fixed threshold requires original memory 003a4fb8 to retain word 0x358637bd; initial project bytes do not prove runtime immutability. O0/O2 and GCC ASan+UBSan each pass 20,570,112 comparisons, with 60 public and 195 private negative controls. See the dedicated conversion audit and immutable manifest for exclusions.

Seven callers restore the existing ESI and stack-word handoff to 0008f6a0: 0014bd40, 00173270, 001fba60, 0020d710, 0020db30, 00226360 and 0022dc60. Seven focused tests validate 477 stored bytes and 164 instructions across eight bodies, including 170 byte mutations, complete syntax/object checks and capture negatives. Neither guesses missing registers nor truncates native pointers.

Both changes received independent review. Broad discovery ran 295 tests with the same fourteen failing subchecks and one error previously reproduced at the untouched remote baseline, plus fourteen optional skips. New focused and private evidence gates pass. All 22 historical lane invariants pass; source provenance, C++-only policy and repository safety checks pass.

Syntax compatibility is not proof of whole-game 1:1 behavior. Guest ABI, register bridges, linkage, runtime mapping and original whole-XBE authentication remain unverified. Original machine-code streams and user-uploaded scripts were not executed. All work used cloud resources, not the user's computer.
