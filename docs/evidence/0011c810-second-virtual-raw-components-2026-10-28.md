# `0x0011C810`: second virtual call, object component DWORDs and output-word lifetimes

**Status:** scoped guest-memory/source-link integration, **not** a fully repaired
original Xbox C function or instruction/ABI-equivalent implementation. The original
13,694 function sources, original x86 hash labels, and metadata are unchanged.

## Provenance and safe assumptions

Original XBE SHA-256 expected:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The 0x0011C810 caller has original body digest
`A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255`;
actual 0x0001D0C0 helper
`799425F204B00DB36DEC83019E43890E71D10113DC10721CBA8E72EFE0CAA969A4`;
actual 0x0012B2A0 helper
`C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E`.
Prior authenticated instruction evidence is in
[`0011c810-deferred-register-output.md`](0011c810-deferred-register-output.md)
and [`0011c810-virtual-method-source-handoff-2026-10-28.md`](0011c810-virtual-method-source-handoff-2026-10-28.md).
The private original XBE is **not available in the present CI runner**;
new target instructions have not been freshly authenticated. An optional
`--xbe` run checks the original full-file and these function body hashes.

Let S be guest ESP after original `SUB ESP,0x88; PUSH ESI`, and A the
original explicit caller parameter. The first virtual call through
`[DWORD [A+0x1B4]+0x30]` receives S+0x28 and provides EAX to
`0x0001D0C0`. Previous commits already connect returned guest EAX, the
36-byte matrix producer/copy and real C source of `0x0001D0C0`.

The second call through the **same virtual slot**, with a **different**
guest argument S+0x1C, must also complete before the caller proceeds. The
caller then follows the object pointer at guest `[A+0x6C]` and references
three binary32 component DWORDs at object offsets `+0x1C`, `+0x28` and
`+0x34`. The original caller's vector passed to `0x0012B2A0` occupies
S+0x28..S+0x33 (ECX), while its matrix is S+0x38..S+0x5B (EDX).
`0x0012B2A0` writes three output floats at guest S+0x0C, S+0x10, S+0x14,
including overwriting earlier scratch lifetimes. Later branches consume
specifically `[S+0x0C]` and `[S+0x14]`, **not** the address of Ghidra's
`puVar1` local and not the earlier object `+0x34` scratch word.

**Unresolved and important:** the existing published original evidence does
not assign each of the three object component offsets to an exact ordered
vector stack lane. Ghidra's mixed local variables make reconstructing that
permutation from the emitted C draft alone unsafe. Even the negations need
the original instruction opcode and any x87 precision/exception behavior
checked. This pass therefore **does not invent the lane map**.

## New bounded implementation

`include/bf_0011c810_second_vector.h` contains:

1. `bf_0011c810_read_components()` — reads guest `[A+0x6C]`, then
   the three offset-ordered raw DWORDs into a C value structure through the
   existing guest I/O callbacks. It does not cast guest addresses to host
   pointers or change any floating-point bit patterns. Guest u32 start
   addresses wrap modulo 2^32. Callback failure order describes this
   projection, not the original x86 faulting EIP or Xbox SEH.
2. `bf_0011c810_second_virtual_to_dot()` — dispatches the real second
   virtual-call request through the established virtual executor contract,
   fetches those raw components, and **requires an independently verified
   vector staging callback** to produce the three guest words at S+0x28.
   If no stager is provided, it refuses to produce a fake vector. When
   staged, it invokes the previously linked **real C source**
   `FUN_0012B2A0` via `bf_0011c810_dot_output()` and reads the two
   later scalar output words as exact binary32 DWORD patterns at S+0x0C
   and S+0x14. The method callback must supply actual guest EAX/ESP and
   side effects; this layer does not fabricate them.

The integration returns distinct stages for failure at the virtual dispatch,
raw guest component reads, unresolved vector staging, the source-linked dot
helper or either output-slot read. A failed stage does not silently continue.
Neither the original virtual target nor the actual vector lane map is resolved.

## Regression and integration tests

`python3 scripts/verify_0011c810_second_vector.py --root .` checks strict
Clang i686/x86-64 Windows C11 syntax and host executable O0/O2 runs. It
links project source functions `src/.../0x0001d0c0.c` and
`src/.../0x0012b2a0.c` together with the existing guest callback bridge;
there are **no replacement stubs** for either source function.

**4,119 test cases, 176,478 assertions per optimization build** cover
4,096 finite-input synthetic-method paths, two original guest call arguments,
object pointer and component reads, both producer/consumer original source
implementations, output lifetime overwrite, the two later scalar words,
all 16 modeled callback fault sites, rejected virtual execution, erroneous
ESP restoration, a missing vector-stager, address wrapping, and bitwise
raw signed-zero/NaN preservation. The two explicit synthetic lane maps are
*fixtures* illustrating why a guessed map must not be encoded in the bridge.
Locally tested under AddressSanitizer/UndefinedBehaviorSanitizer O1 as well.

The checks do **not** assert equivalence for actual original Xbox virtual
methods, dynamic vtables, exact original vector mapping, x87 80-bit
intermediates, MXCSR/NaNs, page faults, 1:1 instruction sequence, original
function branching, or native PC game linkage. Syntax count consequently
remains **84 failing drafts** until an independently verified source repair.

## Next verification gate

Authenticate the supplied `default.xbe`, identify live dynamic vtable
entries for the receiver at A+0x1B4 and the actual target at +0x30.
Disassemble the original stores of the three negated component values into
S+0x28, +0x2C and +0x30 to establish the exact permutation, then resolve
the virtual return/cleanup effects and the later 0x0011C810 branch/control
flow. Only then replace the original C draft's invalid pointer/float casts
with proven scalar storage and rerun the exact-commit full C11 audit.
