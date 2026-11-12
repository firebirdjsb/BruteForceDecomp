# Four guest DWORD constant stores

This batch changes exactly one assignment in each of four canonical C++ drafts.
Original entry/body labels, external declarations, signatures and returns are
unchanged. The existing globals still have unresolved storage/mapping identities.

| Entry | Store destination | Stored DWORD | Body SHA-256 |
|---|---|---|---|
| `0x0030f7d0` | `0x00401050` | `0x0039e3a0` | `84AB4E18F6B21B2FDA87A3EA4DA9F6BF36185B8F78482FFF91AE5E048E49836F` |
| `0x0030f7e0` | `0x00401054` | `0x0039e538` | `863863DC8BD3C27836B24EF2A1D188A4D0AB1814C83BE8CAD0C162C43F0DFCD2` |
| `0x0030f7f0` | `0x00401058` | `0x0039e3a0` | `066A97FD8D2672ED629DFA120D264D338476205D54D13143642C8437C89612FA` |
| `0x0030f820` | `0x00401360` | `0x0039e3a0` | `1DBCE9CD1D0075F2CB11DA5C4B4EB917F794516E1C69CBCF319E2647497A2185` |

## Evidence and bounded change

The immutable Ghidra 12.1.4 program-memory export supplies each complete 11-byte
body: `C7 05 <absolute disp32> <imm32>; C3`. A narrow independent x86-32 decoder
checks the opcode, ModR/M, exact width/length, destination, value and plain RET.
Each memory body digest matches canonical inventory. Each listing has two
instructions, exact full-body coverage and no length/fallthrough/flow override.
Listing text is not used as evidence of the operand values.

Replace the casted address of the host `PTR_LAB_*` symbol with its evidenced
32-bit `UINT32_C(...)` guest word. No host pointer is truncated or substituted,
and no new guest-address resolver or callee interface is introduced.

`metadata/cpp_20261104_four_guest_constants.json` pins both source versions, the
preimage Git blobs, original body hashes/ranges, four tiny byte windows and the
private JSONL record hashes/offsets. It also pins the private provenance and
validation records without committing those records or any private path.

At base commit `280f5cf7317833f7b224d18c8a3d56be664c8f96`, all 26 existing JSON
metadata files were checked for these entries; none overlap a historical repair
ledger. Identity/group inventory CSVs remain unchanged. The test continues to
check for target overlaps while allowing unrelated new manifests.

## Checks

Run `python3 tools/test_cpp_20261104_four_guest_constants.py -v` with Clang++
available. No private input is needed for the public tests. Optionally set
`BF_GHIDRA_ALL_JSONL` to the private `all-v1/functions.jsonl` export to recheck the
four exact records. For out-of-tree review, `BF_REPO_ROOT` selects the original
checkout and `BF_OVERLAY_ROOT` the reviewed files.

The focused run used Debian Clang 19.1.7 and passed all 9 tests with the private
records. Public mode passes 8 tests and skips only the optional private recheck.
Coverage includes:

- Exact one-statement forward/reverse round trips, preimage SHA-256/Git blob,
  repaired SHA-256, canonical entry paths and inventory body labels.
- 16 complete-source strict C++17 checks: syntax and object generation at O0/O2
  for four repaired files. All pass.
- The same 16 checks on exact original sources. Each fails with exactly the
  original pointer-to-integer conversion diagnostic.
- 44 individual body-byte mutations with recomputed digests, independently
  rejected by opcode/address/value checks; alternate lengths/prefixes/RET forms
  are rejected too.
- 64 metadata operand/range/source mutations and 96 private-record identity,
  coverage, instruction-byte and listing-flag mutations.
- Initialized host-storage fixtures using the exact extracted assignments:
  all four destination cells, two outer sentinel cells and two decoy label
  values are checked across five seeds and repeated stores at O0/O2.
- 32 negative synthetic runs: wrong DWORD, wrong destination, partial byte store
  and omitted store, independently for all four assignments at O0/O2.

## Limits

This is recovered immediate-store evidence and bounded host-source validation.
The synthetic fixture executes extracted assignments, not canonical game
functions or original game bytes. Full Xbox memory mapping, overlapping globals,
class/vtable meaning, register/stack contracts, flags, platform integration,
whole-program linkage and game runtime remain unverified. The stored executable
hash is metadata, not whole-XBE reauthentication. No byte-identical rebuild or
1:1 game-behavior claim is made. A full exact-commit compile audit is a separate
integration gate and is not reported by this focused batch.
