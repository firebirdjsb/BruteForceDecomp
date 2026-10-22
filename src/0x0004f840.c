/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29804A50D4246CDFAB202B51EC4118E6D598C1457B98A0EC662D9068D927942E
 * Entry: 0x0004f840, Ghidra index: 694, label: FUN_0004f840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0004f840(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x18 != 0) {
      iVar1 = (param_2 - iVar1) / 0x18;
      goto LAB_0004f889;
    }
  }
  iVar1 = 0;
LAB_0004f889:
  FUN_0004ff00(unaff_EDI,param_2,1);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x18;
  return param_1;
}
