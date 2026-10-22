/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C75F765DC2F4FF1DA95C4AF1CD2FBEB6D1828EEE6DE7B69808D18F4EDE2127B2
 * Entry: 0x0003da40, Ghidra index: 458, label: FUN_0003da40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003da40(float param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  
  while( true ) {
    iVar1 = *(int *)(in_ECX + 0x10);
    fVar2 = 0.0;
    if (iVar1 != 0) {
      uVar3 = *(int *)(in_ECX + 0xc) / 2;
      if (*(uint *)(in_ECX + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(in_ECX + 8);
      }
      fVar2 = param_1 - *(float *)(*(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) +
                                  (*(int *)(in_ECX + 0xc) % 2) * 8);
    }
    if (fVar2 <= *(float *)(in_ECX + 0x14)) break;
    if (iVar1 != 0) {
      uVar3 = *(int *)(in_ECX + 0xc) + 1;
      uVar4 = *(int *)(in_ECX + 8) * 2;
      *(uint *)(in_ECX + 0xc) = uVar3;
      if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
      *(int *)(in_ECX + 0x10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
    }
  }
  return;
}
