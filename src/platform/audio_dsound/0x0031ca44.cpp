/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1855560CC11A6BFA51F6F4AA596A202ADB37DB5D1F28EE8984505EFEF0D4834
 * Entry: 0x0031ca44, Ghidra index: 12349, label: FUN_0031ca44
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031ca44(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    FUN_0031b0ec();
    FUN_00314937(iVar1);
    *in_ECX = 0;
  }
  return;
}
