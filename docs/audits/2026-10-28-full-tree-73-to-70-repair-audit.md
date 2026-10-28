# Full-tree C11 audit and evidence-gated repair batch — 2026-10-28

## Exact baseline and confirmed outcomes

The canonical branch is `main`. The input source/metadata baseline was
`a90939055b94e1dd4630e99e7ecff4c99d019715`, independently reflected
in the completed [13,694-function Clang audit run 40782884611](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40782884611)
and `docs/progress/current.json`: **13,621 passing / 73 failing**, 99.47%
isolated host-C11 syntax coverage. XBE-original-body hash labels were
complete (zero missing or mismatched), and the C source inventory had zero
digest drift.

Three discrete original-instruction-backed source fixes were made and
committed directly to `main`. Each changed one function and has
a separate focused source/Clang regression script and GitHub workflow.
All three full-tree audits completed **successfully**, with no new
compiler failures and zero missing/mismatched XBE-original body hash labels:

| Original entry | Source commit | Full Clang audit | Passing | Failing | Guest-stack first errors |
| --- | --- | --- | ---: | ---: | ---: |
| 0x00127290 | [`3079de2c`](https://github.com/firebirdjsb/BruteForceDecomp/commit/3079de2c212aefb3703f63573420f15f3d19a09a) | [40784091279](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40784091279) | 13,622 | 72 | 33 |
| 0x00027540 | [`6f16ddaa`](https://github.com/firebirdjsb/BruteForceDecomp/commit/6f16ddaa3202b4c59a49c5f36f39177fdd1a2b00) | [40784318121](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40784318121) | 13,623 | 71 | 33 |
| 0x002CA850 | [`d7bab830`](https://github.com/firebirdjsb/BruteForceDecomp/commit/d7bab830a0795d1acdb83834820014074f24d17a) | [40784524769](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40784524769) | **13,624** | **70** | **33** |

The last source audit reported **99.49% host C11 syntax coverage**,
with **13,624 / 13,694 passing** and **70 remaining**. Its original
full-inventory artifact is available from [run 40784524769](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40784524769)
(`full-c11-inventory`). This is not an Xbox execution result or a
claim of whole-function 1:1 behavioral parity.

## Original instruction evidence and scoped corrections

The private original game `default(2).xbe` SHA-256 was checked locally
as `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Private XBE contents were **not** uploaded into source control or public CI.

1. **0x00127290, original incoming guest-stack slot.** The original
   prologue allocates 0x58 bytes and saves four registers. Original
   `0x00127BE6 MOV [ESP+0x6C],ESI` writes the first incoming DWORD
   argument slot; `0x00127BFC LEA ECX,[ESP+0x6C]` then passes
   its address into `FUN_000FF730`. The C draft's undefined
   `&stack0x00000000` has been replaced by `&param_1`.
   That represents the address of the incoming C argument slot rather
   than the pointee. Host pointer width, guest stack ownership, ESI
   lifetime and callee mutation effects remain **ABI_UNVERIFIED**.
   The focused test `scripts/verify_00127290_incoming_stack_alias.py`
   and `verified-00127290-stack-slot.yml` passed.

2. **0x00027540, original SSE F32 scalar/vector storage.** Original
   RSQRTSS low-lane instructions at `0x000275F4` and `0x00027958`,
   and the `MOVSS/MOVHPS`, `MULPS`, `MOVSS/MOVHPS`
   three-float vector sequence around `0x00027659..0x0002766C`,
   identify scalar and three-lane `float` storage, not Ghidra's
   assignable 16-byte pseudo-vector member array. The C repair uses
   isolated SSE scalar intrinsics and bit-preserving `memcpy`
   for the original adjacent F32 guest words.
   The preceding implicit-register output of `FUN_00027490`,
   upper SSE state and x87 rounding remain **UNVERIFIED**.
   Focused test `scripts/verify_00027540_sse_float3.py` and
   `verified-00027540-sse-float3.yml` passed.

3. **0x002CA850, x87 transformed float3 and cross-product storage.**
   The original instructions store three-lane float vectors
   with `MOVSS/MOVHPS` and individual F32 x87 results with
   `FSTP m32fp`. Ghidra reused pointer-typed local variables
   for four float results before those pointer fields later
   served traversal logic. Four disjoint F32 locals now represent
   the observed transform/cross values; subsequent pointer use
   is preserved and its ABI is explicitly unverified.
   Focused test `scripts/verify_002ca850_x87_float_lifetimes.py`
   and `verified-002ca850-f32-lifetimes.yml` passed.

## Inventory integrity and current failure queue

The last source-only audit at commit `d7bab830` reported **three C-source
digest mismatches**, one for each modified C file, because
`metadata/bulk_13694_inventory.csv` still held old generated source
SHA-256 values. **This was a metadata-drift issue**, not original XBE body
hash drift. The inventory was subsequently updated in
[`c2131a14`](https://github.com/firebirdjsb/BruteForceDecomp/commit/c2131a1485d3ad16de82bef2f04e060a7b91f4a9)
with the three actual source SHA-256 digests, and each changed status
from `FAIL` to `HOST_CLANG_OK`. The `origin`,
`abi`, `behavior` and original XBE body-hash fields remain unchanged.
A new full-tree CI audit was triggered by the metadata update. Its
completion is the final gate for claiming zero remaining digest drift;
the source-only 70-failure audit predates that metadata commit.

The **70 remaining first compiler errors** from run 40784524769 are
classified as follows:

| First-error category | Remaining |
| --- | ---: |
| Unresolved guest-stack reference | 33 |
| Invalid float/pointer storage or conversion | 18 |
| Invalid SIMD/structure member | 10 |
| Invalid SIMD array assignment | 3 |
| Unresolved RAM pseudo-label | 3 |
| Unresolved pseudo-register symbol | 3 |
| **Total** | **70** |

All categories represent the **first** compiler failure in each
function; additional errors can appear as repairs expose later lines.
The highest-priority next candidates require establishing guest ESP
and original pointer/register/indirect-callee output contracts, not
host-only stubs. Previous evidence notes already defer dynamic stack
probe and unverified register-producer transformations; those deferrals
have **not** been overridden.

## Verification boundary

No private binaries, complete original disassembly, copyrighted game
assets, credentials, or alternate source branches were committed.
This pass did not attempt game execution, Windows/Android/Linux runtime
linkage, complete Xbox API replacement, or function-by-function
instruction equivalence. Full original x87 control/status behavior,
implicit register inputs, guest 32-bit addresses and indirect-call
lifetimes still require independent tests before asserting 1:1.

The actual measured metric is **host Clang isolated C11 syntax**,
not 99.49% overall project completion. Future overall progress must
not credit the other six roadmap phases without independent evidence.
