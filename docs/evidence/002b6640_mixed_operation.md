# 0x002b6640 bounded native mixed x87/SSE operation

This is a bounded native operation, not original-console execution, guest ABI
recovery, a byte-identical rebuild, or an unrestricted C++ arithmetic rewrite.
The original header, `void(float*,float*,float*)` interface, entry `0x002b6640`,
103-byte/30-instruction body identity and source preimage remain pinned.
Original body SHA-256:
`F6340C78D440C62731EA5178275001795009B2411379533260958D483F53376F`.
Original XBE identity remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The private original record is optional read-only replay evidence, never a
public dependency or executable test. No original game bytes execute.

## Native contract

GNU/Clang x86-64 Linux SysV, IEEE binary32, native x87/SSE, no fast math.
B/C each designate three initialized stable readable float-aligned live
floats; O designates three writable float-aligned live floats. O's old contents
need not be initialized. Exact 12-byte spans and valid whole-float overlap are
admitted. All external input reads precede both external output writes.
External objects cannot alias compiler-private scratch or the active call frame.
Every raw binary32 input representation is in scope, including signed zero,
subnormal, infinity, QNaN and SNaN. The finite exponent bound is a proof about
reachable finite paths, not a restriction excluding special inputs.

All exceptions are masked and no x87 exception is pending. ES/B are clear;
historical SF is allowed only with IE. Every valid PC24/53/64 and RC is admitted.
MXCSR RC/DAZ/FTZ are independently selected within the host capability mask,
with arbitrary initial sticky flags. Physical TOP-1/TOP-2 are empty; the other
six entries may have any occupancy. Existing CW, TOP, occupancy, full tag
classifications and live 80-bit values survive. New masked flags accumulate.

Final C1 is constrained architecturally only for inexact non-overflow FSTP32
where the checked instruction text pins it. Exact and overflow-substitute C1
remain conservatively unpinned; host observations are not portable promises.
C0/C2/C3 remain undefined. Equal-significand/opposite-sign NaN ties promise a
quiet NaN class, not fabricated deterministic payload/sign bits. On those
cases SSE is checked conditionally on the actual permitted scratch QNaN.

Excluded: guest32 mapping, original argument slots, stack cleanup and guest
GPR/EFLAGS/XMM ABI, FIP/FDP/FOP values, inactive-register payload/padding, memory
fault/MMIO/concurrency behavior, unmasked/pending traps and original Pentium-III
parity. Native callee-saved GPRs and caller FP restoration are tested separately.

## Exact graph and independent arithmetic

The scalar order is FLD32 Bz; FMUL32 Cz; FLD32 By; FMUL32 Cy; FADDP; FLD32 Bx;
FMUL32 Cx; FADDP; FCHS; FSTP32 to genuine private scratch. Each arithmetic stage
rounds under PC/RC before the final distinct binary32 narrowing store. FLD's
SNaN quieting precedes its memory multiply. PC24/53 retain binary80's exponent
range. Finite products are multiples of 2^-298 with magnitude below 2^256;
rounded products/sums retain that grid and remain below 2^258. Therefore finite
arithmetic intermediates cannot overflow/underflow binary80. Final narrowing
can independently raise OE/UE/PE.

The SSE vectors are `[x,+0,y,z]`. All four packed lanes and the exact
MULPS/ADDPS destination/source order execute, including the unstored lane's
exceptions. FCHS occurs before narrowing, including for NaNs and signed zero.

The accepted x87 integer and Fraction models were derived independently by
separate authors, then compared at frozen hashes. One uses dyadic coefficients
and integer quotient/remainder rounding; the other uses exact Fraction values
and independently derived precision grids. Neither calls native FP as its
numerical oracle. Their sources are copied unchanged:

- Integer: `895ca1f749a917b637b4f3c116affcf0b241ddc054c8f618c4940b83f1dd6278`.
- Fraction: `c7be1257607f0d27f3f01a3bae3695676593edbf08754d23b5b1f9528db48453`.

The public suite reuses the already-reviewed canonical integer/Fraction SSE
primitives, pinned rather than duplicated. The primary full-graph adapter is
one author using two independent arithmetic foundations. A separate reviewer
adapter transcribes the scalar stack flow and packed continuation independently
and adds fresh cases and hard-coded anchors; it still reuses those accepted
primitives, not newly independent arithmetic implementations.

## Provenance and review lineage

