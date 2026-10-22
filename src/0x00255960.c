/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6324DC54AC276B830594409FAD25E5BF6291C7157F48068F16EC8161D7F2C90E
 * Entry: 0x00255960, Ghidra index: 8424, label: FUN_00255960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00255960(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  piVar1 = *(int **)(in_ECX + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  FUN_00077d50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
