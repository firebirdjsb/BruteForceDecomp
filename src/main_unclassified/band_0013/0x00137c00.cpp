/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DED9134614C19E4D2EAE41B7BBC5A4D92F08CC3FCE7E472E812977A2C3A57C55
 * Entry: 0x00137c00, Ghidra index: 3916, label: FUN_00137c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_0001c630(int param_1,uint param_2);
int * FUN_00137c00(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_2 - iVar1) / 0x14;
      goto LAB_00137c49;
    }
  }
  iVar1 = 0;
LAB_00137c49:
  FUN_0001c630(param_2,1);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
  return param_1;
}
