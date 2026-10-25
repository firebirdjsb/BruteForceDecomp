# Large-word repair pass (2026-10-25)

Source authority: the original `default.xbe`, SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The matching function body hashes and instruction streams were checked in the
local export against that image. This is C draft evidence, not a byte-identical
rebuild or runtime validation.

## `0x00223f00`

Original body SHA-256: `B7823C192AC1F8078AF10D9E878D195DB38D9ED02A1D9C78CC17CFE3114CEDA0`.
The `mov al,1` / `xor al,al` branches write only byte zero of the incoming
stack word. The draft preserves the full word with `bf_x86_word_store_byte` and
uses `bf_x86_word_load_byte` where needed; it leaves the original full-word
helper-call argument expressions intact. Tree node `+0x0c` is loaded with x87
`fld` and compared as a single precision float, so its 32-bit word is
interpreted with the existing `bf_x86_word_to_f32` bit-copy helper.
The TEST AH,5 / JP branches select the right/found paths for unordered
comparisons; ordinary <= comparisons would lose that behavior. Read each
comparison operand once in original order. Full x87 exception behavior remains open.
The `ret 8`, output writes through ESI (`[esi]`, `[esi+4]`), helper register
inputs (ECX/ EAX), and helper prototypes remain ABI-unverified. In particular,
the source-level helper calls are not proof of matching those register inputs.

## `0x002b6100` and `0x002b6240`

Body SHA-256 values: `87E2EFFB6DF1992C6D974F857D6C231010E5D8E40026E0CD3E11F32B516627F6`
and `39F0C92758428773FFFF08C68CC155970CA8835341130B20756393ED56F1ACE7`.
Both streams explicitly load float lanes with `movss`/`movhps`, broadcast X/Y/Z
using `shufps`, then perform ordered `mulps`, `addps`, `mulps`, `addps`. The
drafts use the corresponding SSE intrinsics and store lane zero with `movss`
semantics and lanes two and three with `movhps` semantics, matching the compact
three-float scratch layout. They no longer cast `undefined8` integer words to
float. Function `6100`
transposes the three input columns into zero-padded rows before transforming.
Function `6240` reads three records at byte offsets `0x00`, `0x10`, `0x20`;
its first parameter remains an explicit 32-bit guest address. Both write the
compact lane values to output records at stride 16 only after all rows have
been transformed, retaining the observed scratch-before-output timing. The fourth matrix lanes,
floating-point exception state, calling conventions, and runtime behavior are
not asserted beyond the observed instruction operations and stores.

## Validation state

The function-body hashes above were verified before edits against the pinned
image. C source hashes naturally changed. Targeted C11 syntax checks passed for
all three files with Clang targeting i686 and x86_64 Windows, using the sweep
diagnostic flags. The SSE intrinsics preserve the observed packed instruction
order in the draft, but this is not an execution comparison against the XBE and
does not establish Xbox runtime behavior, ABI correctness, or byte-identical
output.

Independent review approved the limited operand corrections after rejecting
scalarized SIMD, a lost partial-word high part, and incorrect unordered branches.
Focused checks use the existing repository sweep diagnostic policy; they are
not strict warning-free standalone builds. The SSE intrinsics are target-specific
C11, not a portable emulator. Original x87 FLD/FSTP transfers around matrix
scratch/output may quiet signaling NaNs or raise exceptions; those effects
are not modeled by ordinary host float copies and remain unresolved, as do
original floating-point control/status settings. No full-function Level D claim.
