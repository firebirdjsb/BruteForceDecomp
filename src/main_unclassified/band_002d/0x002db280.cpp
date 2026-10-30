/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E11E72BB0615E8A3CA71D1E763A5A044B3E767E2D185D7C09AAC5F6B3DAA7FC7
 * Entry: 0x002db280, Ghidra index: 10278, label: FUN_002db280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db280(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(in_EAX + 0x44)) {
    do {
      iVar1 = *(int *)(*(int *)(in_EAX + 0x34) + iVar7 * 4);
      *(undefined4 *)(*(int *)(in_EAX + 0x80) + iVar7 * 4) =
           *(undefined4 *)(*(int *)(in_EAX + 0x14) + iVar1 * 4);
      iVar2 = *(int *)(in_EAX + 0x40);
      iVar3 = *(int *)(in_EAX + 0x74);
      iVar4 = *(int *)(in_EAX + 0x10);
      iVar5 = *(int *)(in_EAX + 0x90);
      iVar6 = 0;
      if (0 < *(int *)(in_EAX + 0x44)) {
        do {
          *(undefined4 *)(iVar3 + iVar5 * iVar7 * 4 + iVar6 * 4) =
               *(undefined4 *)
                (iVar4 + iVar2 * iVar1 * 4 + *(int *)(*(int *)(in_EAX + 0x34) + iVar6 * 4) * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(in_EAX + 0x44));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_EAX + 0x44));
  }
  FUN_002dbb40();
  return;
}
