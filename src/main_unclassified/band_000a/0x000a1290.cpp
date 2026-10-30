/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D805938D978A1E3167D014F1DF2AC21F990E07898FB539260BF2EDAF5004370C
 * Entry: 0x000a1290, Ghidra index: 1906, label: FUN_000a1290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_00062280(void);
extern undefined4 FUN_0006a610(int *param_1);
extern void FUN_0006ec90(void);
extern void FUN_00095460(int param_1,int param_2,uint param_3);
extern undefined4 FUN_000a4d00(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_000a4cb0(void);
extern undefined4 FUN_002386d0(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e238;
extern uint32_t DAT_0037e288;
extern uint32_t DAT_0037e2a8;
extern uint32_t DAT_0037e2c8;
extern uint32_t DAT_0038ded0;
extern uint32_t DAT_003e2304;
undefined4 FUN_000a1290(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint in_stack_0000001c;
  undefined4 local_8;
  
  uVar3 = 2;
  if (*(int *)(param_2 + 0x24) != 0) {
    uVar3 = 3;
  }
  cVar2 = FUN_000a4a60(uVar3);
  if (cVar2 == '\0') {
    return 0;
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x3c);
    puVar6 = &DAT_0037e288;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x7c);
    puVar6 = &DAT_0037e2a8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0xbc);
    puVar6 = &DAT_0037e2c8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  piVar1 = *(int **)(param_2 + 0x18);
  if (piVar1 != (int *)0x0) {
    local_8 = 0xfac7dc89;
    iVar4 = (**(code **)(*piVar1 + 0x50))(piVar1,&local_8);
    if (iVar4 != 0) {
      piVar1 = *(int **)(iVar4 + 4);
      if (piVar1 == (int *)0x0) {
        FUN_00062280();
      }
      else {
        (**(code **)(*piVar1 + 0x38))(piVar1,0);
      }
      goto LAB_000a1488;
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar1 + 0x38))(piVar1,0);
  }
  local_8 = 1;
  FUN_0006a610(&local_8);
  local_8 = 1;
  FUN_0006a610(&local_8);
LAB_000a1488:
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    puVar5 = &DAT_0038ded0;
    puVar6 = &DAT_0037e238;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
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
  if (*(char *)(param_1 + 0x138) == '\0') {
    cVar2 = FUN_000a4d00();
    if (cVar2 != '\0') {
      FUN_000a4d80();
      FUN_000a4d80();
      FUN_000a4d80();
      FUN_000a4d80();
      FUN_000a4d80();
    }
  }
  else {
    FUN_000a4d00();
  }
  iVar4 = FUN_000a4cb0();
  D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar4 * 2]);
  if (in_stack_0000001c < 0x514) {
    uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar3);
    return 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
  FUN_002386d0();
  D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar3);
  return 1;
}
