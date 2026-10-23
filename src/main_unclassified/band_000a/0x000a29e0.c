/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C4DD545DCCF0EBBEC4E2A8B9B9A3F8E7CBA800FAD7B94878C0818DD89A091A4
 * Entry: 0x000a29e0, Ghidra index: 1931, label: FUN_000a29e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0038de6c;
extern uint32_t DAT_003e2304;
uint FUN_000a29e0(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint in_stack_0000001c;
  int in_stack_00000024;
  
  iVar4 = *(int *)(in_stack_00000024 + 0x88);
  uVar6 = 3;
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) == -0x18026bd6) {
    uVar6 = 4;
  }
  uVar3 = FUN_000a4a60(uVar6);
  if ((char)uVar3 == '\0') goto LAB_000a2cdc;
  FUN_002385a0();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar7 = &DAT_0038de6c;
    puVar8 = &DAT_0037e238;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else {
    FUN_00095460(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                 *(int *)(param_2 + 0x24));
  }
  FUN_000a4d00();
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
  }
  fVar1 = *(float *)(in_stack_00000024 + 0x90);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (iVar4 == 1) {
    in_stack_00000024 = 1;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x303;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x302;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x1000000;
LAB_000a2c65:
    FUN_0006a610(&stack0x00000024);
  }
  else if (iVar4 == 2) {
    in_stack_00000024 = 0;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x202;
    FUN_0006a610(&stack0x00000024);
    in_stack_00000024 = 0x10101;
    FUN_0006a610(&stack0x00000024);
LAB_000a2c03:
    if (fVar1 < 1.0) {
      in_stack_00000024 = 1;
      FUN_0006a610(&stack0x00000024);
      in_stack_00000024 = 0x302;
      FUN_0006a610(&stack0x00000024);
      in_stack_00000024 = 0x303;
      goto LAB_000a2c65;
    }
  }
  else if (iVar4 != 1) goto LAB_000a2c03;
  iVar4 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
  if (in_stack_0000001c < 0x514) {
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar6);
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar6);
  }
  uVar3 = FUN_00238630();
LAB_000a2cdc:
  return uVar3 & 0xffffff00;
}
