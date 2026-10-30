/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E578004F80BF641A610D7D82CD340ECA58D67B28222511872A4C87B9C6A3F46
 * Entry: 0x002c6ff0, Ghidra index: 10090, label: FUN_002c6ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6ff0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  pcVar2 = *(char **)(unaff_ESI + 4);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_002b2b80();
  FUN_002be9e0(unaff_ESI,uVar3);
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 1;
  return;
}
