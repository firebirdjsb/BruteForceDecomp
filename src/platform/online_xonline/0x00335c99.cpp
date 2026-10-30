/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57F435B64A59C70C1881F82AEBDD56E69298A8A854FCF523C86B594BFA074B66
 * Entry: 0x00335c99, Ghidra index: 12446, label: FUN_00335c99
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00335c99(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_003355e1(param_1);
  if (-1 < iVar1) {
    iVar1 = (-(uint)(*(int *)(param_1 + 0x18) != 0) & 0xffeaff10) + 0x1500f0;
  }
  return iVar1;
}
