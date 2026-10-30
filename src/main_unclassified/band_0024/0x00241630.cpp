/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31D86C8F960808B25B8D7E8F67C546EC9E4D3673AA53A02721447AFC118D1A6D
 * Entry: 0x00241630, Ghidra index: 8011, label: FUN_00241630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241630(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x38;
    if (iVar1 != 0) goto LAB_00241664;
  }
  FUN_00242960();
LAB_00241664:
  FUN_00243cb0(0);
  return iVar1 * 0x38 + *(int *)(unaff_EDI + 4);
}
