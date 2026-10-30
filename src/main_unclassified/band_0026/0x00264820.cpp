/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F1B7F22742B9AE97DB9B588C1FDB4AC67CF4679A819A492D2F1082730F1DE5D
 * Entry: 0x00264820, Ghidra index: 8706, label: FUN_00264820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004432f8;
extern uint32_t *DAT_00443318;
int FUN_00264820(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar4 = param_2;
  piVar6 = *(int **)(param_2 + 8);
  if (*(int **)(param_2 + 8) == (int *)0x0) {
    piVar6 = DAT_004432f8;
  }
  puVar7 = (undefined4 *)(param_1 + 0x14);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  piVar1 = (int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  piVar3 = (int *)*piVar1;
  param_2 = 0x45dfdf8;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
  }
  iVar4 = (**(code **)(*piVar6 + 0xc))
                    (piVar6,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),&param_2,
                     piVar1);
  if (-1 < iVar4) {
    (**(code **)(*(int *)*piVar1 + 0x28))((int *)*piVar1,1);
    (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,UINT32_C(0x00264730),param_1);
    piVar6 = *(int **)(param_1 + 0x48);
    puVar7 = (undefined4 *)(param_1 + 0x48);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      *puVar7 = 0;
    }
    iVar4 = (**(code **)(*DAT_00443318 + 0x14))(DAT_00443318,0x10,puVar7);
    if (iVar4 < 0) {
      (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1);
    }
    (**(code **)(*(int *)*puVar7 + 0xc))(UINT32_C(0x00264710),param_1);
  }
  return iVar4;
}
