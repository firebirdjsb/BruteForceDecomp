/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D762D4B09DF06F8D6D65CCF00F5431C964E3B91BE46D079066551B7215544A7
 * Entry: 0x003455a6, Ghidra index: 12811, label: FUN_003455a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Operand-only repair: original 003455b7 C7 /0 stores the four-byte
 * guest value 0x0034c826, not a native function pointer. Guest mapping,
 * native object lifetime/aliasing/alignment and signed base arithmetic
 * remain ABI_UNVERIFIED. The existing direct call is unchanged. */
/* Source-matched declaration of FUN_0034c826; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_0034c826(int param_1);
void FUN_003455a6(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0034c826(param_1);
  }
  else {
    *(uint32_t *)(param_1 + 0x10) = UINT32_C(0x0034c826);
  }
  return;
}
