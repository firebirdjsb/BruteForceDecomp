/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D59959588FD5E35EB9D995B72FBE3091A97890ABB8A1C1C77FA4AC5EB987773F
 * Entry: 0x0004e650, Ghidra index: 671, label: FUN_0004e650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e650(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_2 - param_1 >> 3) - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    iVar3 = param_1 + iVar4 * 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + -4);
      puVar2 = (undefined4 *)(iVar3 + -8);
      iVar3 = iVar3 + -8;
      iVar4 = iVar4 + -1;
      FUN_0004e720(param_1,*puVar2,*puVar1);
    } while (0 < iVar4);
  }
  return;
}
