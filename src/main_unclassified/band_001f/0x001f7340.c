/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 281076180E1FF433AB812A54D668381C3DF5E80E1B25D418C30A924097164F37
 * Entry: 0x001f7340, Ghidra index: 7045, label: FUN_001f7340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f7340(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  iVar2 = (*(int **)(param_1 + 0x20))[1] * **(int **)(param_1 + 0x20);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      FUN_001f7430(*(int *)(param_1 + 0x18) + iVar4);
      iVar4 = iVar4 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x4c);
  iVar4 = 0;
  if (iVar2 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(*(int *)(param_1 + 0x20) + 0x50) - iVar2 >> 2;
  }
  if (0 < local_4) {
    do {
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(in_EAX + 0x28) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(in_EAX + 0x28);
      }
      do {
        if (puVar3 == *(undefined4 **)(in_EAX + 0x28)) goto LAB_001f7415;
        iVar2 = puVar3[2];
        puVar3 = (undefined4 *)*puVar3;
      } while ((iVar2 == 0) ||
              (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x4c) + iVar4 * 4) !=
               *(int *)(iVar2 + 4)));
      if (iVar2 != 0) {
        iVar1 = *(int *)(in_EAX + 0x204);
        puVar3 = (undefined4 *)FUN_000d0aa0(*(undefined2 *)(iVar2 + 0x20));
        puVar3[1] = 0;
        *puVar3 = *(undefined4 *)(iVar1 + 0x2c);
        if (*(int *)(iVar1 + 0x2c) != 0) {
          *(undefined4 **)(*(int *)(iVar1 + 0x2c) + 4) = puVar3;
        }
        *(undefined4 **)(iVar1 + 0x2c) = puVar3;
        if (*(int *)(iVar1 + 0x30) == 0) {
          *(undefined4 **)(iVar1 + 0x30) = puVar3;
        }
        *(byte *)(iVar2 + 0x26) = *(byte *)(iVar2 + 0x26) | 4;
      }
LAB_001f7415:
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_4);
  }
  return;
}
