/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F934B85DA7C34FAA030DF6EB26DD033792F7CE8E00544FD95F6831EE4178C9D7
 * Entry: 0x001a7900, Ghidra index: 5410, label: FUN_001a7900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7900(void)

{
  int in_ECX;
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x134;
    if (iVar1 != 0) goto LAB_001a7932;
  }
  FUN_001abf70();
  in_ECX = 1;
LAB_001a7932:
  FUN_001ac0b0(unaff_ESI,in_ECX + iVar1);
  return iVar1 * 0x134 + *(int *)(unaff_ESI + 4);
}
