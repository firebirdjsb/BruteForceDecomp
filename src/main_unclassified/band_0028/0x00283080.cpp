/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 472A103166692462968895B87A9B15B4E005CF062D3D9137E534A0CA06558DC5
 * Entry: 0x00283080, Ghidra index: 9064, label: FUN_00283080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00283080(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  FUN_00077cc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
