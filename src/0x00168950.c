/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2844BED63B5070A2A1D68883B5F81CB340185BD35BA8452D43016525F75ED5D
 * Entry: 0x00168950, Ghidra index: 4740, label: FUN_00168950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00168950(void)

{
  bool bVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined4 local_4;
  
  iVar3 = 0;
  *(int *)(in_EAX + 0x2c) = in_ECX;
  if (0 < in_ECX) {
    do {
      *(undefined4 *)(*(int *)(in_EAX + 0x1c) + iVar3 * 4) = 0;
      *(undefined4 *)(*(int *)(in_EAX + 0x7c) + iVar3 * 4) =
           *(undefined4 *)(*(int *)(in_EAX + 0xc) + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_EAX + 0x2c));
  }
  *(undefined4 *)(in_EAX + 0x40) = 0;
  *(undefined4 *)(in_EAX + 0x54) = 0;
  local_4 = 0;
  while( true ) {
    bVar1 = false;
    iVar3 = 0;
    bVar2 = false;
    if (0 < *(int *)(in_EAX + 0x2c)) {
      do {
        bVar1 = bVar2;
        if (ABS(*(float *)(*(int *)(in_EAX + 0x7c) + iVar3 * 4)) < 0.001) {
          *(undefined4 *)(*(int *)(in_EAX + 0x7c) + iVar3 * 4) = 0;
        }
        if (*(float *)(*(int *)(in_EAX + 0x7c) + iVar3 * 4) < 0.0) {
          bVar1 = true;
          uVar4 = FUN_00168e60(iVar3);
          if ((char)uVar4 == '\0') goto LAB_001689fe;
        }
        iVar3 = iVar3 + 1;
        bVar2 = bVar1;
      } while (iVar3 < *(int *)(in_EAX + 0x2c));
    }
    uVar4 = local_4 + 1;
    if (0x20 < (int)uVar4) break;
    local_4 = uVar4;
    if (!bVar1) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
LAB_001689fe:
  return uVar4 & 0xffffff00;
}
