/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E063EC16601EBC4890CAEA5B4876DC5AB425EB601DFA7CED40F07EDFF0E4842C
 * Entry: 0x00092f94, Ghidra index: 1804, label: FUN_00092f94
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_000a4d80(void);
extern float10 FUN_002ea51b(double param_1);
extern undefined4 FUN_00062280(void);
extern void FUN_00090800(int param_1);
extern undefined4 FUN_0006a610(int *param_1);

undefined4 FUN_00092f94(void)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int unaff_EBP;
  float10 fVar6;
  
  FUN_000a4a60(2);
  FUN_000a4d00();
  iVar1 = *(int *)(unaff_EBP + 8);
  FUN_000a4d80();
  FUN_000a4d80();
  fVar3 = 1.0 / *(float *)(iVar1 + 0x2c);
  *(float *)(unaff_EBP + -0x18) = fVar3;
  fVar4 = 1.0 / *(float *)(iVar1 + 0x30);
  *(float *)(unaff_EBP + -0x14) = fVar4;
  *(float *)(unaff_EBP + -0x10) = fVar3 * *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x94);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x10);
  *(float *)(unaff_EBP + -0xc) = fVar4 * *(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x94);
  iVar5 = (int)*(float *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 8) = iVar5;
  if ((float)*(int *)(unaff_EBP + 8) < *(float *)(unaff_EBP + -0x10) ==
      ((float)*(int *)(unaff_EBP + 8) == *(float *)(unaff_EBP + -0x10))) {
    iVar5 = iVar5 + -1;
  }
  *(int *)(unaff_EBP + 8) = iVar5;
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0xc);
  *(float *)(unaff_EBP + -0x10) = *(float *)(unaff_EBP + -0x10) - (float)iVar5;
  iVar5 = (int)*(float *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 8) = iVar5;
  if ((float)*(int *)(unaff_EBP + 8) < *(float *)(unaff_EBP + -0xc) ==
      ((float)*(int *)(unaff_EBP + 8) == *(float *)(unaff_EBP + -0xc))) {
    iVar5 = iVar5 + -1;
  }
  *(int *)(unaff_EBP + 8) = iVar5;
  *(float *)(unaff_EBP + -0xc) = *(float *)(unaff_EBP + -0xc) - (float)*(int *)(unaff_EBP + 8);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  fVar3 = 1.0 / *(float *)(iVar1 + 0x50);
  *(float *)(unaff_EBP + -0x28) = fVar3;
  fVar4 = 1.0 / *(float *)(iVar1 + 0x54);
  *(float *)(unaff_EBP + -0x24) = fVar4;
  *(float *)(unaff_EBP + -0x20) = fVar3 * *(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x94);
  *(float *)(unaff_EBP + -0x1c) = fVar4 * *(float *)(iVar1 + 0x5c) * *(float *)(iVar1 + 0x94);
  *(double *)(unaff_EBP + -8) = (double)*(float *)(unaff_EBP + -0x20);
  fVar6 = (float10)FUN_002ea51b(*(undefined4 *)(unaff_EBP + -8),*(undefined4 *)(unaff_EBP + -4));
  *(float *)(unaff_EBP + -0x20) = (float)((float10)*(double *)(unaff_EBP + -8) - fVar6);
  *(double *)(unaff_EBP + -8) = (double)*(float *)(unaff_EBP + -0x1c);
  fVar6 = (float10)FUN_002ea51b(*(undefined4 *)(unaff_EBP + -8),*(undefined4 *)(unaff_EBP + -4));
  *(float *)(unaff_EBP + -0x1c) = (float)((float10)*(double *)(unaff_EBP + -8) - fVar6);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  iVar5 = *(int *)(iVar1 + 8);
  piVar2 = *(int **)(iVar5 + 4);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
  }
  FUN_00090800(iVar5,0);
  iVar5 = *(int *)(iVar1 + 8);
  piVar2 = *(int **)(iVar5 + 0x10);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,1);
  }
  FUN_00090800(iVar5 + 0xc,1);
  iVar1 = *(int *)(iVar1 + 8);
  piVar2 = *(int **)(iVar1 + 0x1c);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,2);
  }
  FUN_00090800(iVar1 + 0x18,2);
  *(undefined4 *)(unaff_EBP + 8) = 3;
  FUN_0006a610(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 3;
  FUN_0006a610(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 1;
  FUN_0006a610(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x302;
  FUN_0006a610(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x303;
  FUN_0006a610(unaff_EBP + 8);
  return 1;
}
