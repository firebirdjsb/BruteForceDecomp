/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39CB75DD963EB34F6FE5D04D7BD5D451EB8171E829C7DEC2831E1D7CC345691A
 * Entry: 0x000f7670, Ghidra index: 3102, label: FUN_000f7670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f7670(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x90))();
  if ((*piVar1 != DAT_0046d064) && (*piVar1 != *(int *)(unaff_EBX + 0x24))) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar1 == 0x17506391) {
      piVar2 = (int *)FUN_00100f90();
      piVar1 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 == 6)) {
        piVar1 = piVar2;
      }
    }
    else {
      FUN_00100f90();
      piVar1 = (int *)FUN_001016d0();
    }
    if (piVar1 != (int *)0x0) {
      FUN_000ffe10(unaff_EBX);
      FUN_00109660();
    }
  }
  return;
}
