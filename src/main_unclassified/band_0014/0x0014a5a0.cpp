/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97E6C5E7563A6E1B523ADE99B23422B94A687BBABD410CE9D05DA4C32819D202
 * Entry: 0x0014a5a0, Ghidra index: 4291, label: FUN_0014a5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014a5a0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x1b0);
  if (piVar1 != (int *)0x0) {
    if (piVar1[2] == 0) {
      if (piVar1[4] == 0) {
        return 0;
      }
      iVar3 = *(int *)(piVar1[4] + 0xb0);
      if (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 3) {
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(piVar1[2] + 0x1d4);
    }
    if ((((iVar3 != 0) && (cVar2 = (**(code **)(*piVar1 + 0x58))(), cVar2 != '\0')) &&
        (*(int *)(in_ECX + 0x1b0) == *(int *)(*(int *)(in_ECX + 0x1b0) + 8) + 0x110)) &&
       (iVar3 = FUN_0014ab50(), *(int *)(iVar3 + 0x1ec) == 8)) {
      return 1;
    }
  }
  return 0;
}
