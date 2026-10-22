/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69B9AA5DEE126FDF4B5F429049276DA6D2651FCC25E36858DAACB5B2042DC1D1
 * Entry: 0x001f2170, Ghidra index: 7000, label: FUN_001f2170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f2170(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  if (*(char *)(param_1 + 0x2d) != '\0') {
    return;
  }
  param_1 = param_1 & 0xffffff00;
  FUN_001f2170(*(undefined4 *)(uVar1 + 8));
  if (0xf < *(uint *)(uVar1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(uVar1 + 0x10));
  }
  *(undefined4 *)(uVar1 + 0x24) = 0xf;
  *(undefined4 *)(uVar1 + 0x20) = 0;
  uVar2 = FUN_0001f4d0(&param_1);
  FUN_0001f4e0(uVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uVar1);
}
