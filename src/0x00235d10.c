/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D49C32F591AE3EAD5734B8CA10CA633CC5436483EB2E4C62480A0F7C90B9230
 * Entry: 0x00235d10, Ghidra index: 7823, label: FUN_00235d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00235d10(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int unaff_EDI;
  
  piVar2 = *(int **)(in_EDX + 0x4c);
  if ((piVar2 == (int *)0x0) || (*(int *)(in_EDX + 0x50) - (int)piVar2 >> 2 == 0)) {
    return 0;
  }
  if (unaff_EDI != 0) {
    do {
      if (piVar2 == *(int **)(in_EDX + 0x50)) {
        return 0;
      }
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    } while (iVar1 != unaff_EDI);
    if (piVar2 == *(int **)(in_EDX + 0x50)) {
      return 0;
    }
  }
  return *piVar2;
}
