/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 856D9CDE7296D18FB0B48D5129F4F298238D763A43BE2C2127F13BAAA841F3BA
 * Entry: 0x00137e30, Ghidra index: 3922, label: FUN_00137e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00137e30(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_2 - iVar1) / 0x14;
      goto LAB_00137e79;
    }
  }
  iVar1 = 0;
LAB_00137e79:
  FUN_001388d0(unaff_EDI,param_2,1,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
  return param_1;
}
