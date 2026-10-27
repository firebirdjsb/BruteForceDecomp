# 0x00219110: x87 retained values and SIMD vector storage

Status: bounded C11 storage/arithmetic draft repair. The entry ABI, complete
floating-point environment, Xbox runtime behavior and byte match remain
unverified. The original identity header remains unchanged.

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The contiguous original body `00219110..002192de` is 463 bytes with SHA-256
`14EAC87692CE198065B6786A8E1429A62C344BD13E2BF08D6DABAAB6386B51C5`.
Whole-file and body hashes were freshly verified from the private original.
The path was resolved with `tools/source_layout.py`. No third-party game
semantics, original binary or complete decompiler dump is included.

## Observed instruction contract

One input pointer comes from the stack at 219113; incoming ECX and EDX are
output addresses, and RET at 2192de does not clean the input argument. The
original entry keeps unresolved pseudo-registers and an ABI_UNVERIFIED note.
`bf_219110_vectors` is an internal storage operation with explicit host inputs,
not a newly asserted original entry calling convention. No caller, shared
declaration, metadata or runtime dispatcher was changed.

| Instructions | Retained facts |
| --- | --- |
| 219117..219137 | Load Z,Y,X; compute `(X*X + Y*Y) + Z*Z` in x87, FSQRT, then one m32 spill |
| 21913b..219160 | RCPSS of that m32 length; broadcast; MULPS with memory MOVSS/MOVHPS lanes `[X,+0,Y,Z]`; store lanes 0,2,3 to local m32 values |
| 219174..2191a5 | FABS/FCOMP/TEST AH,41/JP selects zero/one for greater or unordered; one/zero for ordered less or equal |
| 2191ad..2191df | First cross Z and Y each spill to m32 locally |
| 2191e3..219203 | Calculate X with interleaved external stores: EDX+4, EDX+8, EDX+0; FST retains unrounded X |
| 219205..219223 | Reload stored Z,Y; norm is `(extended X*X + stored Y*stored Y) + stored Z*stored Z`; final m32 spill |
| 219225..21924a | RSQRTSS; reload and scale each destination component; each FST stores m32 while retaining the extended product |
| 21924d..219291 | Second cross uses those three retained extended products; external store order ECX+8, ECX+4, ECX+0; retain unrounded second X |
| 219293..2192b1 | Again combine unrounded X squared with reloaded m32 Y/Z squares, then spill the sum to m32 |
| 2192b3..2192d8 | RSQRTSS then separate m32 reload/multiply/store for each ECX output component |

Constants were read from the pinned original: 3a5080=`3f7c1bda`
(`0x1.f837b4p-1f`), 3a4f78=`3f800000` (one), and 3a4f88=`00000000`
(positive zero). Zero products are retained rather than algebraically removed.
The TEST/JP decision includes unordered, unlike an ordinary greater-than test.
Memory-source MOVSS clears the otherwise unused lane; there is no guessed
inherited high lane in this packed multiply.

The draft does not reload first normalized components for the second cross:
doing so would discard values kept on the original x87 stack by FST. It also
does not replace either norm's retained X with its already-rounded memory
copy. The internal operation stages original spill points and visible store
order so coincident/overlapping input and output buffers retain the observed
data dependencies. Full instruction fault/trap ordering is not established.

## Verification and boundaries

- Focused Clang C11 syntax passes for i686-pc-windows-msvc and
  x86_64-pc-windows-msvc using the repository sweep flags and include path.
- `tests/test_00219110_vectors.c` includes the actual file-local operation.
  `tests/x86_219110_reference.S` executes the original arithmetic instruction
  sequence with host pointer registers, local stack placement and constant
  addressing adapted. Windows x64 and SysV argument mapping are provided;
  only Windows x64 execution was checked in this work.
- Native comparisons pass at both O0 and O2: 20,060 finite-input cases per
  build, covering axis vectors, both signs, values around the basis threshold,
  selected small/large magnitudes, 20,000 deterministic random vectors, and
  five disjoint/identical/partially overlapping input-output configurations.
  Whole backing buffers are compared, not only the final three components.
- The oracle saves/restores x87 control and runs with masked extended/RNE
  (`037f`); the harness saves/restores MXCSR and uses `1f80` (no FTZ/DAZ).
  The tests compare result bytes, not floating-point exception/status flags.

Repeat with `python scripts/verify_00219110_vectors.py` (Clang on PATH).
The runner compiles the exact source prefix before the uniquely identified
original entry, rather than compiling or linking its unresolved register
wrapper. It tests the actual file-local operation at O0/O2; no entry stub or
replacement callee is provided. SysV builds link the math library. The full
entry is separately syntax-checked by the mandatory inventory sweep.

Two mutations of the actual helper are rejected: prematurely rounding the
three FST-retained components back from memory, and substituting division for
RCPSS. An independent reviewer checked the original instructions and source,
then reran 20,060 cases at each optimization and both negative controls.
The full-audit workflow includes this repeatable check and its path triggers.

Host long double (binary64 under this Windows configuration) and sqrtl are
not an x87 emulator. Passing this finite corpus does not prove all rounding,
precision-control, NaN payload, infinity, zero-vector or subnormal cases.
The original Pentium-class RCPSS/RSQRTSS approximations and guest MXCSR may
differ from this host. Compiler scheduling, traps, x87/XMM exit state and the
actual register entry contract remain unverified. FP contraction is disabled,
but no complete floating-point environment model is claimed.

Only this source, this evidence note and the two targeted test files changed.
No game installation, production data or deployment was touched. Rollback is
restoration/removal of those source artifacts; no installed runtime requires
rollback.
