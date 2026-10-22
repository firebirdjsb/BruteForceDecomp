/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94BC475C33782753A316A4DCF28648EE5C60CE99A2814A3629489460184D2396
 * Entry: 0x00344f90, Ghidra index: 12761, label: FUN_00344f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034f2b2();
  return uVar1;
}
