/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09EB3B25803164A3F69658C69C3E152CC926687717AB7DE00426AC5F1F1A1540
 * Entry: 0x0011c6a0, Ghidra index: 3620, label: FUN_0011c6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011c6a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char in_AL;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int unaff_retaddr;
  int local_28;
  int aiStack_24 [9];
  
  aiStack_24[1] = 0;
  aiStack_24[2] = 0;
  aiStack_24[3] = 0;
  aiStack_24[4] = 0;
  aiStack_24[5] = 0;
  aiStack_24[6] = 0;
  aiStack_24[7] = 0;
  aiStack_24[8] = 0;
  if ((in_AL != '\0') && (*(int *)(param_1 + 0x59c) != 0)) {
    FUN_0005c550();
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0xbec) + 0xc))(param_1);
  if ((iVar3 != 0) && (unaff_EBX == 0)) {
    aiStack_24[0] = iVar3;
    unaff_EBX = 1;
  }
  local_28 = 0;
  iVar3 = param_1;
  if (0 < unaff_EBX) {
    do {
      if ((aiStack_24[local_28] != 0) && (iVar1 = *(int *)(aiStack_24[local_28] + 0x10), iVar1 != 0)
         ) {
        iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0xbe4);
        puVar4 = *(undefined4 **)(iVar3 + 0x1348);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)*puVar4;
        }
        for (; puVar4 != *(undefined4 **)(iVar3 + 0x1348); puVar4 = (undefined4 *)*puVar4) {
          iVar2 = puVar4[2];
          if (*(int *)(iVar2 + 0xe0) == iVar1) {
            if (iVar2 != 0) {
              iVar3 = FUN_000ad650();
              if ((iVar3 != 0) || (iVar3 = FUN_000ad5f0(), iVar3 != 0)) {
                FUN_000ad790(param_1 + 0x120);
              }
              if ((iVar1 == unaff_retaddr) && (0 < param_2)) {
                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xf0) + 0x98) + 0x94) = 0x3e99999a;
              }
            }
            break;
          }
        }
      }
      local_28 = local_28 + 1;
      iVar3 = unaff_retaddr;
    } while (local_28 < unaff_EBX);
  }
  return;
}
