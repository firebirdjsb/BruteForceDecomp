/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0ED736FD8138C64247C7593C74E23EFC651FABA6F894E345D2F5E76C6BD471FD
 * Entry: 0x0001f660, Ghidra index: 147, label: FUN_0001f660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0001f660(uint param_1,char param_2)

{
  uint uVar1;
  int in_ECX;
  
  if (param_1 == 0xffffffff) {
    FUN_002f258a();
  }
  uVar1 = *(uint *)(in_ECX + 0x18);
  if (uVar1 < param_1) {
    if (param_2 != '\0') {
      FUN_0001f730(param_1,0);
      return param_1 != 0;
    }
    FUN_0001f730(param_1,*(undefined4 *)(in_ECX + 0x14));
    return param_1 != 0;
  }
  if ((param_2 != '\0') && (param_1 < 0x10)) {
    if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
    *(undefined4 *)(in_ECX + 0x18) = 0xf;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined1 *)(in_ECX + 4) = 0;
    return param_1 != 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    if (0xf < uVar1) {
      **(undefined1 **)(in_ECX + 4) = 0;
      return false;
    }
    *(undefined1 *)(in_ECX + 4) = 0;
  }
  return param_1 != 0;
}
