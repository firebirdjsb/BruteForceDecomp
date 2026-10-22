/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 914A1238EF3080BCF10BB309CCC5B159B43C8E656E778DA7AAB580717155272D
 * Entry: 0x00129ad0, Ghidra index: 3753, label: FUN_00129ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00129ad0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_2 - iVar1) / 0xc;
      goto LAB_00129b17;
    }
  }
  iVar1 = 0;
LAB_00129b17:
  FUN_0012a110(unaff_EDI,param_2,1,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0xc;
  return param_1;
}
