/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F64257F56E2803CAD1672A9CBBEFF17D1A418D8C5B8BD48DD61CD7024ED289C7
 * Entry: 0x0026b6a0, Ghidra index: 8763, label: FUN_0026b6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0026b6a0(float *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0026b210();
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    fVar2 = (float10)FUN_002899f0();
    *param_1 = (float)fVar2;
  }
  return;
}
