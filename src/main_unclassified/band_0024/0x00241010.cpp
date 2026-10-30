/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 846771BCAAF8C2DCE61BA825A717B4E2614A21AA825C5F40D5575DD8FBE20B7B
 * Entry: 0x00241010, Ghidra index: 7996, label: FUN_00241010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241010(void)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_00241045;
  }
  FUN_00241e10();
LAB_00241045:
  FUN_00243380(0,0);
  return iVar1 * 0x2c + *(int *)(unaff_ESI + 4);
}
