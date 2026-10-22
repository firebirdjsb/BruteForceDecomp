/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 988764A1185F25C6FBD7BBFB69B5DC0EA2F8A35920C1142D0EB9B9C38C503D0D
 * Entry: 0x0010cb00, Ghidra index: 3475, label: FUN_0010cb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010cb00(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = 0;
  if (((-1 < (int)in_EDX) && (*(int *)(unaff_ESI + 100) != 0)) &&
     (in_EDX < (uint)(*(int *)(unaff_ESI + 0x68) - *(int *)(unaff_ESI + 100) >> 2))) {
    FUN_00087940(param_1,0,0xffffffff);
    uVar1 = 1;
  }
  return uVar1;
}
