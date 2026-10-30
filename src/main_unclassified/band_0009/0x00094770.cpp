/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09AA97081F39FB93F0DA6EF641F629A9A42BD33F0D89BD25B32CFC0A39717EA3
 * Entry: 0x00094770, Ghidra index: 1814, label: FUN_00094770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0006ec90(void);
extern undefined4 FUN_000a4cb0(void);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern undefined4 FUN_00062280(void);
extern void FUN_00090800(int param_1);
extern undefined4 FUN_002386d0(void);

extern uint32_t DAT_003e2304;
extern uint32_t DAT_00469b18;
undefined4 FUN_00094770(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_stack_0000001c;
  
  if (DAT_00469b18 != 0) {
    return 0;
  }
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) == 0x1fe75072) {
    FUN_0006ec90();
    iVar3 = FUN_000a4cb0();
    D3D8LTCG__D3DDevice_SetStreamSource_4((&DAT_003e2304)[iVar3 * 2]);
    FUN_000a4a60(2);
    FUN_000a4d00();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = *(int **)(iVar3 + 0x10);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,1);
    }
    FUN_00090800(iVar3 + 0xc,1);
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = *(int **)(iVar3 + 0x1c);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,2);
    }
    FUN_00090800(iVar3 + 0x18,2);
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = *(int **)(iVar3 + 0x34);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,3);
    }
    FUN_00090800(iVar3 + 0x30,3);
    if (in_stack_0000001c < 0x514) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
    }
    FUN_000a4a60(2);
    FUN_000a4d00();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = *(int **)(iVar3 + 0x28);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,1);
    }
    FUN_00090800(iVar3 + 0x24,1);
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = *(int **)(iVar3 + 0x40);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,2);
    }
    FUN_00090800(iVar3 + 0x3c,2);
    if (0x513 < in_stack_0000001c) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_RunPushBuffer_4(uVar2);
      return 1;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
    FUN_002386d0();
    D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,in_stack_0000001c,uVar2);
  }
  return 1;
}
