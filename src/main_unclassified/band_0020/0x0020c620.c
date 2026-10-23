/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31302CDC58D3C6CF2C21C5C57FF855E5BB4CA10225D17484BE724CB8CB9E6F13
 * Entry: 0x0020c620, Ghidra index: 7356, label: FUN_0020c620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0020c620(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_2 - iVar1) / 0x1c;
      goto LAB_0020c66d;
    }
  }
  iVar1 = 0;
LAB_0020c66d:
  FUN_001c7f90(param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)(unaff_EDI + 4);
  return param_1;
}
