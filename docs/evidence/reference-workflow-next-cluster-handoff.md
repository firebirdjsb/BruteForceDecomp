# Reference-workflow continuation packet

Queue snapshot: complete audit [40343007142](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40343007142),
source commit `28fccabcdcb1edbc6f0e0ab0677f82903949135c`.
The validated artifact contains 13,694 unique functions: 13,443 pass and 251
fail; original body labels have no missing, unindexed or mismatched entries.
These are dated isolated-syntax counts, not runtime or byte-match progress.
Use current.json and a fresh artifact before continuing.

The previous reviewed batch at
[6850e31a](https://github.com/firebirdjsb/BruteForceDecomp/commit/6850e31a2246e751e7c7b4098ac08127ac642ae2)
repaired 0x001FEDB0, 0x002DD4A0 and 0x00354FF6. Its complete audit
40305179091 changed 13,416/278 to 13,420/274 with zero regressions:
three batch repairs plus upstream 0x0037EF88. Subsequent upstream work
accounts for the newer snapshot above; do not count it again as this batch.

## Deferred research; no source edits from these investigations

- **0x002EC6BB** (`src/main_unclassified/band_002e/0x002ec6bb.c`):
  local_14 combines floating representation, integer shifts and denormal
  handling. Three reported member failures are not a complete diagnostic
  inventory. Recover the x87 rounding and representation paths before editing.
  No instruction-level contract was completed in this investigation.
- **0x0028F610** (`src/main_unclassified/band_0028/0x0028f610.c`):
  original 1,243-byte body verified, SHA-256
  `8BD6776090A0D4EDDA252CDDC8E78355FC2D2A5B06AFC0164662BBF682462E47`.
  The local_d8 partial writes occur within a long bit-packing loop. Trace all
  reaching writes and full-word reads; unknown upper bytes cannot be cleared.
  See also the existing guest-stack/scalar audit. No corrected C contract yet.
- **0x002D6910** (`src/main_unclassified/band_002d/0x002d6910.c`):
  local_4c member errors coexist with RSQRTSS and float/pointer conversions.
  Recover lane provenance and the pointer/scalar lifetimes together. No
  instruction-level contract was completed in this investigation.
- **0x00232BE0** (`src/main_unclassified/band_0023/0x00232be0.c`):
  original body digest checked:
  `104CDE5AD565A5444DD515A4744D7BD78CE63290CAED96243DFC37262547C65C`.
  COMISS at 0x232bfb followed by JB at 0x232c02 also branches on unordered;
  a C ordered less-than alone is insufficient. The two RCPSS evaluation paths
  have different final multiplication order. Pin constant data, low-lane
  operation order and compare flags before attempting a rewrite. Preserve
  unresolved upper-register/ABI state rather than manufacturing it.

Original instruction observations above used whole-XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Full disassembly remains private. These are research packets, not completed
repairs or verified whole-function contracts. Resolve source paths through
`tools/source_layout.py`; inspect upstream changes before assigning ownership.
