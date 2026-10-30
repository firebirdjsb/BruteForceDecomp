/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CF65B7172BF9E3EF408378E3493C428490B1BC0D04567FF04F76D5A769CB846
 * Entry: 0x0017a800, Ghidra index: 5014, label: FUN_0017a800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a800(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX != in_ECX) {
    FUN_0017a410();
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) - in_EAX;
  }
  **(int **)(param_2 + 4) = param_3;
  **(int **)(param_3 + 4) = param_1;
  **(int **)(param_1 + 4) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}
