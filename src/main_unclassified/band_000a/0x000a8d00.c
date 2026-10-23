/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ADE98F8EE4E8EC9B4E6A530E26F61BE21B65D0DDC10AFBE55E744388675BC72
 * Entry: 0x000a8d00, Ghidra index: 2018, label: FUN_000a8d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1e8;
extern uint32_t DAT_003e2304;
undefined4 FUN_000a8d00(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint in_stack_0000001c;
  int in_stack_00000024;
  int local_30 [3];
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  float local_8;
  
  iVar6 = in_stack_00000024;
  local_10 = **(undefined4 **)(param_2 + 0xc);
  iVar3 = (*(undefined4 **)(param_2 + 0xc))[1];
  iVar2 = *(int *)(in_stack_00000024 + 0x88);
  uVar4 = 2;
  if (iVar3 == 0x1fe75072) {
    uVar4 = 2;
  }
  else if (iVar3 == -0x16f9b857) {
    uVar4 = 0;
  }
  cVar1 = FUN_000a4a60(uVar4);
  if (cVar1 == '\0') {
    return 1;
  }
  FUN_002385a0();
  local_8 = *(float *)(iVar6 + 0x90);
  FUN_0006ec90();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  if (iVar2 == 1) {
    in_stack_00000024 = 1;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x303;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x302;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x1000000;
    FUN_0006a610(&stack0x00000024);
    FUN_000a4a60(uVar4);
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_24 = local_8;
    local_20 = 0;
    local_1c = 0.0;
    local_18 = 0x3c23d70a;
    local_14 = 0x3e19999a;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      piVar5 = local_30;
      piVar7 = &DAT_0037e1e8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  }
  else {
    if (iVar2 == 2) {
      local_c = 0;
      FUN_0006a610(&local_c);
      local_c = 0x202;
      FUN_0006a610(&local_c);
      local_c = 0x10101;
      FUN_0006a610(&local_c);
      iVar6 = in_stack_00000024;
    }
    else if (iVar2 == 1) goto LAB_000a9046;
    local_c = 0x3f4ccccd;
    in_stack_00000024 = 0x3f4ccccd;
    local_30[0] = 0x3f4ccccd;
    if (*(int *)(*(int *)(iVar6 + 0x8c) + 0x54) == 1) {
      iVar3 = *(int *)(*(int *)(iVar6 + 0x8c) + 0x148);
      iVar2 = (**(code **)(**(int **)(iVar6 + 0x990) + 0x20))();
      local_30[0] = local_c;
      if (((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) &&
         (*(short *)(iVar3 + 0x22) != *(short *)(iVar2 + 0x22))) {
        (**(code **)(*(int *)(iVar3 + 0x1b4) + 0x9c))();
        cVar1 = FUN_000a8520();
        local_30[0] = local_c;
        if (cVar1 == '\0') {
          in_stack_00000024 = 0x3e4ccccd;
          local_30[0] = 0x3e4ccccd;
        }
      }
    }
    local_1c = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18);
    local_30[1] = in_stack_00000024;
    local_30[2] = 0;
    local_24 = local_8;
    local_20 = 0;
    local_18 = 0x3c23d70a;
    local_14 = 0x3e19999a;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      piVar5 = local_30;
      piVar7 = &DAT_0037e1e8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    if (local_8 < 1.0) {
      in_stack_00000024 = 1;
      FUN_0006a610(&stack0x00000024);
      in_stack_00000024 = 0x302;
      FUN_0006a610(&stack0x00000024);
      in_stack_00000024 = 0x303;
      FUN_0006a610(&stack0x00000024);
    }
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar5 + 0x38))(piVar5,0);
    }
  }
LAB_000a9046:
  FUN_000a4d00();
  in_stack_00000024 = 1;
  FUN_0006a610(&stack0x00000024);
  in_stack_00000024 = 1;
  FUN_0006a610(&stack0x00000024);
  iVar3 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
  if (in_stack_0000001c < 0x514) {
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar4);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar4);
  }
  FUN_00238630();
  return 1;
}
