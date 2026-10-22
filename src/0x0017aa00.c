/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D16CC2DC560F9B6062E9C27A043A1DAA6EF600EA84320C03E7639B57F0EACF68
 * Entry: 0x0017aa00, Ghidra index: 5018, label: FUN_0017aa00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017aa00(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  uVar2 = 0;
  if (iVar1 == 0x12ed199) {
    uVar2 = 3;
  }
  else {
    if (iVar1 == -0x1cb3a09a) {
      return 2;
    }
    if (iVar1 == -0x6d04d47) {
      return 1;
    }
  }
  return uVar2;
}
