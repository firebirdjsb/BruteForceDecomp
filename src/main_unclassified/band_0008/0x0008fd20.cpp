/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A81F9096C88FB368C266A65ECBB38D688A0757304F291314DF94DFD890D32D4
 * Entry: 0x0008fd20, Ghidra index: 1760, label: FUN_0008fd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0008fd20(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_8;
  
  uVar3 = param_2;
  if ((*(byte *)(param_2 + 0x85) & 1) == 0) goto LAB_0008fff1;
  FUN_002385a0();
  iVar5 = param_1;
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
  }
  FUN_00090800(iVar1,0);
  FUN_000a4d00();
  FUN_000a4d80();
  FUN_000a4a60(2);
  if (*(char *)(iVar5 + 0x6c) != '\0') {
    local_8 = 0;
    FUN_0006a610(&local_8);
    local_8 = 1;
    FUN_0006a610(&local_8);
    iVar5 = param_1;
  }
  if (*(float *)(iVar5 + 0x5c) == 0.0) {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  }
  else {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    local_8 = 3;
    FUN_0006a610(&local_8);
    local_8 = 3;
    FUN_0006a610(&local_8);
    iVar5 = param_1;
  }
  if (*(int *)(param_2 + 0x88) == 3) {
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0x306;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 0x206;
    uVar3 = FUN_0006a610(&param_1);
    return uVar3 & 0xffffff00;
  }
  if (*(int *)(iVar5 + 0x80) == 1) {
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 1;
  }
  else {
    uVar3 = CONCAT31((int3)(param_2 >> 8),*(char *)(iVar5 + 0x6d));
    if ((*(char *)(iVar5 + 0x6d) == '\0') && (*(int *)(iVar5 + 0x7c) == 0x3f800000))
    goto LAB_0008fff1;
    param_2 = 4;
    uVar4 = FUN_0006a610(&param_2);
    uVar3 = CONCAT31((int3)((uint)uVar4 >> 8),*(char *)(param_1 + 0x6e));
    if (*(char *)(param_1 + 0x6e) != '\0') goto LAB_0008fff1;
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0x302;
    FUN_0006a610(&param_1);
    param_1 = 0x303;
  }
  FUN_0006a610(&param_1);
  param_1 = 0;
  uVar3 = FUN_0006a610(&param_1);
LAB_0008fff1:
  return uVar3 & 0xffffff00;
}
