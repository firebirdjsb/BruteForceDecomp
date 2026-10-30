/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 164278468D20934F8FBC7AA913DD22BC20C3E02736EAEF216884AE1B975E9761
 * Entry: 0x0008ec70, Ghidra index: 1738, label: FUN_0008ec70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0008ec70(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x28 != 0) {
      iVar1 = (param_2 - iVar1) / 0x28;
      goto LAB_0008ecb9;
    }
  }
  iVar1 = 0;
LAB_0008ecb9:
  FUN_0008ee10(param_2,1);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x28;
  return param_1;
}
