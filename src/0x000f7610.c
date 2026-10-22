/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99457A9DBCFB756054DEE35AE724E6E213811719B49782E1EC73B6611262AB2A
 * Entry: 0x000f7610, Ghidra index: 3101, label: FUN_000f7610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f7610(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x90))();
  if ((((*piVar1 != DAT_0046d064) && (*piVar1 != *(int *)(unaff_ESI + 0x24))) &&
      (piVar1 = (int *)FUN_00100f90(), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 4))(), iVar2 == 6)) {
    FUN_000ffe10(unaff_ESI);
    FUN_00109660();
  }
  return;
}
