/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8D12ECB7C3B68F44462ED340158B50D016C8A252436FEADE13C2B0639D22420
 * Entry: 0x002883f0, Ghidra index: 9107, label: FUN_002883f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002883f0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_3 = 0;
  }
  piVar1 = (int *)*param_1;
  *param_3 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_4,param_4);
  }
  FUN_00288260(param_1,param_2 - (int)param_1 >> 2);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  return;
}
