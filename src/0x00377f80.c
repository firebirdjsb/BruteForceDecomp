/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F195EF2B0E16E2DC512C08BE7A660F218C0873D4087AD88B20FD85143052FC2
 * Entry: 0x00377f80, Ghidra index: 13465, label: FUN_00377f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400750;
extern uint32_t DAT_0040186c;
extern uint32_t DAT_00401a88;
extern uint32_t PTR_DAT_00400754;
extern char s_GPU_generated_an_error__Try_repr_0037ad18[];
extern uint32_t switchD_00377fa5_caseD_b[];
void FUN_00377f80(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = *param_1;
  uVar2 = param_2 >> 5;
  switch(param_2 & 0x1f) {
  case 1:
    uVar4 = uVar2 & 7;
    iVar6 = param_1[0x72] + uVar4;
    iVar1 = param_1[0x70];
    local_8 = 0;
    iVar5 = iVar6 - iVar1;
    local_1c = 0;
    if (iVar5 < 1) {
      if (uVar4 != 0) {
        local_1c = 1 - iVar5;
      }
      iVar6 = iVar1;
      if ((uVar2 & 8) == 0) {
        iVar6 = iVar1 + 1;
      }
      iVar5 = iVar6 - iVar1;
    }
    param_1[0x72] = iVar6;
    param_1[0x71] = iVar6 + uVar4;
    if (param_1[0x75] != 0) {
      local_8 = FUN_00377780();
      local_8 = (param_1[0x75] * iVar5 + param_1[0x76]) - local_8;
      if (local_8 < 0) {
        local_8 = 0;
      }
    }
    uVar3 = param_1[0x73] & 1;
    param_1[uVar3 * 3 + 0x5d] = 1;
    param_1[uVar3 * 3 + 0x5e] = iVar6;
    param_1[uVar3 * 3 + 0x5f] = uVar2 & 0xfffffff0;
    param_1[0x73] = param_1[0x73] + 1;
    FUN_00377990();
    if (param_1[99] != 0) {
      local_14 = param_1[0x73];
      local_c = local_1c;
      local_4 = param_1[0x75] * uVar4;
      local_10 = iVar6;
      (*(code *)param_1[99])(&local_14);
      return;
    }
switchD_00377fa5_caseD_b:
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_0037a3e0(s_GPU_generated_an_error__Try_repr_0037ad18);
  case 3:
  case 4:
    FUN_00377f00(param_1,uVar2 | 0x80000000,(param_2 & 0x1f) == 3);
    FUN_00372180();
    return;
  case 5:
    KeSetEvent(param_1 + 0x69,1,0);
    return;
  case 6:
  case 7:
    (**(code **)(&DAT_00401a88 + iVar6))(*(undefined4 *)(&DAT_0040186c + iVar6));
    return;
  case 8:
    *(undefined4 *)(&DAT_00400750 + iVar6) = 0xe00050;
    *(uint *)((int)&PTR_DAT_00400754 + iVar6) = uVar2;
    *(undefined4 *)(&DAT_00400750 + iVar6) = 0xdf0008;
    *(uint *)((int)&PTR_DAT_00400754 + iVar6) = uVar2;
    return;
  case 9:
    *(undefined4 *)(*(int *)(&DAT_00401a88 + iVar6) + iVar6) =
         *(undefined4 *)(&DAT_0040186c + iVar6);
    return;
  case 10:
    param_1[0x206] = param_1[0x206] + uVar2;
    *(uint *)(iVar6 + 0x324c) = *(uint *)(&DAT_00401a88 + iVar6) & 0xfffffff;
    return;
  case 0xb:
    goto switchD_00377fa5_caseD_b;
  }
}
