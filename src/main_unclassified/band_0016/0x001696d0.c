/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B37FB2A8A785E23F20BAB1E66015AD7BDD55D0703CFE25C7AA40AC014202DCDF
 * Entry: 0x001696d0, Ghidra index: 4752, label: FUN_001696d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
uint FUN_001696d0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puStack_84;
  int aiStack_7c [31];
  
  iVar8 = *(int *)(in_EAX + 4);
  if ((((iVar8 != *(int *)(in_ECX + 4)) || ((*(byte *)(iVar8 + 0x7d8) & 3) == 0)) ||
      (iVar3 = (**(code **)(**(int **)(*(int *)(iVar8 + 8) + 0xbec) + 0xc))(iVar8), iVar3 == 0)) ||
     ((*(int *)(iVar3 + 0x24) == 0 || ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) == 0)))) {
    return 0;
  }
  uVar10 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x28))();
  if ((iVar3 == 0) && (iVar3 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x28))(), iVar3 == 0)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x4f8);
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    FUN_00169d30(uVar4,puVar1,param_1);
    if (puStack_84 != puVar1) {
      iVar3 = puStack_84[2];
      if (*(undefined4 **)(iVar8 + 0x4f8) == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(undefined4 **)(iVar8 + 0x4f8);
      }
      puVar5 = (undefined4 *)FUN_00169d30(uVar4,puVar1,param_1);
      if ((undefined4 *)*puVar5 != puVar1) {
        piVar7 = *(int **)(iVar3 + 0xc);
        if (piVar7 == (int *)0x0) {
          piVar7 = &DAT_0046d064;
        }
        piVar6 = *(int **)(((undefined4 *)*puVar5)[2] + 0xc);
        if (piVar6 == (int *)0x0) {
          piVar6 = &DAT_0046d064;
        }
        aiStack_7c[0] = 0x1a3bb0b0;
        aiStack_7c[1] = 0xead6d58e;
        aiStack_7c[2] = 0x57841d8;
        aiStack_7c[3] = 0;
        aiStack_7c[4] = 0;
        aiStack_7c[5] = 0x1ba73ab3;
        aiStack_7c[6] = 0xf1de18be;
        aiStack_7c[7] = 0xfb0fa10;
        aiStack_7c[8] = 0;
        aiStack_7c[9] = 0;
        aiStack_7c[10] = 0x44f3505;
        aiStack_7c[0xb] = 0x1d1b6ac1;
        aiStack_7c[0xc] = 0x1765b430;
        aiStack_7c[0xd] = 0xf5ec631b;
        aiStack_7c[0xe] = 0;
        aiStack_7c[0xf] = 0xe878ecd;
        aiStack_7c[0x10] = 0xf8aee8f8;
        aiStack_7c[0x11] = 0x1dad0ff8;
        aiStack_7c[0x12] = 0xf32e5b7a;
        aiStack_7c[0x13] = 0;
        aiStack_7c[0x14] = 0x111795ae;
        aiStack_7c[0x15] = 0x4d2c4c8;
        aiStack_7c[0x16] = 0xe2708aba;
        aiStack_7c[0x17] = 0;
        aiStack_7c[0x18] = 0;
        aiStack_7c[0x19] = 0x108b1fad;
        aiStack_7c[0x1a] = 0x1fda09f8;
        aiStack_7c[0x1b] = 0xe8b83172;
        aiStack_7c[0x1c] = 0;
        aiStack_7c[0x1d] = 0;
        bVar2 = true;
        iVar8 = 0;
        piVar9 = aiStack_7c;
        do {
          if (0x1d < iVar8) break;
          if (*piVar7 == *piVar9) {
            uVar10 = 0x1000000;
            iVar3 = 1;
            if (bVar2) {
              do {
                if (4 < iVar3) break;
                if (*piVar6 == aiStack_7c[iVar8 + iVar3]) {
                  uVar10 = 0;
                  bVar2 = false;
                }
                iVar3 = iVar3 + 1;
              } while (bVar2);
            }
          }
          else if ((*piVar6 == *piVar9) && (uVar10 = 0x1000000, bVar2)) {
            iVar3 = 1;
            do {
              if (4 < iVar3) break;
              if (*piVar7 == aiStack_7c[iVar8 + iVar3]) {
                uVar10 = 0;
                bVar2 = false;
              }
              iVar3 = iVar3 + 1;
            } while (bVar2);
          }
          piVar9 = piVar9 + 5;
          iVar8 = iVar8 + 5;
        } while (bVar2);
      }
    }
  }
  return uVar10 >> 0x18;
}