The standalone helper/full-wrapper package was accepted functionally at source
manifest `21799365f459f494faa3f07e79920be2150ac68b8c9b9239399eb221cb7a1c65`.
Its independent full review report hash is
`e03a7a90d9abc8fdbdad54322e022fa93b44c2a1614197cefc067932e0376605`.
The helper, full wrapper, main native harness, scalar models and independent
scalar assembly/native probe are retained byte-for-byte. Installed Python
routing/runner/output logic is new and requires its own installed-layout review;
standalone acceptance is not assumed to approve those adaptations.

Reviewer numerical/control/mutation authorship is preserved in file comments
and metadata. The state probe reuses a verbatim pre-main slice of the author's
harness, generated in the temporary build directory and hash-checked. It is
explicitly not an independently authored capture. The separate scalar-stage
reviewer bridge is independently authored and checks both temporary stack
values, full tags and every old occupied register after all ten stages.

`tests/fixtures/002b6640_before.cpp.txt` is the exact original source, not a
synthesized approximation. The public gate reconstructs it byte-for-byte from
the installed wrapper by replacing its body and removing only the added helper
include/comment. Header interfaces and historical inventories are hash-pinned
and are not rewritten by this package.

## Public tests

Run `python3 tools/test_cpp_002b6640_mixed_operation.py --compiler clang++
--compiler g++ --sanitizers` with Python 3, GNU objdump and those public C++
toolchains. Compiler options may be repeated for additional versions. The
runner preserves compiler protections and adds an explicit protected variant.
It uses normal TMPDIR or an explicitly selected build directory; it has no
executor-local paths. Generated fixtures, binaries and logs stay outside source
paths. `--program-record FILE` optionally replays the exact private full record
as non-executable data; omitting it leaves the public suite fully functional.

The suite retains the validated numerical/state coverage and adds installed
path/dependency/reversal gates:

- 1,064,832 native comparisons and 884,736 seed roundtrips per main build,
  covering all 192 independent control modes, all 64×64 sticky seeds, all TOPs
  and six-old-slot occupancy patterns, full tags/live80, overlap and restoration.
- 1,536 exact-12-byte protected-page cases per main build, read-only inputs,
  every side combination and page sentinels. Widened load/store controls must
  specifically fault at the page boundary.
- 178,368 primary full-model cases per build, plus 27,648 reviewer-composed
  cases and 12 literal numerical anchors. Undefined fields remain marked.
- 49,152 reviewer old80/control cases, including pseudo-denormal, unnormal and
  pseudo-infinity encodings left untouched, all TOPs/occupancies, IC and CC seeds.
- 17,544 independent scalar-stage reviewer cases, including 120 independently
  derived literal boundary anchors and 175,440 full-stack/status observations.
- Exact codegen counts/order/widths, two temporary entries, net-zero depth,
  immediate capture and caller restoration. Protected failure/ASan allocation
  calls outside the atomic FP block are identified, not called absent.
- Twelve native mutation classes, nine codegen mutation classes, separate
  hidden-lane IE-only/C1-only/FCHS-order controls, eight compiler-interface
  mutations, source/provenance corruptions and unsupported/fast-math rejection.

GCC ASan/UBSan and enabled fake-stack paths are supported. LeakSanitizer is
explicitly disabled because the validating managed executor could not run its
ptrace-dependent leak check; that check is not claimed passed. Sanitizers do
not instrument inline-assembly accesses, so page guards remain mandatory.
The original eleven Clang19/21/GCC14/GCC15 builds were validated separately.
Matching the official GCC15 compiler package did not reproduce the full CI OS.

## Architectural references

Intel SDM Vol.1 Table 4-7, §§4.9.2, 8.1.5.2 and 8.5:
https://cdrdv2-public.intel.com/843827/253665-sdm-vol-1-dec-24.pdf

Intel SDM revision 089, FLD/FMUL/FADD/FCHS/FSTP instruction entries, including
FSTP printed p3-379:
https://cdrdv2-public.intel.com/868137/325462-089-sdm-vol-1-2abcd-3abcd-4.pdf

AMD APM Vol.1 revision 3.24, §6.3.3.6/Table 6-7 note 4 (NaN tie result undefined)
and §6.3.5 (extended exponent range):
https://docs.amd.com/v/u/en-US/24592_3.24
Official indexed text was checked; direct PDF retrieval returned 404 during
foundation review. That retrieval limit and unresolved C1 portability remain
explicit. No agreement here proves original-console execution.
