/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6631207FAE0EF8D4108BAA6FFA02A3915BB3466F33446E030F5973E36C24830D
 * Entry: 0x002dbb40, Ghidra index: 10289, label: FUN_002dbb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002dbb40(void)

{
  uint uVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(in_EAX + 0x28) == 0) {
    return true;
  }
  iVar5 = *(int *)(in_EAX + 0x28) + -1;
  while (-1 < iVar5) {
    uVar1 = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x24) * iVar5 * 4;
    iVar3 = ((int)(uVar1 - (int)(uVar1 & 0xfffffff0)) >> 2) + *(int *)(in_EAX + 0x28);
    if (0 < iVar3) {
      puVar6 = (undefined4 *)(uVar1 & 0xfffffff0);
      for (uVar4 = (iVar3 - 1U & 0xfffffffc) + 4 & 0x3ffffffc; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    iVar5 = iVar5 + -1;
    *(undefined4 *)(uVar1 + 4 + iVar5 * 4) = 0x3f800000;
  }
  iVar5 = 1;
  if (1 < *(int *)(in_EAX + 0x28)) {
    do {
      FUN_002db8e0(in_EAX);
      iVar3 = FUN_002db860();
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = *(int *)(in_EAX + 0x28);
      while (iVar3 = iVar3 + -1, iVar5 <= iVar3) {
        fVar2 = *(float *)(*(int *)(in_EAX + 8) + (*(int *)(in_EAX + 0x24) * iVar3 + iVar5 + -1) * 4
                          );
        if (fVar2 != 0.0) {
          FUN_002db9b0(in_EAX,iVar5 + -1,iVar3,fVar2);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_EAX + 0x28));
  }
  iVar5 = FUN_002db860();
  return iVar5 != 0;
}
