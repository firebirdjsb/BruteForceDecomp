# 0x00049CF0: senior helper-contract escalation

Status: investigation plan, not a source repair or complete interface. The
caller remains unchanged. Read with `00049cf0-reused-stack-deferred.md`.

The pinned XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The coordinator independently rechecked these exported ordered-body hashes:

| Helper | Original ordered-body SHA-256 | Observed direct sites / caller functions |
| --- | --- | --- |
| `0x001611D0` | `C5D8B914C4F07CF2E568E5E538EA662184FB8F4DF3BED268964463746C03AE84` | 76 / 51 |
| `0x0004ADE0` | `D5D60D9B7C3F7A67CDCB5FEFBEDB001E186652C252D1B4C221CE247C081FDBD1` | 2 / 1 |
| `0x0004AEF0` | `F10B15A1B36A6DBBD7B0C00F0AD1ECD219C970D583B69BC712060049B609A7FD` | 2 / 1 |

Caller counts come from the senior agent's decoded direct CALLs inside all
exported body ranges. They exclude indirect calls and instructions outside
those ranges. Both smaller helpers' direct calls are solely in `0x49CF0`.
These counts do not justify changing the shared entry's other 50 callers.

## Recovered inputs and output paths

- `0x1611D0` receives EAX=destination descriptor and EDX=source-word address.
  Descriptor +4/+8/+12 describe its storage; stride is four. It does not
  initialize descriptor +0. The fast insertion path reads **the word at EDX**,
  not EDX itself, through `0x3EFA0`; growth uses `0x17CA40 -> 0xA7D80`.
  Growth updates descriptor bounds at `0xA7F01/07/0A` and overwrites a saved
  ECX slot with the resulting element address. ECX's result is path-dependent.
  The caller's zeroed descriptor requires growth, so a fast-only model fails.
- `0x4ADE0` receives ECX=descriptor and EDX=requested count. Its stride is
  sixteen and count is compared unsigned with `0x0FFFFFFF`. Allocation uses
  `count << 4`; relocation uses `0x28E350 -> 0x4B7B0 -> 0x1E0DD0`. Writes
  at `0x4AEB2/BA/BD` update capacity/end/begin. For this caller's descriptor
  address, these are the actual `local_4/local_8/local_c` memory outputs.
- `0x4AEF0` receives EAX=destination descriptor and ECX=source descriptor.
  `0x28E4A0 -> 0x1E0DD0` creates a nested copy of the source's four-byte
  elements while preserving descriptor +0. This is not a sixteen-byte memcpy.
  Growth via `0x4AFA0 -> 0x4B310` also writes the saved ECX result slot.

These are observed register/storage contracts, not new original C prototypes.
Their downstream implementations, allocation/failure paths and SEH inputs
still require reconstruction before any caller output can be claimed correct.

## Exported-range and return-boundary hazard

The exported `0x4ADE0` ranges omit six bytes after its call at `0x4AEA2`:
`0x4AEA7: 83c40c` (ADD ESP,12), `0x4AEAA: 8b5de8` (MOV EBX,[EBP-24]).
The coordinator independently checked these exact bytes in the pinned image.
They precede the descriptor updates and restore the allocated base. Their
reachability depends on the unresolved return contract below; do not inherit
the draft's non-return truncation or silently treat it as proved.

`0x2EA018 -> 0x67BF0 -> JMP [0x3BC654]` still needs target, cleanup and
return/failure verification. Allocation at `0x2EA01D` forwards `[size,1]`
to `0x67CD0`. Similar exported-range gaps occur in growth helpers. Preserve
the existing ordered-body hashes; record additional authenticated ranges
separately rather than silently changing provenance or inventory totals.

## Next bounded implementation boundary

Resolve allocation/deallocation dispatch first. Then reconstruct insertion,
nested-copy and growth dependencies with explicit, evidence-derived 32-bit
inputs/results and the same backing storage as the caller. Keep descriptor
+0 untouched. Audit cleanup/EH paths, source aliasing and saved-register
result slots. Bind only the six caller sites initially; preserve the shared
legacy entry until its other callers have their own migration review.

Differential checks must cover empty/available/growth cases, nested-copy
independence, source aliasing, allocation failure/unwind and untouched +0.
No such runtime check or source adapter was implemented in this escalation.
No source signatures, helpers, game files, production data or deployment were
changed. The recovered contracts explain the missing output dataflow; they
do not remove the caller's remaining loop, cleanup or x87/SSE uncertainties.
