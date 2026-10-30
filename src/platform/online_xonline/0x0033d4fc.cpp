/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38067311B07949E96929AD827C2C418204D967AD7B63FA480576D76A4682FD61
 * Entry: 0x0033d4fc, Ghidra index: 12582, label: FUN_0033d4fc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d4fc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  FUN_0033c806();
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar3 = iVar1 + 0x84c;
  *(int *)(in_ECX + 0x18) = iVar3;
  iVar2 = *(int *)(iVar1 + 0x10);
  FUN_0033bf88(*(undefined4 *)(iVar1 + 0xc),0,iVar2 + -1);
  FUN_0033ee35(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc),iVar2 << 9,0,0,
               *(undefined4 *)(iVar1 + 0x8b8),iVar3);
  iVar3 = FUN_0033edd5(iVar3,0);
  if (iVar3 < 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 1;
    *(int *)(in_ECX + 0x2c) = iVar3;
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = 3;
  }
  return;
}
