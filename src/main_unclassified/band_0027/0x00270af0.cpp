/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA67E25A145CBA61B1582FE28041A5ED9B7052835D7CEF2C6FF1AEE44C6ADB0E
 * Entry: 0x00270af0, Ghidra index: 8793, label: FUN_00270af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270af0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  if (*(char *)(param_1 + 0x2d) != '\0') {
    return;
  }
  param_1 = param_1 & 0xffffff00;
  FUN_00270af0(*(undefined4 *)(uVar1 + 8));
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
