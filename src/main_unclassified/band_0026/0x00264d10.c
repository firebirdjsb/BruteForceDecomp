/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D7C7D0F93D9D071ADA1A71742FF23B1E0FA49BFDE7AF73DF6B97311129B8299
 * Entry: 0x00264d10, Ghidra index: 8714, label: FUN_00264d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00264d10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_ESI;
  int unaff_retaddr;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 5) != '\0') {
    return 0x80004005;
  }
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  else {
    if (param_3 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
      return 0;
    }
    if (param_3 == 2) {
      (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),&param_1);
      *(int *)(iVar1 + 0xc) = unaff_ESI + unaff_retaddr;
      return 0;
    }
  }
  return 0;
}
