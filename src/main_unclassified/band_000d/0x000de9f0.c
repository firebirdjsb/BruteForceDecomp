/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE1143E52DFAEE21839DEDCEA42105BDB2228DD76EAB2DB9D63DEFFBB44063A1
 * Entry: 0x000de9f0, Ghidra index: 2720, label: FUN_000de9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000de9f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  
  piVar1 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc28) != (undefined4 *)0x0) {
    piVar1 = (int *)**(undefined4 **)(param_1 + 0xc28);
  }
  if (piVar1 != *(int **)(param_1 + 0xc28)) {
    do {
      if ((((int *)piVar1[2])[1] == 2) &&
         (iVar2 = (**(code **)(*(int *)piVar1[2] + 0x18))(), iVar2 != 0)) {
        for (uVar3 = 0;
            (*(int *)(iVar2 + 8) != 0 &&
            (uVar3 < (uint)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 3))); uVar3 = uVar3 + 1)
        {
          if (*(int *)(*(int *)(iVar2 + 8) + uVar3 * 8) == unaff_EBX) {
            iVar2 = *(int *)(*(int *)(iVar2 + 8) + 4 + uVar3 * 8);
            goto LAB_000dea4e;
          }
        }
        iVar2 = -1;
LAB_000dea4e:
        if (param_2 == iVar2) {
          return piVar1[2];
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc28));
  }
  return 0;
}
