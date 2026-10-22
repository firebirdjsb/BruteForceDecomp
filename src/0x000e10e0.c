/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 135A9B43FE9A6B897FF151FDEA55A7300F7150BBA89F579B09D713862CE95B78
 * Entry: 0x000e10e0, Ghidra index: 2763, label: FUN_000e10e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000e10e0(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x18 != 0) {
      iVar1 = (param_2 - iVar1) / 0x18;
      goto LAB_000e1129;
    }
  }
  iVar1 = 0;
LAB_000e1129:
  FUN_000d2a60(param_2,1);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x18;
  return param_1;
}
