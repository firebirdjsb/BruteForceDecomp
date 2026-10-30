/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FEED9EB8448DB5DCB26369EB137A94B40CF68D0BF621D57833F00B3C8C74B48
 * Entry: 0x00098900, Ghidra index: 1841, label: FUN_00098900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_00062280(void);
extern void FUN_00090800(int param_1);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_0006a610(int *param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_000a4d80(void);
extern float10 FUN_0006a9f0(void);
extern float10 FUN_0006aa40(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
undefined4 FUN_00098900(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_8;
  
  FUN_002385a0();
  iVar3 = param_1;
  if ((*(byte *)(param_2 + 0x85) & 1) == 0) {
    iVar3 = *(int *)(param_1 + 8);
    piVar2 = *(int **)(iVar3 + 4);
    if (piVar2 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar2 + 0x38))(piVar2,1);
    }
    FUN_00090800(iVar3,1);
    param_2 = 4;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar2 + 0x38))(piVar2,0);
    }
    FUN_00090800(iVar1,0);
    FUN_000a4a60(2);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (*(float *)(iVar3 + 0x3c) != 0.0) {
      local_8 = 4.2039e-45;
      FUN_0006a610(&local_8);
      local_8 = 4.2039e-45;
      FUN_0006a610(&local_8);
    }
    FUN_000a4d00();
    iVar3 = param_1;
    local_8 = (float)(uint)*(byte *)(param_1 + 0x2f);
    puVar4 = (undefined4 *)(param_1 + 0xc);
    *(float *)(param_1 + 0x28) = (float)(int)local_8 * 0.003921569;
    FUN_000a4d80();
    if ((*(byte *)(*(int *)(param_2 + 0x8c) + 0x4c) & 1) == 0) {
      fVar6 = (float10)1.0;
    }
    else {
      fVar6 = (float10)FUN_0006a9f0();
      local_8 = (float)fVar6;
      fVar6 = (float10)FUN_0006aa40();
      fVar6 = (float10)local_8 / fVar6;
    }
    fVar6 = (float10)*(float *)(param_2 + 0x994) * (float10)*(float *)(iVar3 + 0x40) * fVar6;
    *(float *)(iVar3 + 0x28) = (float)(fVar6 * fVar6);
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar5 = &DAT_0037e1b8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    param_2 = 4;
    FUN_0006a610(&param_2);
    if (*(char *)(param_1 + 0x2d) == '\0') {
      param_2 = 1;
      FUN_0006a610(&param_2);
      param_2 = 0x302;
      FUN_0006a610(&param_2);
      param_2 = 0x303;
    }
    else {
      if (*(float *)(param_1 + 0x40) != 0.0) {
        param_2 = 1;
        FUN_0006a610(&param_2);
        param_2 = 0x302;
        FUN_0006a610(&param_2);
        param_2 = 0x303;
        FUN_0006a610(&param_2);
      }
      param_2 = 4;
      FUN_0006a610(&param_2);
      param_2 = 1;
      FUN_0006a610(&param_2);
      param_2 = 0x206;
      FUN_0006a610(&param_2);
      param_2 = 8;
    }
  }
  FUN_0006a610(&param_2);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
  }
  return 1;
}
