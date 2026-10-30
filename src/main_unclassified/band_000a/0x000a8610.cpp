/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A704190336DB2AF4712D768E1FE44F0EA5193636FF244374877E72ACA7D374A
 * Entry: 0x000a8610, Ghidra index: 2011, label: FUN_000a8610
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
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000a8610(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint in_stack_0000001c;
  float in_stack_00000024;
  int local_38 [3];
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [3];
  char local_5;
  
  iVar6 = param_2;
  local_14[0] = *(int *)((int)in_stack_00000024 + 0x88);
  local_18 = **(undefined4 **)(param_2 + 0xc);
  local_5 = '\0';
  local_14[1] = 0x18954f8d;
  local_14[2] = 0xeee373be;
  (**(code **)(**(int **)(param_2 + 0x18) + 0x6c))
            (*(int **)(param_2 + 0x18),local_14 + 1,local_14 + 2,&local_5);
  if (local_5 != '\0') {
    local_14[1] = 0;
    FUN_0006a610(local_14 + 1);
  }
  uVar5 = 3;
  if (*(int *)(*(int *)(iVar6 + 0xc) + 4) == -0x18026bd6) {
    uVar5 = 4;
  }
  cVar4 = FUN_000a4a60(uVar5);
  if (cVar4 == '\0') {
    return 1;
  }
  FUN_002385a0();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (*(int *)(iVar6 + 0x24) == 0) {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else {
    FUN_00095460(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20),*(int *)(iVar6 + 0x24))
    ;
  }
  FUN_000a4d00();
  iVar6 = (int)in_stack_00000024;
  in_stack_00000024 = *(float *)((int)in_stack_00000024 + 0x90);
  if (local_14[0] == 1) {
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0x303;
    FUN_0006a610(&param_1);
    param_1 = 0x302;
    FUN_0006a610(&param_1);
    param_1 = 0x1000000;
    FUN_0006a610(&param_1);
    if (*(int *)(*(int *)(param_2 + 0xc) + 4) == -0x18026bd6) {
      uVar5 = 4;
    }
    else {
      uVar5 = 3;
    }
    FUN_000a4a60(uVar5);
    local_2c = in_stack_00000024;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_28 = 0;
    local_24 = 0.0;
    local_20 = 0x3c23d70a;
    local_1c = 0x3e19999a;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      piVar7 = local_38;
      piVar8 = &DAT_0037e1e8;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  }
  else {
    if (local_14[0] == 2) {
      local_14[0] = 0;
      FUN_0006a610(local_14);
      local_14[0] = 0x202;
      FUN_0006a610(local_14);
      local_14[0] = 0x10101;
      FUN_0006a610(local_14);
    }
    else if (local_14[0] == 1) goto LAB_000a89d4;
    iVar2 = param_1;
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar7 + 0x38))(piVar7,0);
    }
    iVar1 = *(int *)(iVar6 + 0x8c);
    local_14[0] = 0x3f4ccccd;
    param_1 = 0x3f4ccccd;
    local_38[0] = 0x3f4ccccd;
    if ((*(int *)(iVar1 + 0x54) == 1) &&
       (iVar1 = *(int *)(iVar1 + 0x148),
       *(short *)(iVar1 + 0x22) != *(short *)(*(int *)(iVar6 + 0x990) + 0x22))) {
      (**(code **)(*(int *)(iVar1 + 0x1b4) + 0x9c))();
      cVar4 = FUN_000a8520();
      local_38[0] = local_14[0];
      if (cVar4 == '\0') {
        param_1 = 0x3e4ccccd;
        local_38[0] = 0x3e4ccccd;
      }
    }
    local_38[1] = param_1;
    local_24 = *(float *)(iVar2 + 0x1c) * *(float *)(iVar2 + 0x18);
    local_38[2] = 0;
    local_2c = in_stack_00000024;
    local_28 = 0;
    local_20 = 0x3c23d70a;
    local_1c = 0x3e19999a;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      piVar7 = local_38;
      piVar8 = &DAT_0037e1e8;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    if (in_stack_00000024 < 1.0) {
      in_stack_00000024 = 1.4013e-45;
  /* XBE-backed stack-slot evidence: original x86 LEA [EBP+0x28]
   * passes the address of the same incoming DWORD that this draft
   * calls in_stack_00000024. The original caller ABI and the
   * callee semantics remain unverified. */
      FUN_0006a610(&in_stack_00000024);
      in_stack_00000024 = 1.079e-42;
      FUN_0006a610(&in_stack_00000024);
      in_stack_00000024 = 1.0804e-42;
      FUN_0006a610(&in_stack_00000024);
    }
  }
LAB_000a89d4:
  iVar6 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar6 * 2]);
  uVar3 = in_stack_0000001c;
  if (in_stack_0000001c < 0x514) {
    uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,uVar3,uVar5);
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar5);
  }
  FUN_00238630();
  return 1;
}
