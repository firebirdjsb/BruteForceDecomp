/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8490FF808036FC7E2987030EEE474A79D1B972495A76EFCF4D80521BAA53EC7
 * Entry: 0x00090f50, Ghidra index: 1781, label: FUN_00090f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_00062280(void);
extern undefined4 FUN_0006a610(int *param_1);

undefined4 FUN_00090f50(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_002385a0();
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x10);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(piVar1,2);
      goto LAB_00090fa6;
    }
  }
  else if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1,2);
    goto LAB_00090fa6;
  }
  FUN_00062280();
LAB_00090fa6:
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  param_1 = 0x901;
  FUN_0006a610(&param_1);
  return 1;
}
