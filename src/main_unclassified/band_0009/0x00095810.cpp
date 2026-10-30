/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A72A559FE145DC063127D05D546FDDEB493289261EC8D9F7ED3C1D6CA0DA68B
 * Entry: 0x00095810, Ghidra index: 1822, label: FUN_00095810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
undefined4 FUN_00095810(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_8;
  
  FUN_002385a0();
  iVar6 = param_1;
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
  }
  FUN_00090800(iVar1,0);
  local_8 = 1;
  uVar4 = FUN_0006a610(&local_8);
  uVar5 = (undefined3)((uint)uVar4 >> 8);
  if (*(char *)(iVar6 + 0x2c) != '\0') {
    local_8 = 0;
    FUN_0006a610(&local_8);
    local_8 = 1;
    FUN_0006a610(&local_8);
    uVar5 = extraout_var;
  }
  if ((*(byte *)(param_2 + 0x85) & 1) != 0) {
    FUN_000a4a60(2);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    if (*(float *)(iVar6 + 0x3c) != 0.0) {
      local_8 = 3;
      FUN_0006a610(&local_8);
      local_8 = 3;
      FUN_0006a610(&local_8);
    }
    FUN_000a4d00();
    iVar1 = param_1;
    fVar3 = *(float *)(param_2 + 0x90) * *(float *)(param_1 + 0x28);
    FUN_000a4d80();
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar7 = (undefined4 *)(iVar1 + 0xc);
      puVar8 = &DAT_0037e1b8;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    uVar4 = CONCAT22(extraout_var_00,
                     (ushort)(fVar3 < 1.0) << 8 | (ushort)isnan(fVar3) << 10 |
                     (ushort)(fVar3 == 1.0) << 0xe);
    if (fVar3 < 1.0) {
      param_1 = 1;
      FUN_0006a610(&param_1);
      param_1 = 0x302;
      FUN_0006a610(&param_1);
      param_1 = 0x303;
      uVar4 = FUN_0006a610(&param_1);
    }
    uVar5 = (undefined3)((uint)uVar4 >> 8);
  }
  return CONCAT31(uVar5,1);
}
