/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FCB582B97549A436BA15F1F4466E2DCB3E34562C6F9C07CACC48BB41D801787
 * Entry: 0x00294860, Ghidra index: 9295, label: FUN_00294860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00294860(void)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_00294640();
  if (*(int *)(iVar2 + 4) == 0) {
    *(undefined4 *)(iVar2 + 4) = 2;
  }
  return;
}
