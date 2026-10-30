/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F77FC035C705B6506F2364BDB7246CBAF10B41CDC687ACDBCC72EF7232CBF77
 * Entry: 0x00085850, Ghidra index: 1568, label: FUN_00085850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00085cf0(int param_1,int param_2,uint param_3);

int * FUN_00085850(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x24 != 0) {
      iVar1 = (param_2 - iVar1) / 0x24;
      goto LAB_00085899;
    }
  }
  iVar1 = 0;
LAB_00085899:
  FUN_00085cf0(unaff_EDI,param_2,1);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x24;
  return param_1;
}
