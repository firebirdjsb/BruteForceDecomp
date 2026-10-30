/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EECB87A8ECC4D3020C785F7E467440D915872BC01C3DBA54F327D372D075C0D
 * Entry: 0x00127160, Ghidra index: 3731, label: FUN_00127160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00127160(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00127160(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}
