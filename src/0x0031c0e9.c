/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2D4B8EE6C6B9D3E4F26055B0DB832C952D69B2CAAE9A6EFA281558A3064C8FD
 * Entry: 0x0031c0e9, Ghidra index: 12321, label: FUN_0031c0e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c0e9(void)

{
  char *pcVar1;
  int in_ECX;
  int iVar2;
  
  pcVar1 = (char *)(in_ECX + 0x38);
  iVar2 = 2;
  do {
    pcVar1[1] = pcVar1[1] + *pcVar1;
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
