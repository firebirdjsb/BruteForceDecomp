# Signed32 scalar SSE conversion foundation

This is a reusable test foundation, not a reconstructed game function. No game
source, headers used by game drafts, original executable bytes, private exports,
corpus blobs, compiler downloads, binaries, or logs are installed.

## Run the public gate

Run `python3 tools/test_cpp_scalar_sse_conversions.py` on Linux x86-64. Dependencies
are Python 3.9+, a GNU/Clang C++17 compiler, and GNU objdump. The runner uses CXX,
then clang++, then g++, or explicit repeated `--compiler` selections. `--sanitize`
also runs the quick corpus with ASan+UBSan. Recovery is disabled, UBSan halts
on error, and sanitizer stderr is rejected; leak detection is disabled. The
compiler target is explicitly forced to x86-64 with -m64. There are
no downloads or private inputs. All build/mutation products go to an automatically
removed temporary directory. Unsupported platforms or absent tools fail clearly,
rather than being reported as passing skips. Python optimized mode is rejected.

The default runner performs both O0 and O2 full native tests, static codegen
controls, independent rational cross-checks, and compiled semantic negatives.
It pins every installed model, test/helper, and derivation through metadata.
The runner and metadata themselves require ordinary code review; hash consistency
is not an authenticity or correctness proof.

## Models and independence

The C++ header uses uint32_t sign/exponent/significand arithmetic, shift bounds,
and discarded-bit tests. The Python oracle was authored without seeing that
implementation and uses exact Fraction values, rational rounding, and exact
represented-value comparisons. Neither uses floating casts. Their separately
written derivations and primary-source citations are retained in
[integer derivation](scalar_sse_conversion_integer_model.md) and
[rational derivation](scalar_sse_conversion_rational_model.md).

Both APIs operate on raw DWORDs and return result, operation-raised status, and
full post-operation MXCSR. All exception masks must be set. All four RC choices,
DAZ/FTZ settings, and 64 sticky seeds are admitted. The C++ precondition is
contractual; the Python API validates it. Neither conversion raises DE.
CVTTSS2SI gives zero+PE for nonzero subnormals without DAZ and exact zero with
DAZ. Invalid cases return 0x80000000+IE; exact -2^31 has the same DWORD without IE.
CVTSI2SS rounds signed32 according to RC, with PE only. FTZ does not affect either.

## Checked evidence and precise coverage

The unchanged core sources originate in standalone foundation v1, archive
SHA-256 `393b704d8b99c70f31e17db6af0029a0521b96755132cd0a1dfea09fc444d04c`.
That package passed Clang19/21 and GCC14 at O0/O2, 94,027,104 comparisons per build.
The default installed gate retains that complete corpus per compiler/optimization:

- 2,048 caller-MXCSR restoration checks.
- 909,664 boundary/mode/sticky checks and 3,200,000 deterministic random checks.
- 83,886,080 float-to-int checks exhausting every fraction and both signs for
  exponent fields 0,157,158,255 with DAZ off, plus exponent 0 with DAZ on.
- 6,029,312 int-to-float checks exhausting low16 for 23 selected high16 words
  under every RC mode. This is not every int32 input.

Each native check observes result, full MXCSR, caller-MXCSR restoration, and
instruction upper-lane behavior. Seeded upper lanes include NaN/subnormal-shaped
bits. An FXSAVE comparison also checks the observed x87 state remains unchanged.
No universal x87-state exhaustion or whole-wrapper XMM preservation is claimed.
The exact asm region has one legacy conversion with explicit 32-bit GPR operands;
codegen rejects conversion widening, extra arithmetic, or changed capture/restore.

The runner also retains 505,088 Fraction/native/integer comparisons, 82,000
rational edge/property/API/CLI tests, 25 compiled semantic mutants, and 57 static
codegen mutants per build. Sanitized quick runs retain 4,111,712 native checks.
The rational invariants reuse that oracle's decoder and are not a third model.
Mutation failures must be real counterexamples after successful compilation.
A further compiled status-tuple mutant changes raised to only zero-to-one flag
transitions. Its hardware result/after still agree when PE was already sticky,
but the mandatory Fraction tuple comparison rejects its wrong operation-raised
set. This distinction is not observable from post-operation MXCSR alone.

## Limits

Native evidence was obtained on modern AMD EPYC cloud hardware, not original
Xbox/Pentium III or Intel hardware. DAZ was introduced after the original SSE
processor generation and its availability is checked through MXCSR_MASK. Do not
project modern DAZ support onto an older CPU. The metadata records historical
results, not a promise that arbitrary toolchain/CPU combinations have been tested.
Inline assembly is not sanitizer-instrumented. Its fixed extents, codegen and
lane checks supply separate evidence. Unmasked traps, faults, memory-operand
fault ordering, guest32 mapping, guest ABI/register preservation and whole-game
behavior are outside this contract. Test totals include repeated operands and
are not exhaustive over both full 32-bit domains times 1,024 MXCSR states.

The downstream 00233020 candidate remains held: seven original global spans lack
a native binding. This foundation neither fixes that dependency nor implements
its ordered arithmetic, aliasing or original register contracts. No syntax-pass
increment, game-function acceptance, integration or byte-identical claim follows.
