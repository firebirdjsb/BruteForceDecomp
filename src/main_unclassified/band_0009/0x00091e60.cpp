/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B93D081A9A5238B49E3AB8D61D95E6A0FAD3080E7EF53129B449454584C928C
 * Entry: 0x00091e60, Ghidra index: 1792, label: FUN_00091e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000a4d00(void);
extern undefined4 FUN_00062280(void);
extern void FUN_00090800(int param_1);
extern undefined4 FUN_0006a610(int *param_1);

void FUN_00091e60(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  
  FUN_000a4d00();
  iVar2 = *(int *)(in_EAX + 8);
  if (param_1 == 0) {
    piVar1 = *(int **)(iVar2 + 4);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
      FUN_00090800(iVar2,0);
      iVar2 = *(int *)(in_EAX + 0x24);
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
      FUN_00090800(iVar2,0);
      iVar2 = *(int *)(in_EAX + 0x24);
    }
  }
  else {
    piVar1 = *(int **)(iVar2 + 0x10);
    if (piVar1 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
    }
    FUN_00090800(iVar2 + 0xc,0);
    iVar2 = *(int *)(in_EAX + 0x34);
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (iVar2 == 0) {
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0x302;
    FUN_0006a610(&param_1);
    param_1 = 0x303;
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 1;
  }
  FUN_0006a610(&param_1);
  return;
}
