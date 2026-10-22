/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 276A1DE77FB8A8DCBEB9B4270C13E1AB969A037FE562EC4B7174A38B0DA2480F
 * Entry: 0x002e0890, Ghidra index: 10357, label: FUN_002e0890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0890(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x124) != 0) {
    iVar2 = 0;
    while( true ) {
      piVar1 = (int *)FUN_002e35c0(&param_1);
      if (*(int *)(*(int *)(in_ECX + 0x128) + 0x28 + iVar2) == *piVar1) break;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x7c8;
      if (*(uint *)(in_ECX + 0x124) <= uVar3) {
        return 0;
      }
    }
    *param_2 = uVar3 * 0x7c8 + *(int *)(in_ECX + 0x128);
  }
  return 0;
}
