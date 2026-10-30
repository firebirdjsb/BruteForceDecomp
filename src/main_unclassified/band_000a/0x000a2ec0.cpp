/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA717969BE31640774DFD956A9FF50489CEED687E0DFB84F492415789ACD12CB
 * Entry: 0x000a2ec0, Ghidra index: 1937, label: FUN_000a2ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003e2304;
/* WARNING: Type propagation algorithm not settling */

/* Original x86 entry 0x000A2EC0 has nine caller-owned DWORDs, proven
 * by RET 0x24 at 0x000A33C8. Guest arg9 lives at EBP+0x28:
 * 0x000A2EC9 reads its initial object pointer; later 0x000A312B and
 * following instructions reuse that SAME writable DWORD as transient
 * GPU constant values. 0x000A329D passes the address of its highest byte.
 * Native C calling-convention and guest-memory translation remain
 * ABI_UNVERIFIED; this spells the guest stack contract explicitly. */
undefined4 FUN_000a2ec0(int param_1,int param_2,undefined4 param_3,
                         uint32_t param_4,uint32_t param_5,uint32_t param_6,
                         uint32_t param_7,uint32_t param_8,uint32_t param_9)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_1c;
  float local_18 [2];
  int local_10;
  int *local_c;
  char local_5;
  
  local_1c = *(int *)(uintptr_t)(param_9 + UINT32_C(0x88));
  piVar6 = *(int **)(param_2 + 0x18);
  iVar5 = 0;
  local_10 = 0;
  local_c = piVar6;
  if (piVar6 != (int *)0x0) {
    local_5 = '\0';
    local_18[0] = 2.832051e-23;
    local_18[1] = -3.519651e+28;
    (**(code **)(*piVar6 + 0x6c))(piVar6,local_18,local_18 + 1,&local_5);
    if (local_5 != '\0') {
      local_18[0] = -4.885167e+35;
      iVar5 = (**(code **)(*piVar6 + 0x50))(piVar6,local_18);
      local_10 = (iVar5 != 0) + 1;
    }
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  uVar4 = 2;
  if (iVar1 == 0x1fe75072) {
    uVar4 = 2;
  }
  else if (iVar1 == -0x16f9b857) {
    uVar4 = 0;
  }
  FUN_002385a0();
  if (local_10 == 2) {
    piVar6 = *(int **)(iVar5 + 4);
    if (piVar6 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar6 + 0x38))(piVar6,2);
    }
    FUN_000a4d00();
    FUN_000a4a60(uVar4);
    local_18[0] = 5.60519e-45;
    FUN_0006a610(local_18);
    local_18[0] = 1.4013e-45;
    FUN_0006a610(local_18);
    local_18[0] = 7.25873e-43;
    FUN_0006a610(local_18);
LAB_000a300a:
    local_18[0] = 1.79366e-43;
    FUN_0006a610(local_18);
    piVar6 = local_c;
  }
  else {
    if (local_10 == 1) {
      FUN_000a4d00();
      FUN_000a4a60(uVar4);
      local_18[0] = 5.60519e-45;
      FUN_0006a610(local_18);
      local_18[0] = 1.4013e-45;
      FUN_0006a610(local_18);
      local_18[0] = 7.25873e-43;
      FUN_0006a610(local_18);
      goto LAB_000a300a;
    }
    FUN_000a4d00();
    FUN_000a4a60(uVar4);
  }
  FUN_0006ec90();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  local_18[0] = *(float *)(uintptr_t)(param_9 + UINT32_C(0x90));
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (local_1c == 1) {
    param_9 = 1;
    FUN_0006a610(&param_9);
    param_9 = 0x303;
    FUN_0006a610(&param_9);
    param_9 = 0x302;
    FUN_0006a610(&param_9);
    param_9 = 0x1000000;
LAB_000a3251:
    FUN_0006a610(&param_9);
    piVar6 = local_c;
  }
  else if (local_1c == 2) {
    param_9 = 0;
    FUN_0006a610(&param_9);
    param_9 = 0x202;
    FUN_0006a610(&param_9);
    param_9 = 0x10101;
    FUN_0006a610(&param_9);
    piVar6 = local_c;
LAB_000a31ef:
    if (local_18[0] < 1.0) {
      param_9 = 1;
      FUN_0006a610(&param_9);
      param_9 = 0x302;
      FUN_0006a610(&param_9);
      param_9 = 0x303;
      goto LAB_000a3251;
    }
  }
  else if (local_1c != 1) goto LAB_000a31ef;
  if (piVar6 != (int *)0x0) {
    local_1c = -0x5382377;
    iVar5 = (**(code **)(*piVar6 + 0x50))(piVar6,&local_1c);
    if (iVar5 != 0) {
      piVar2 = *(int **)(iVar5 + 4);
      if (piVar2 == (int *)0x0) {
        FUN_00062280();
      }
      else {
        (**(code **)(*piVar2 + 0x38))(piVar2,0);
      }
    }
    local_18[0] = 3.8595923e-24;
    local_1c = -0x111c8c42;
    cVar3 = (**(code **)(*piVar6 + 0x6c))(piVar6,local_18,&local_1c,(uint8_t *)&param_9 + 3);
    param_9 = (param_9 & UINT32_C(0x00ffffff)) | ((uint32_t)(uint8_t)cVar3 << 24);
    if (cVar3 != '\0') {
      local_1c = 0;
      FUN_0006a610(&local_1c);
    }
    if (iVar5 != 0) goto LAB_000a32f6;
  }
  FUN_00062280();
LAB_000a32f6:
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar6 + 0x38))(piVar6,1);
  }
  param_9 = 1;
  FUN_0006a610(&param_9);
  param_9 = 1;
  FUN_0006a610(&param_9);
  iVar5 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar5 * 2]);
  if (param_7 < 0x514) {
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,param_7,uVar4);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar4);
  }
  FUN_00238630();
  return 1;
}
