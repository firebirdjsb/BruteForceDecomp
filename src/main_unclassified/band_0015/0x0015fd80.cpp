/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93061D28BF83A93AE470B5E60882A27FB93C42AFA2F1BEEC04CDDFC3C6369557
 * Entry: 0x0015fd80, Ghidra index: 4581, label: FUN_0015fd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0015fd80(void)

{
  int iVar1;
  int unaff_EBX;
  uint *unaff_EDI;
  
  iVar1 = FUN_000a7ba0(unaff_EDI);
  if ((iVar1 != *(int *)(unaff_EBX + 0x10c)) && (*(uint *)(iVar1 + 0xc) <= *unaff_EDI)) {
    return iVar1 != *(int *)(unaff_EBX + 0x10c);
  }
  return *(int *)(unaff_EBX + 0x10c) != *(int *)(unaff_EBX + 0x10c);
}
