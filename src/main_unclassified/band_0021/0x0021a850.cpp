/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50E439EE3FC1BEEC1B811DD6EB5648080ED7ED73E020CF1929AB4CC4C43BDDA4
 * Entry: 0x0021a850, Ghidra index: 7513, label: FUN_0021a850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d068;
extern uint32_t switchD_0021a919_caseD_0[];
extern uint32_t switchD_0021a919_default[];
void FUN_0021a850(int *param_1,int *param_2,float param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_retaddr;
  undefined1 local_30 [28];
  int iStack_14;
  int *piStack_10;
  int local_c;
  int *local_8;
  int local_4;
  
  *(float *)(*param_2 + 0xc) = param_3 + *(float *)(*param_2 + 0xc);
  iVar3 = *param_2;
  if (((*(int *)(iVar3 + 0x14) == 0) &&
      (*(float *)(iVar3 + 0x10) < *(float *)(iVar3 + 0xc) !=
       (*(float *)(iVar3 + 0x10) == *(float *)(iVar3 + 0xc)))) &&
     (iVar3 = FUN_0008f5d0(param_1[0x1e],param_1[0x2f],param_1[2]), iVar3 != 0)) {
    if (*param_2 == 0) {
      return;
    }
    FUN_0021a140(1);
    *param_2 = 0;
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
    return;
  }
  if (*(float *)(iVar3 + 8) <= *(float *)(iVar3 + 0xc)) {
    FUN_0021a140(1);
    *param_2 = 0;
    return;
  }
  if (-1 < (char)param_1[0x43]) goto switchD_0021a919_default;
  switch(*(undefined4 *)*param_2) {
  case 0:
    goto switchD_0021a919_caseD_0;
  case 2:
    if (param_1[0x39] != 0) {
      FUN_0001d0c0();
      local_4 = param_1[0x1d];
      local_8 = (int *)param_1[0x1c];
      local_c = param_1[0x1b];
      (**(code **)(**(int **)(*param_2 + 0x14) + 0xc))(*(int **)(*param_2 + 0x14),1,local_30);
      break;
    }
    *(undefined4 *)*param_2 = 0;
  case 1:
    if (param_1[0x39] == 0) {
      *(undefined4 *)*param_2 = 0;
switchD_0021a919_caseD_0:
      piVar1 = *(int **)(*param_2 + 0x14);
      iVar3 = *piVar1;
      uVar4 = (**(code **)(*param_1 + 0x40))();
      (**(code **)(iVar3 + 0xc))(piVar1,1,uVar4);
    }
    else {
      FUN_0001fdd0();
      FUN_0001d0c0();
      local_4 = param_1[0x1d];
      local_8 = (int *)param_1[0x1c];
      local_c = param_1[0x1b];
      (**(code **)(**(int **)(*param_2 + 0x14) + 0xc))(*(int **)(*param_2 + 0x14),1,local_30);
    }
    break;
  case 3:
    FUN_0003d7e0();
    (**(code **)(**(int **)(*param_2 + 0x14) + 0xc))(*(int **)(*param_2 + 0x14),1,&DAT_0046d068);
  }
switchD_0021a919_default:
  (**(code **)(**(int **)(*param_2 + 0x14) + 0x1c))(*(int **)(*param_2 + 0x14),param_3);
  (**(code **)(**(int **)(*unaff_retaddr + 0x14) + 0x20))(*(int **)(*unaff_retaddr + 0x14),param_1);
  cVar2 = (**(code **)(**(int **)(*local_8 + 0x14) + 0x2c))(*(int **)(*local_8 + 0x14),4);
  if (cVar2 != '\0') {
    if (((char)local_8 != '\0') && (*(int *)(iStack_14 + 0xec) != 0)) {
      FUN_0021cf70();
      return;
    }
    if (*piStack_10 != 0) {
      FUN_0021a140(1);
      *piStack_10 = 0;
    }
  }
  return;
}
