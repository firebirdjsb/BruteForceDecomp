/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B385CE0C347DD776406E526C5DFDE948364811AD1D4FDFB9AF92F23AA15D28B4
 * Entry: 0x00298d40, Ghidra index: 9367, label: FUN_00298d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_exit_1___Unable_to_recover__00404a8c[];
extern char s_invalid_order_function_for_sorti_00404264[];
void FUN_00298d40(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_a0;
  undefined4 local_84 [2];
  double local_7c;
  undefined4 local_74 [2];
  double local_6c;
  undefined4 local_64 [2];
  undefined8 local_5c;
  undefined4 local_54 [2];
  undefined8 local_4c;
  undefined4 local_44 [2];
  undefined8 local_3c;
  undefined4 local_34 [2];
  double local_2c;
  undefined4 local_24 [2];
  double local_1c;
  undefined4 local_14 [2];
  double local_c;
  
  if (param_3 <= param_2) {
    return;
  }
  local_24[0] = 0xffffffff;
  local_34[0] = 0xffffffff;
LAB_00298d90:
  local_2c = (double)param_3;
  local_1c = (double)param_2;
  FUN_00293c90(local_34);
  FUN_00293c90(local_24);
  iVar2 = FUN_00298c50();
  if (iVar2 != 0) {
    FUN_00298ba0(param_2,param_3);
  }
  if (param_3 - param_2 == 1) {
    return;
  }
  iVar5 = (param_2 + param_3) / 2;
  local_14[0] = 0xffffffff;
  local_c = (double)iVar5;
  FUN_00293c90(local_14);
  local_44[0] = 0xffffffff;
  local_3c = (double)param_2;
  FUN_00293c90(local_44);
  iVar3 = FUN_00298c50();
  iVar2 = param_2;
  iVar4 = iVar5;
  if (iVar3 == 0) {
    local_54[0] = 0xffffffff;
    local_4c = (double)param_3;
    FUN_00293c90(local_54);
    iVar3 = FUN_00298c50();
    iVar2 = iVar5;
    iVar4 = param_3;
    if (iVar3 == 0) goto LAB_00298edd;
  }
  FUN_00298ba0(iVar2,iVar4);
LAB_00298edd:
  if (param_3 - param_2 == 2) {
    return;
  }
  puVar1 = (undefined4 *)*DAT_00469888;
  *DAT_00469888 = (int)(puVar1 + 4);
  local_64[0] = 0xffffffff;
  local_5c = (double)iVar5;
  iVar2 = FUN_00293c90(local_64);
  *puVar1 = *(undefined4 *)(iVar2 + 0x10);
  puVar1[1] = *(undefined4 *)(iVar2 + 0x14);
  puVar1[2] = *(undefined4 *)(iVar2 + 0x18);
  puVar1[3] = *(undefined4 *)(iVar2 + 0x1c);
  FUN_00298ba0(iVar5,param_3 + -1);
  local_a0 = param_3 + -1;
  local_74[0] = 0xffffffff;
  iVar2 = param_2;
  do {
    iVar2 = iVar2 + 1;
    local_6c = (double)iVar2;
    FUN_00293c90(local_74);
    iVar4 = FUN_00298c50();
    while (iVar4 != 0) {
      if (param_3 < iVar2) {
        FUN_0028aa90(s_invalid_order_function_for_sorti_00404264);
        if ((__jmp_buf_tag *)DAT_00469888[6] == (__jmp_buf_tag *)0x0) goto LAB_0029911b;
        _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
        goto LAB_002990f9;
      }
      iVar2 = iVar2 + 1;
      local_6c = (double)iVar2;
      FUN_00293c90(local_74);
      iVar4 = FUN_00298c50();
    }
    local_a0 = local_a0 + -1;
    local_7c = (double)local_a0;
    local_84[0] = 0xffffffff;
    FUN_00293c90(local_84);
    iVar4 = FUN_00298c50();
    while (iVar4 != 0) {
      if (local_a0 < param_2) {
LAB_002990f9:
        FUN_0028aa90(s_invalid_order_function_for_sorti_00404264);
        if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
          _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
        }
LAB_0029911b:
        FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
        FUN_002eba1d(1);
      }
      local_a0 = local_a0 + -1;
      local_7c = (double)local_a0;
      local_84[0] = 0xffffffff;
      FUN_00293c90(local_84);
      iVar4 = FUN_00298c50();
    }
    if (local_a0 < iVar2) break;
    FUN_00298ba0(iVar2,local_a0);
  } while( true );
  FUN_00298ba0(param_3 + -1,iVar2);
  *DAT_00469888 = *DAT_00469888 + -0x10;
  if (iVar2 - param_2 < param_3 - iVar2) {
    iVar4 = param_2;
    iVar3 = iVar2 + -1;
    param_2 = iVar2 + 1;
  }
  else {
    iVar4 = iVar2 + 1;
    iVar3 = param_3;
    param_3 = iVar2 + -1;
  }
  FUN_00298d40(param_1,iVar4,iVar3,param_4);
  if (param_3 <= param_2) {
    return;
  }
  goto LAB_00298d90;
}
