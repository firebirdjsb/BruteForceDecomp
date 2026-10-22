/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 311B081C67C9AC479930FD9D5842E93257E3D9FDC0C2955EAB9C15BA871D1651
 * Entry: 0x00240890, Ghidra index: 7986, label: FUN_00240890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00240890(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00241810();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
