# Authenticated C++17 direct-call evidence — 2026-11-01

Retail Brute Force XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

**Evidence-only batch:** 36 original direct `CALL rel32` targets and 53 observed callee `RET` byte windows were checked against the original XBE, with 89 altered-operand negative controls. This is **not** 36 C++ source repairs or verified Xbox ABIs. No original-address `.cpp` file, body digest, or `ABI_UNVERIFIED` label was changed.

Repeatable verification (the retail XBE stays private):

```sh
python3 scripts/verify_36_cpp_call_edges_xbe.py --xbe /path/to/your/default.xbe
```

## Recovered 0x002E9E80 callers

At `0x002E8C30`, the original code loads `[ESP+4]` into EAX, pushes EAX, sets ECX to `0x0040F0A8`, calls `0x002E9E80`, and returns. At `0x002E8C60`, a distinct instruction body saves incoming ECX into ESI, writes guest value `0x00386908` to `[ESI]`, and conditionally pushes ESI and calls the same target with ECX `0x0040F0A8`. That caller restores ESI and ends in `RET 4`. Its canonical source entry/alias requires investigation, not invention.

Original callee 36-byte body SHA-256: `0EDFDF0CD21B5EFFDBE5A44D1ED33CCDEEB36AA6BEB3B4B1D937400CB2F94B95`. It loads the guest argument from `[ESP+8]` after saving ESI, computes 32-bit subtraction against `[ECX+4]`, zeroes EDX and performs unsigned `DIV [ECX+0x14]`, writes the old `[ECX+0x18]` through the guest address, stores quotient, increments `[ECX+0x0C]`, then `RET 4`. Preserve guest32 wrapping and original division faults; do not truncate native host pointers.

**New original-XBE memory finding:** the manager address `0x0040F0A8` lies in the virtual-only tail of the section starting at `0x003B5B00` (raw-backed size `0x00058D50`, virtual size `0x000F35E8`). The manager's runtime bytes are absent from raw XBE data. A guest-memory mapping and initialization contract is required.

For `0x0037FC73`, the original XAPI guest pointer table at `0x0037ECA4` contains `0x0037ED08` and `0x0037ED50`, with exclusive bound `0x0037ECAC`. This does not authorize ordering comparisons between separate native host extern objects.

## Quarantine

All 36 declaration edges remain `ABI_UNVERIFIED`: direct CALL/RET bytes do not recover hidden register producers, argument types, outputs, virtual dispatch, class layouts, native linkage or complete 1:1 behavior. The earlier draft arity inventory classified 16 matches and 20 nonmatches, neither being ABI evidence. `0x000C4BC0` indirect dispatch also remains unresolved.

No source repairs or new syntax passes are claimed in this evidence-only batch. README progress must come solely from a completed exact-tree C++17 audit. REA and XboxRecomp remain methodological references, not Brute Force instruction evidence.
