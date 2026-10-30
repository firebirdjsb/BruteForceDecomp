/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0511D3390ACF89A47A6AD6181EED140AA4C385A5778B16815C8544E632837BC4
 * Entry: 0x002171d0, Ghidra index: 7462, label: FUN_002171d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002171d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint local_8;
  undefined1 local_4 [4];
  
  local_8 = 0;
  for (iVar2 = *(int *)(param_1 + 8); iVar2 != *(int *)(param_1 + 0xc); iVar2 = iVar2 + 0x14) {
    local_8 = local_8 + *(int *)(iVar2 + 0x10);
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  if (uVar7 < local_8) {
    do {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar3 = *(int *)(param_1 + 8);
      iVar8 = 0;
      iVar6 = iVar2;
      if (iVar3 != iVar2) {
        piVar9 = (int *)(iVar3 + 0x10);
        do {
          if (iVar8 < *piVar9) {
            iVar6 = iVar3;
            iVar8 = *piVar9;
          }
          iVar3 = iVar3 + 0x14;
          piVar9 = piVar9 + 5;
        } while (iVar3 != iVar2);
      }
      if (iVar6 != iVar2) {
        if (uVar7 < local_8) {
          do {
            if (*(int *)(iVar6 + 0x10) == 0) goto LAB_0021733d;
            local_8 = local_8 - 1;
            iVar2 = 0;
            if (*(int **)(iVar6 + 0xc) != (int *)0x0) {
              iVar2 = **(int **)(iVar6 + 0xc);
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 != 0) {
              puVar1 = *(undefined4 **)(iVar2 + 0x14);
              if (puVar1 == (undefined4 *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = *puVar1;
              }
              FUN_001298b0(local_4,uVar5,puVar1);
              puVar1 = *(undefined4 **)(iVar2 + 0x14);
              if (puVar1 == (undefined4 *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = *puVar1;
              }
              FUN_001298b0(local_4,uVar5,puVar1);
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 0x14));
            }
            piVar9 = *(int **)(iVar6 + 0xc);
            if (piVar9 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)*piVar9;
            }
            if (piVar4 != piVar9) {
              *(int *)piVar4[1] = *piVar4;
              *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(piVar4);
            }
          } while (*(uint *)(param_1 + 0x24) < local_8);
        }
        if (*(int *)(iVar6 + 0x10) == 0) {
LAB_0021733d:
          FUN_00218d90(local_4,iVar6 + 0x14,*(undefined4 *)(param_1 + 0xc),iVar6,param_1);
          FUN_00218e40(*(undefined4 *)(param_1 + 0xc),param_1 + 4,param_1);
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0x14;
        }
      }
      uVar7 = *(uint *)(param_1 + 0x24);
    } while (uVar7 < local_8);
  }
  return;
}
