/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6FBCF36FD435EF8992EB4C8A025A6037604441F2ACCA02094E056FD5A6831C7
 * Entry: 0x0031b398, Ghidra index: 12295, label: FUN_0031b398
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031b398(undefined4 param_1)

{
  int iVar1;
  
  FUN_0031b31f(0x49de12ba,0x7fa49bca,0,0);
  iVar1 = 0x50;
  do {
    FUN_0031b31f(0,0,param_1,8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
