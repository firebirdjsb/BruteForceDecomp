# Five fixed-byte copy spelling repairs

## Change and scope

Five canonical C++ drafts replace one assignment apiece. Each old assignment
converts valid native source/destination pointers through `int` before accessing
one byte. The replacement uses `reinterpret_cast<unsigned char *>` and the same
constant byte displacement. `undefined1` is checked to be `unsigned char`.
The source remains otherwise byte-for-byte unchanged. In particular, none of the
implicit pseudo-register declarations or function signatures is repaired.

This is a syntax spelling repair within bounded, initialized native objects.
It is not a recovered guest ABI or a guest-memory translation scheme. The tests
do not establish 32-bit wrapping/provenance, mappings, faults, caller-visible
register/flag state, stack cleanup, linkage, Xbox execution, a byte-identical
rebuild, or full game behavior.

Original XBE identity remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Selected records were replayed from the private indexed original-build export.
No whole-XBE reauthentication was performed. Original machine-code bytes were
read as evidence and never executed. Canonical drafts were syntax-checked only.

## Complete original bodies

- `0x001dce30`: 29 bytes, 11 instructions, ending `0x001dce4c`.
  SHA-256 `81E3007DC2DD605D775490A91CC1CDBB8514603981BCD317A80C7506E0447E56`.
  Null EAX skips to `RET 4`. Otherwise ECX-to-EAX transfers are
  `(offset,width) = (0,4), (4,4), (8,1), (9,1)` in that order.
  The changed byte is at +9. The final source read overwrites CL and no later
  source read uses ECX.
- `0x001dd130`: 35 bytes, 13 instructions, ending `0x001dd152`.
  SHA-256 `DE783F6B1281CE10FA5214057B49F63F73908198409BEF87816C18653B6C7D9C`.
  Null EAX skips to `RET 4`. Transfers are
  `(0,4), (4,4), (8,4), (12,1), (13,1)`. The changed byte is at +13.
  The final source read overwrites CL; no later source read uses ECX.
- `0x001dcde0`: 47 bytes, 17 instructions, ending `0x001dce0e`.
  SHA-256 `A9972CA7C77EB8E5EE2BC9029FB6B2AA336297561F75E5135AC1296961E6AB8D`.
  Null EAX skips to `RET 4`. Transfers are
  `(0,4), (4,4), (8,4), (12,1), (13,1), (16,4), (20,4)`.
  The changed byte is +13. Bytes +14 and +15 remain untouched. Only the final
  +20 DWORD read overwrites ECX; all earlier reads use the original source base.
- `0x001d05d0`: 53 bytes, 21 instructions, ending `0x001d0604`.
  SHA-256 `4F390729F4C3FD94009BBBAA00DFC41D8C27D3518B813E13C7B895466A7CD27F`.
  Empty destination range skips to ESI restore and `RET`. Each iteration copies
  `(0,4), (4,4), (8,4), (12,1), (13,1)` from fixed ECX, then advances the
  destination by 16 bytes. Bytes +14 and +15 remain untouched. Source never advances.
- `0x001e07e0`: 50 bytes, 20 instructions, ending `0x001e0811`.
  SHA-256 `8ABD734FE093C8B6E9F616366AF827B0A60D324F0C8EC0CCC330C1173276F239`.
  Empty source range skips to ESI restore and `RET`. Each iteration copies
  `(0,4), (4,4), (8,1), (9,1)` and advances both source and destination by 12
  bytes. Bytes +10 and +11 remain untouched.

All complete recorded bodies are contiguous and hash-match the public source
identities and validation inventory. Every body byte is covered. Every original
instruction boundary is pinned. No instruction length, fallthrough, or flow
override is present. There are no calls, tail calls, or unexamined CALL_RETURN
continuations. Raw-byte branch destinations land on instructions in the pinned
body. The public runner independently re-encodes the entire supported operation
schedule, including guards, strides, register choices and return cleanup, and
compares it with the original byte pins. This evidence does not authenticate
unrecorded callers or convert the draft's unresolved register inputs into an ABI.

The copies are sequential load/store pairs, not memcpy/memmove operations.
Aliasing can change subsequent reads, including a fixed source aliased with a
previous destination. Each source statement stays in its original order.

## Reproducible checks

`python3 tools/test_cpp_fixed_byte_copies.py` runs the public gate. It requires
Clang C++17 and a native host compiler. Add `--sanitize` for GCC ASan/UBSan.
Use `--private-export <export-directory>` for optional selected-record replay;
private exports are not checked into the repository or required by CI.

The manifest is SHA-256 pinned by the runner, as is the host fixture. Original
source preimages retain their Git blob IDs and SHA-256 hashes. Replacement source
hashes and one-statement reversal checks prevent widening the change. Immutable
full-body pins live separately in the runner, rather than being supplied by the
manifest. The previous two-loop manifest and gate remain unchanged.

Results before integration:

- All five original complete drafts fail strict host Clang C++17 syntax at O0
  and O2 with exactly the two expected narrowing-pointer diagnostics.
- All five replacements pass strict syntax at O0 and O2.
- 101,683 initialized native-object cases pass at Clang O0, Clang O2, and GCC O2
  with AddressSanitizer/UndefinedBehaviorSanitizer (leak detection disabled).
- Cases cover all aligned base pairs from 0 through 256, loop counts 0 through 7,
  equal/forward/backward/partial aliases, all 256 values of the changed source
  byte, bounded seeded random cases, complete-buffer comparisons, untouched
  padding, null guarded destinations with null/non-null sources, an empty fill
  with null source, and an empty moving copy with null destination.
- 24 executable mutants fail with explicit model mismatch: changed offsets,
  transfer ordering, width expansion, direction, destination strides, improper
  fixed-source advancement, and source displacement.
- Static negatives reject signedness, byte width and null-guard drift, identity,
  operation schedule/stride/offset drift, missing body bytes, and branch drift.
- Optional private replay passes complete recorded-byte hashes, instruction
  windows, coverage, count, lengths, and override checks.

Only source-derived test captures with explicitly initialized pseudo-register
inputs execute. They are not proposed production signatures. Native objects are
4-byte aligned and all valid tested ranges terminate within real allocations.
Original guest arithmetic outside those ranges remains unresolved.
