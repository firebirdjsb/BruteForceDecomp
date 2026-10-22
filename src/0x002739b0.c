/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 383E1959813CB8E53C1953A55F826C180853CB4F378AC704B80B20BAA20A3859
 * Entry: 0x002739b0, Ghidra index: 8864, label: FUN_002739b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002739b0(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xe0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  FUN_00271260();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
