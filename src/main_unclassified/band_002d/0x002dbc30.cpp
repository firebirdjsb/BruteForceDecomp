/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0439C0DF77584E0CE1D0C6027960CC108F365C468C91708B355C5DA96908AA1E
 * Entry: 0x002dbc30, Ghidra index: 10290, label: FUN_002dbc30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dbc30(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 0x28) + -1;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*(int *)(in_EAX + 0x20) + 4 + iVar1 * 4) =
         *(undefined4 *)(*(int *)(in_EAX + 0x14) + 4 + iVar1 * 4);
  }
  FUN_002dbf80();
  iVar1 = *(int *)(in_EAX + 0x28);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *(undefined4 *)
     (*(int *)(in_EAX + 8) + (*(int *)(in_EAX + 0x24) * iVar1 + *(int *)(in_EAX + 0x28)) * 4) =
         *(undefined4 *)(*(int *)(in_EAX + 0x1c) + iVar1 * 4);
  }
  iVar1 = *(int *)(in_EAX + 0x28);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *(undefined4 *)
     (*(int *)(in_EAX + 4) + (*(int *)(in_EAX + 0x24) * iVar1 + *(int *)(in_EAX + 0x28)) * 4) = 0;
  }
  uVar2 = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x24) * *(int *)(in_EAX + 0x28) * 4;
  puVar3 = (undefined4 *)(uVar2 & 0xfffffff0);
  iVar1 = ((int)(uVar2 - (int)puVar3) >> 2) + *(int *)(in_EAX + 0x28);
  if (0 < iVar1) {
    for (uVar2 = (iVar1 - 1U & 0xfffffffc) + 4 & 0x3ffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  *(undefined4 *)
   (*(int *)(in_EAX + 4) + (*(int *)(in_EAX + 0x24) + 1) * *(int *)(in_EAX + 0x28) * 4) = 0x3f800000
  ;
  iVar1 = *(int *)(in_EAX + 0x28);
  iVar4 = 0;
  *(int *)(in_EAX + 0x28) = iVar1 + 1;
  if (0 < iVar1) {
    iVar1 = *(int *)(in_EAX + 0x24) * iVar1 * 4;
    do {
      FUN_002db9b0(in_EAX,iVar4,*(int *)(in_EAX + 0x28) + -1,
                   *(undefined4 *)(*(int *)(in_EAX + 8) + iVar1));
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar4 < *(int *)(in_EAX + 0x28) + -1);
  }
  FUN_002db860();
  return;
}
