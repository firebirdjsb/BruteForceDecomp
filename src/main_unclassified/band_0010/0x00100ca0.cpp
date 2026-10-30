/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 436245CAD0D922A1979BFB54071DC42A0A75820EFA313AD7C393B31AB42AC0E8
 * Entry: 0x00100ca0, Ghidra index: 3223, label: FUN_00100ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469b58;
void FUN_00100ca0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_001001d0();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x40))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_00469940 + 8))();
      piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar2 + 0x4c))();
    }
  }
  iVar3 = FUN_00100210();
  if (iVar3 != 0) {
    cVar1 = (**(code **)(*DAT_00469940 + 0x60))();
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar3 + 0x74) = 0;
      FUN_00103250();
      return;
    }
  }
  return;
}
