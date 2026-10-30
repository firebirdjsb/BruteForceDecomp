/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CF730DC0A299A21E5A03B28725E8F99D264C99EC5813782B3515AD9877F2FCD
 * Entry: 0x00077220, Ghidra index: 1393, label: FUN_00077220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00077220(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 0xc) + -1;
  uVar3 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  iVar2 = uVar3 * -4;
  if (*(uint *)(in_ECX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_ECX + 8);
  }
  return *(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) + (iVar1 + iVar2) * 4;
}
