/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7977F3F5CFB31052586830E43DD65D6B4DDB2E0B98E7DBD7212C5D7DC6BD50FC
 * Entry: 0x00092f70, Ghidra index: 1803, label: FUN_00092f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b1c;
undefined4 FUN_00092f70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_002385a0();
  if (DAT_00469b1c != 0) {
    return 0;
  }
  FUN_000a4a60(2);
  FUN_000a4d00();
  iVar6 = param_1;
  FUN_000a4d80();
  FUN_000a4d80();
  fVar1 = (1.0 / *(float *)(iVar6 + 0x30)) * *(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x94);
  param_1 = (int)fVar1;
  if ((float)param_1 < fVar1 == ((float)param_1 == fVar1)) {
    param_1 = param_1 + -1;
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  fVar1 = *(float *)(iVar6 + 0x54);
  fVar2 = *(float *)(iVar6 + 0x5c);
  fVar3 = *(float *)(iVar6 + 0x94);
  FUN_002ea51b((double)((1.0 / *(float *)(iVar6 + 0x50)) * *(float *)(iVar6 + 0x58) *
                       *(float *)(iVar6 + 0x94)));
  FUN_002ea51b((double)((1.0 / fVar1) * fVar2 * fVar3));
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  iVar4 = *(int *)(iVar6 + 8);
  piVar5 = *(int **)(iVar4 + 4);
  if (piVar5 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar5 + 0x38))(piVar5,0);
  }
  FUN_00090800(iVar4,0);
  iVar4 = *(int *)(iVar6 + 8);
  piVar5 = *(int **)(iVar4 + 0x10);
  if (piVar5 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar5 + 0x38))(piVar5,1);
  }
  FUN_00090800(iVar4 + 0xc,1);
  iVar6 = *(int *)(iVar6 + 8);
  piVar5 = *(int **)(iVar6 + 0x1c);
  if (piVar5 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar5 + 0x38))(piVar5,2);
  }
  FUN_00090800(iVar6 + 0x18,2);
  param_1 = 3;
  FUN_0006a610(&param_1);
  param_1 = 3;
  FUN_0006a610(&param_1);
  param_1 = 1;
  FUN_0006a610(&param_1);
  param_1 = 0x302;
  FUN_0006a610(&param_1);
  param_1 = 0x303;
  FUN_0006a610(&param_1);
  return 1;
}
