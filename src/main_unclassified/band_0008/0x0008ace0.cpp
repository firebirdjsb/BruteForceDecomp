/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 668033EC1BE0B8FA2D541F0BCD659C3F227EBEA72A5221C02D7756EB378521EB
 * Entry: 0x0008ace0, Ghidra index: 1668, label: FUN_0008ace0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0008ace0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar1 + 4) != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar1 + 8);
    }
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar3 != 0) {
      iVar7 = 0;
      uVar8 = 1;
      do {
        uVar2 = *(uint *)(iVar1 + 4);
        uVar4 = 0;
        if (uVar2 == 0) {
LAB_0008ad4d:
          if ((*(byte *)(iVar3 + 0x70) & 1) != 0) {
            uVar5 = FUN_0008ada0(param_1,iVar3);
            return uVar5;
          }
        }
        else {
          if (uVar2 != 0) goto LAB_0008ad21;
          iVar6 = 0;
          while (*(int *)(iVar6 + 4) != iVar3) {
            uVar4 = uVar4 + 1;
            if (uVar2 <= uVar4) goto LAB_0008ad4d;
LAB_0008ad21:
            iVar6 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          if (uVar4 == 0xffffffff) goto LAB_0008ad4d;
          if (uVar4 < uVar2) {
            iVar6 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
          }
          else {
            iVar6 = 0;
          }
          if (*(int *)(iVar6 + 0x14) == 0) goto LAB_0008ad4d;
        }
        if (*(uint *)(iVar1 + 4) <= uVar8) {
          return 0;
        }
        iVar7 = iVar7 + 4;
        if (uVar8 < *(uint *)(iVar1 + 4)) {
          iVar3 = *(int *)(iVar7 + *(int *)(iVar1 + 8));
        }
        else {
          iVar3 = 0;
        }
        iVar3 = *(int *)(iVar3 + 4);
        uVar8 = uVar8 + 1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}
