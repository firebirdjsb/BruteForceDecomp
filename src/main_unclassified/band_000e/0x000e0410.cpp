/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98FFBA0C58F7A588BD6A44772B1840B52C47AD2596210632B956EFBA5E3D8F67
 * Entry: 0x000e0410, Ghidra index: 2744, label: FUN_000e0410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000e0410(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 auStack_1c [5];
  int iStack_8;
  byte bStack_4;
  
  if (*(int **)(param_1 + 0xc4c) != (int *)0x0) {
    iVar4 = **(int **)(param_1 + 0xc4c);
    if ((*(byte *)(param_1 + 0xc50) & 1) == 0) {
      (**(code **)(iVar4 + 4))(param_2);
      cVar1 = (**(code **)(**(int **)(param_1 + 0xc4c) + 8))();
      iVar4 = DAT_00469b58;
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) | 1;
        piVar2 = (int *)(**(code **)(**(int **)(iVar4 + 8) + 0x78))();
        (**(code **)(*piVar2 + 0x1c))();
        FUN_00069780(0x3f000000);
        *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) | 0x10;
        return;
      }
    }
    else {
      cVar1 = (**(code **)(iVar4 + 0x18))();
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) & 0xfc;
        return;
      }
      cVar1 = FUN_00087d70();
      if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0xc50) & 2) == 0)) {
        (**(code **)(**(int **)(param_1 + 0xc4c) + 0x1c))();
        puVar3 = auStack_1c;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        auStack_1c[0] = *(undefined4 *)(*(int *)(param_1 + 0xc4c) + 0xc);
        auStack_1c[1] = 0;
        iStack_8 = param_1;
        auStack_1c[3] = *(undefined4 *)(*(int *)(param_1 + 0xc4c) + 0x10);
        bStack_4 = bStack_4 | 8;
        puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)*puVar3)(auStack_1c);
        *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) | 2;
      }
    }
  }
  return;
}
