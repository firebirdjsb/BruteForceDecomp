/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF08E501660C789239ED4B3939097E43CDE09E961858AB4EC112E3DAC4E0F1D7
 * Entry: 0x00174aa0, Ghidra index: 4917, label: FUN_00174aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174aa0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_8;
  
  if (*(int *)(unaff_ESI + 0x98) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0x98) >> 4;
  }
  if (-1 < local_8 + -1) {
    iVar2 = (local_8 + -1) * 0x10;
    do {
      if (*(int *)(iVar2 + *(int *)(unaff_ESI + 0x98)) == param_1) {
        iVar1 = *(int *)(unaff_ESI + 0x98) + iVar2;
        FUN_00176700(iVar1 + 0x10,*(undefined4 *)(unaff_ESI + 0x9c),iVar1,param_1);
        *(int *)(unaff_ESI + 0x9c) = *(int *)(unaff_ESI + 0x9c) + -0x10;
      }
      iVar2 = iVar2 + -0x10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
