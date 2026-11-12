# Two timestamp callers: exact declaration and local output storage

Base: `7124071d8f91eace5b5a98c662a0f920ca6e5198`.

This change has two separate results:

1. The exact existing declaration of `XAPILIB__QueryPerformanceCounter` makes
   `0x002e3f20` and `0x002e3f50` pass strict host C++17 parsing.
2. Replacing the two unrelated local DWORD objects with one uninitialized
   `undefined4 local_8[2]` provides live, aligned, contiguous storage for the
   callee's two output writes. The argument addresses element zero; the caller
   reads element zero as low DWORD and element one as high DWORD.

A declaration-only projection also parses but retains the storage defect.
A storage-only projection still fails on the missing declaration. Neither result
binds incoming ECX, recovers a game object, or makes these callers safe to execute
as native C++. The uninitialized `int in_ECX`, all object-address expressions,
external writes, branch behavior and return statements are unchanged and remain
unresolved. Optimized host object emission is not a behavior test: the unresolved
hidden input can cause the host compiler to discard or otherwise transform code.

## Original instruction evidence

The original XBE identity remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The selected complete original bodies match the canonical inventory and original
source body labels:

- `0x002e3f20`: 47 bytes / 17 instructions,
  `59688785C900233367A0C420F5D82824142759E07EE05F04D78E75A86324AE9A`.
- `0x002e3f50`: 50 bytes / 19 instructions,
  `8A4E0BD07C646CBC8B6722B0C9DDC41382AB28998371CD141705E273DD04AD46`.
- Existing callee `0x002f2986`: 17 bytes / 7 instructions,
  `70BA83B459AA83150DC6FB7078B292C4A53D35AA6B26B690DEB64971B7AE4374`.

Both callers reserve eight bytes using `SUB ESP,8`, then save ESI. The address
computed by `LEA EAX,[ESP+4]` therefore denotes the beginning of the eight-byte
local region. `PUSH EAX` passes that address. The callee loads its pointer from
`[ESP+4]`, executes RDTSC, writes EAX to `[ECX]` and EDX to `[ECX+4]`, returns
one, and uses `RET 4` to remove the pointer argument. The caller then reads
`[ESP+4]` / `[ESP+8]`, and stores those words at `[ESI+0x10]` / `[ESI+0x14]`.
Neither caller uses the returned success value.

Exact windows:

- `0x002e3f20`: LEA `0x002e3f2e`, PUSH `0x002e3f32`, E8 call `0x002e3f33`,
  reads `0x002e3f38` / `0x002e3f3c`, stores `0x002e3f40` / `0x002e3f43`.
- `0x002e3f50`: conditional LEA `0x002e3f65`, PUSH `0x002e3f69`, E8 call
  `0x002e3f6a`, reads `0x002e3f6f` / `0x002e3f73`, stores
  `0x002e3f77` / `0x002e3f7a`. JZ at `0x002e3f63` skips the entire call/read/
  store sequence. No scratch read is added to the skipped path.

ESI originated in ECX, but this does not establish a native object mapping,
hidden-input binding, or C++ calling convention. The source's existing ordering
outside the permitted local replacements is preserved, not independently repaired.
No zero initializer, return-value check, new parameter or address cast is added.

The small committed instruction windows are independently decoded as inert
32-bit data. Optional private checks authenticate the complete selected records,
their validation rows, byte coverage and absence of analyzed-flow overrides.
Stored full-XBE identity metadata and body consistency do not reauthenticate the
complete original XBE. No full export or original executable is distributed.

## Declaration and edit boundaries

Existing definition and added declarations have exactly the same spelling:
`undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1)`.
The callee and its bounded native timestamp helper are unchanged. Their existing
limitations, including absence of Xbox clock, CPU ordering and ABI equivalence,
remain in force. No additional overload, convention, inferred object type or
caller prototype is introduced.

The manifest records five exact edits per caller, raw preimage/postimage SHA-256,
preimage Git blob identity, and a separate declaration-only digest. The gate
reverses only those edits and requires byte-for-byte equality to the committed
raw preimage. Original headers and all labels stay intact. Dependency pins cover
the callee, headers and existing source/audit helpers. The current syntax checker
is neither edited nor bypassed. The CI addition is a separate step; existing
steps remain unchanged.

## Public verification

Run:

```sh
python3 tools/test_cpp_timestamp_caller_storage.py --sanitizers
```

Repeat `--compiler` for multiple Clang versions. `--sanitizer-compiler` selects a
compiler with installed sanitizer runtimes and defaults to g++. Optional
`--private-export` supplies a local data directory; it is unnecessary for the
public gate. The sanitizer runner uses `ASAN_OPTIONS=detect_leaks=0`, changes no
host setting, and does not use ptrace.

The gate checks:

- Exact source/manifest/dependency bytes, raw reversal, inventory/body labels,
  no scratch initialization, unchanged hidden input and object expressions.
- All 114 original bytes / 43 instructions, complete hashes, instruction
  boundaries and independent x86 static decoding, with one-byte mutation controls.
- O0/O2 strict C++17 syntax and object compilation for combined and
  declaration-only projections. Baseline, storage-only and wrong-pointer
  declarations fail as expected. Same-translation-unit probes reject a changed
  return type against the unchanged callee definition.
- Source corruption controls for array extent, starting element, low/high reads,
  initialization, hidden input, object address, external write, branch, status,
  line endings and added bytes.
- A separately authored deterministic storage fixture, never either canonical
  caller. It checks 4,194 boundary/pseudorandom cases, two-word lifetime, both
  sentinels, low/high correspondence, and call/read versus skipped-call/no-read
  paths. A fixture-only written-word mask rejects partial or missing output
  before any unwritten word is read. This is not a claim of MemorySanitizer
  coverage and does not add a mask or guard to production callers.
- Negative fixtures for wrong reads, missing output, sentinel corruption,
  inactive-path writes and one-element storage. Positive and negative authored
  fixtures run at O0/O2; ASan/UBSan coverage applies only to these fixtures.

Local validation used Clang 19.1.7 and 21.1.8 for the full syntax/object and normal
authored-fixture matrix, and g++ 14.2.0 for ASan/UBSan. The isolated Clang packages
lacked sanitizer runtime archives; no Clang sanitizer result is claimed. The
two-Clang run with optional private evidence passed 287 negative controls and
260 compile/run commands. The public-only Clang 21 plus g++ sanitizer run passed
231 negative controls and 164 compile/run commands. The
unchanged existing timestamp-leaf gate also passed both compilers' twelve
optimization/ISA/CET configurations and its 58 negative controls per compiler.

This records two bounded syntax passes plus a local-storage representation
correction. It is not a new aggregate syntax percentage, original caller runtime
test, Xbox object/ABI recovery, native timestamp equality test, or byte-matched
game rebuild.
