/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9456E38E46EDD37FE7C29E71BF2C5B7F6AD7C00705592FAEDB075B5CC5168361
 * Entry: 0x002da060, Ghidra index: 10263, label: FUN_002da060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da060(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  int local_4;
  
  iVar1 = param_2;
  if (unaff_EBX != 0) {
    if (*(int *)(param_3 + -4 + unaff_EBX * 4) == unaff_EBX + -1) {
      iVar4 = 0;
      if (0 < unaff_EBX) {
        do {
          puVar3 = (undefined4 *)
                   (*(int *)(iVar1 + 0xc) + *(int *)(param_3 + iVar4 * 4) * *(int *)(iVar1 + 8) * 4)
          ;
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * iVar4 * 4);
          if (-1 < *(int *)(param_1 + 8) + -1) {
            param_2 = *(int *)(param_1 + 8) + 3U >> 2;
            do {
              *puVar2 = *puVar3;
              puVar2[1] = puVar3[1];
              puVar2[2] = puVar3[2];
              puVar2[3] = puVar3[3];
              puVar2 = puVar2 + 4;
              puVar3 = puVar3 + 4;
              param_2 = param_2 - 1;
            } while (param_2 != 0);
          }
          *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0x10) + *(int *)(param_3 + iVar4 * 4) * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < unaff_EBX);
        return;
      }
    }
    else {
      local_4 = 0;
      if (0 < unaff_EBX) {
        do {
          iVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * local_4 * 4;
          iVar7 = 0;
          iVar4 = *(int *)(param_2 + 0xc) +
                  *(int *)(param_3 + local_4 * 4) * *(int *)(param_2 + 8) * 4;
          if (3 < unaff_EBX) {
            piVar5 = (int *)(param_3 + 0xc);
            puVar3 = (undefined4 *)(iVar1 + 4);
            iVar6 = 3;
            do {
              puVar3[-1] = *(undefined4 *)(iVar4 + piVar5[-3] * 4);
              *puVar3 = *(undefined4 *)(iVar4 + *(int *)((int)puVar3 + (param_3 - iVar1)) * 4);
              puVar3[1] = *(undefined4 *)(iVar4 + piVar5[-1] * 4);
              puVar3[2] = *(undefined4 *)(iVar4 + *piVar5 * 4);
              iVar6 = iVar6 + 4;
              iVar7 = iVar7 + 4;
              puVar3 = puVar3 + 4;
              piVar5 = piVar5 + 4;
            } while (iVar6 < unaff_EBX);
          }
          if (iVar7 < unaff_EBX) {
            puVar3 = (undefined4 *)(iVar1 + iVar7 * 4);
            iVar7 = unaff_EBX - iVar7;
            do {
              *puVar3 = *(undefined4 *)(iVar4 + *(int *)((int)puVar3 + (param_3 - iVar1)) * 4);
              puVar3 = puVar3 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(undefined4 *)(*(int *)(param_1 + 0x10) + local_4 * 4) =
               *(undefined4 *)(*(int *)(param_2 + 0x10) + *(int *)(param_3 + local_4 * 4) * 4);
          local_4 = local_4 + 1;
        } while (local_4 < unaff_EBX);
      }
    }
  }
  return;
}
