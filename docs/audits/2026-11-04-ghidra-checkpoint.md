# Ghidra-evidenced C++17 checkpoint

## Measured coverage

Commit `e8fff7d4560c573d1d057a250e45f4a685be9c4f` passes the complete isolated host C++17 sweep and exact-tree audit: **3,980 / 13,694 sources (29.0638%)**, with 9,714 failures, zero provenance errors and zero check errors. This is twelve new syntax passes since the 3,968 checkpoint and thirty-five since the initial 3,945 baseline. No source regressed and all original body labels remain unchanged.

Report SHA-256: `659f07da824412203634ff23ddee4d7a4caf3e5a8c17e2ac958762175191b861`.

The twelve newly passing entries are `0008dcf0`, `000c0040`, `0023c0e0`, `0023cca0`, `002e0650`, `002e7b00`, `002ea08b`, `002ea0ca`, `0030f7d0`, `0030f7e0`, `0030f7f0` and `0030f820`.

The four separate repair commits cover two source-matched memory-call declarations, five address-correct existing heap interfaces, one bounded raw-word x87 storage operation and four exact guest-address constants. Their dedicated audit notes and pinned test manifests describe each evidence boundary. Passing C++ syntax is not complete Xbox behavior, ABI, linking or playability.

## Tests and regression correction

Broad discovery ran 266 tests, retaining the fourteen failing subchecks and one stale-provenance error previously reproduced on the unchanged remote base, with twelve optional skips. These failures are not hidden or reported as passing. All new focused gates pass, including optional private instruction replay; source-only FP gates are run separately from unittest discovery. The x87 storage gate passes 190 controls with private evidence and 11,058,432 bounded output/state comparisons at both O0/O2, with independent sanitizer and rounding checks.

An additional historical lane checklist exposed a regression introduced by our earlier `6a4e2f7a` initializer repair: it still expected the superseded host function-pointer spelling for the callback word at `000388b0`. This was not a remote-base failure. The checker now accepts only the exact historical or reviewed-current source hashes. For the current spelling, it requires the independently pinned initializer manifest and reverses exactly those edits to the historical SHA-256/Git blob before applying the unchanged token checks. No game source, original instruction fingerprint or historical source expectation is weakened or changed.

Five dedicated overlay tests preserve the entire original contract dictionary hash and reject changed source, changed metadata, forged pins and corruption of an unrelated lane invariant. All twenty-two historical source invariants pass. The current initializer evidence gate remains separate; historical normalization is not a second callback implementation. The later checker/documentation changes do not alter any source or header compiled by the recorded sweep, and exact-tree verification still passes.

Both full historical literal ledgers pass their preimage/corruption and O0/O2 controls: 46 complete/204 partial/483 DWORD values in the 250-case ledger, and 18 complete/191 partial/469 values in the 209-case ledger. The twenty-case byte-offset ledger also passes all eighty compiler probes. Their original manifests remain unchanged.

## Evidence and publication boundaries

Official Ghidra 12.1.4 and an official JDK run only in the cloud. The reviewed exporter uses immutable read-only access on a copied project and does not execute uploaded scripts or original game code. All 13,694 canonical recorded body hashes and ranges match inventory; 849,614 instruction records cover 2,563,752 recorded bytes. Analyst flow overrides, x87 boundary grouping and NOP/PREFETCH disagreements are quarantined for separate raw-byte review. Recorded function bodies may omit real continuations, so a candidate with missing stores was deliberately withheld.

The supplied project has no persisted original FileBytes. Its stored executable-hash metadata does not independently reauthenticate an entire XBE. No raw project database, complete private export or executable is committed.

GitHub metadata for the currently connected account still reports no push permission. The checkpoint remains saved in cloud Git and portable patches; a user-requested same-identity checkpoint publication attempt is handled separately without overwriting remote work or bypassing a denial. No user-computer resources were used.
