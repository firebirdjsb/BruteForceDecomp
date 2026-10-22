/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AF6D79D75BDF7FDDED3759B286D6C041A956FBAE9B6303D49972E7835CAF6C1
 * Entry: 0x002897b0, Ghidra index: 9131, label: FUN_002897b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002897b0(void)

{
  char cVar1;
  char *unaff_ESI;
  
  FUN_0028a460();
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  FUN_00294640();
  FUN_00292ba0();
  FUN_00289600();
  return;
}
