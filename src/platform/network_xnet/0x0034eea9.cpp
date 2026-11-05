/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB240CDB44D0D2A240FA63E30B664AE4AA662F5590252FA76EACD2880C2D9F47
 * Entry: 0x0034eea9, Ghidra index: 13029, label: FUN_0034eea9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Operand-only repair: original 0034eebb C7 /0 stores the four-byte
 * guest value 0x0034c826, not a native function pointer. Guest mapping,
 * native object lifetime/aliasing/alignment and signed base arithmetic
 * remain ABI_UNVERIFIED. The existing direct call is unchanged. */
/* Source-matched declaration of FUN_0034c826; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_0034c826(int param_1);
void FUN_0034eea9(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_0034c826(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(uint32_t *)(param_1 + 0x10) = UINT32_C(0x0034c826);
    }
  }
  return;
}
