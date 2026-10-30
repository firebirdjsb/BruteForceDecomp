/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3FCB3FFC7EF6C7D698D4A37793531559B57FA2D1D8F27E3420021B049481964
 * Entry: 0x00294810, Ghidra index: 9294, label: FUN_00294810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00294810(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  FUN_00294640();
  return;
}
