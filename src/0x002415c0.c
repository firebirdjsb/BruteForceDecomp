/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FBBFAB78A7A731299E8E5FD7BF9D69B2193647FFD5C1F4A012D44A82256DD58
 * Entry: 0x002415c0, Ghidra index: 8010, label: FUN_002415c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002415c0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x24;
    if (iVar1 != 0) goto LAB_002415f2;
  }
  FUN_00242820();
LAB_002415f2:
  FUN_00243b90(0);
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x24;
}
