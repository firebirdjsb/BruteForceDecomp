/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A423FE9FABFBBD181D96A21E9CCA9D95EB9FA798E851FE85B1BDFCA813683329
 * Entry: 0x001793e0, Ghidra index: 4985, label: FUN_001793e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
int FUN_001793e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_78;
  int local_74;
  int *local_70;
  undefined1 local_6c [108];
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  local_78 = 0;
  piVar3 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar1;
  }
  local_70 = *(int **)(*(int *)(param_1 + 0x20) + 4);
  uVar4 = DAT_00469984;
  if (piVar3 != local_70) {
    do {
      if (((*(byte *)((int)piVar3 + 0x85) & 1) == 0) || ((char)piVar3[7] == '\0')) {
LAB_00179453:
        local_74 = piVar3[3];
        iVar2 = FUN_0017beb0(&local_74);
        if (iVar2 != 0) {
          FUN_00179c00();
          FUN_0017c0b0(uVar4);
          (**(code **)(*DAT_00469940 + 0x18))(iVar2 + 4,local_6c);
          local_78 = local_78 + 1;
          uVar4 = DAT_00469984;
        }
      }
      else {
        if (0 < param_2) {
          param_2 = param_2 + -1;
          goto LAB_00179453;
        }
        if ((~*(byte *)((int)piVar3 + 0x85) & 1) != 0) goto LAB_00179453;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != local_70);
  }
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2;
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  FUN_001298b0(&local_70,uVar4,puVar1);
  return local_78;
}
