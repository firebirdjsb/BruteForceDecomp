/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45D66A24377AF5FFC9DF098B0150F9C6467E4A4413F6995C4B6FE38F277E836B
 * Entry: 0x000f0270, Ghidra index: 2997, label: FUN_000f0270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f0270(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    for (piVar6 = *(int **)(param_1 + 0x74);
        (piVar5 = (int *)0x0, piVar6 != *(int **)(param_1 + 0x78) &&
        (piVar5 = (int *)*piVar6, piVar5[9] != -0x191a1c53)); piVar6 = piVar6 + 1) {
    }
    piVar6 = (int *)0x0;
    if (piVar5 == (int *)0x0) goto LAB_000f02e9;
    iVar4 = (**(code **)(*piVar5 + 4))();
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    piVar5 = (int *)FUN_00100f90();
    piVar6 = (int *)0x0;
    if (piVar5 == (int *)0x0) goto LAB_000f02e9;
    iVar4 = (**(code **)(*piVar5 + 4))();
  }
  piVar6 = (int *)0x0;
  if (iVar4 == 7) {
    piVar6 = piVar5;
  }
LAB_000f02e9:
  if (((piVar6 != (int *)0x0) &&
      (iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x108))(), iVar4 != 0)) &&
     (cVar2 = FUN_001036d0(), cVar2 != '\0')) {
    bVar3 = FUN_000f2d50();
    bVar1 = *(byte *)(piVar6 + 10);
    if ((bVar1 >> 1 & 1) != bVar3) {
      *(byte *)(piVar6 + 10) = (bVar3 << 1 ^ bVar1) & 2 ^ bVar1;
      (**(code **)(*piVar6 + 0x24))();
    }
    FUN_00100f90();
    iVar4 = FUN_00101770();
    if (iVar4 != 0) {
      FUN_000ef180();
    }
    return 1;
  }
  return 0;
}
