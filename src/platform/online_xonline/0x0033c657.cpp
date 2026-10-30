/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E57BA5916A813B024FFB1CF87F2B0920A4F5DD4802FC5F293C9B5D160DD1F8F
 * Entry: 0x0033c657, Ghidra index: 12557, label: FUN_0033c657
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033c657(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar3 = iVar1 + 0x84c;
  *(int *)(in_ECX + 0x18) = iVar3;
  iVar2 = *(int *)(iVar1 + 0x10);
  FUN_0033bf88(*(undefined4 *)(iVar1 + 0xc),0,iVar2 + -1);
  FUN_0033ee35(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc),iVar2 << 9,0,0,
               *(undefined4 *)(iVar1 + 0x8b8),iVar3);
  iVar3 = FUN_0033edd5(iVar3,0);
  if (iVar3 < 0) {
    FUN_0033bd35();
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 1;
    *(int *)(in_ECX + 0x2c) = iVar3;
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = 3;
  }
  return iVar3;
}
