/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41A84AC130ACDA42291D57CD8AF01028FFE3A1564E3467B2922336976B0281BD
 * Entry: 0x00271670, Ghidra index: 8815, label: FUN_00271670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271670(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xe4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xe4) = 0;
  }
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
