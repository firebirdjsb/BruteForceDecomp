# Exact-rational logarithm foundation checkpoint

This is a verification foundation, not a game-function repair. All canonical
C++ sources and original identities remain unchanged from source audit
`f3f82d48ae499bf0418a3a7c5006638afff36015`: **4,058/13,694 pass**, 9,636 fail.
The exact-source audit verifier passes after installation. No syntax gain,
FYL2X hardware accuracy/PE guarantee, guest ABI or original-CPU equivalence is
claimed. In particular, the AMD one-ulp statement inspected so far does not
explicitly establish an all-rounding-mode error bound.

The independently derived model encloses ideal `4096*log2(x)` with rational
arithmetic, accepts only explicitly supplied additive error assumptions, and
separately models signed32 conversion conditional on captured binary80 bits.
Invalid conversion precision remains undefined; valid -2^31 is distinguished
from integer-indefinite. No native logarithm or game instructions are executed.
The proof's uniform 32-term width bound does not establish unique rounding for
every possible binary32 input.

Standalone review report SHA-256:
`6d92b209ed20060cd4d0fab7f9b3d09c39fc73ace076fa9aad0ee16467d931d7`.
Independent evidence includes 392 exponential-oracle endpoint checks, 9,624
integer-power rounding certifications, all 26 threshold pairs, 9,272 binary80
conversion checks, 56 literal decisions, 1,740 boundary intervals, 148 malformed
inputs and 17 rejected adversarial mutations. Authored outputs regenerate
exactly; the mathematical source was accepted unchanged.

Installed patch SHA-256:
`a565f2e93ce23f7edd3689f952924b09ace5673eaebc8c1f01f5b902ea9d0a95`.
Installed review report SHA-256:
`c13690acfb4c5c33e84d3399d8ef02b26f67404901c49d3057c981e247d728b6`.
Review verified eight additions, preservation of all 15,223 existing paths,
exact reversal/reapplication, immutable support hashes, isolated execution and
external-only outputs. Twelve malformed manifests and 24 additional corrupted
artifacts reject before parsing/execution. The independent mathematical suite
also passed against installed copies.

Canonical integration matches all eight reviewed file hashes. The separately
added CI step runs the twelve gate tests and full public verifier; existing
source/tools/metadata/tests triggers already cover dependencies, and the evidence
document has its own trigger. This implements the proposal in the original
foundation document without changing its frozen authored files or prior gates.
Integrated execution passed twelve gate tests, thirteen authored mathematical
tests, 19 source-corruption controls, seven output-corruption controls and exact
vector regeneration. C++ policy, source provenance and tracked-file safety pass.

Broad discovery now runs 451 tests: the twelve additions pass and all fourteen
previous failing subchecks, one prior error and 33 skips remain unchanged. This
is not an all-green broad suite. No whole-game build or original CPU test ran.

Predecessor main `f670b4821c1db335a685201295a96404dd8657d8` completed hosted
Actions run `42039244556` successfully. Its progress update `11f67512` is
preserved. New-publication CI remains a separate pending gate.
