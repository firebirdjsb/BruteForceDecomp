/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 854F8703B0AA20C3DFEF7675E0462FB2B249BEEA92E2FD2F6345DC8DA4A5586E
 * Entry: 0x00238630, Ghidra index: 7877, label: FUN_00238630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238630(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_ESI;
  uint local_8;
  uint local_4;
  
  iVar1 = *(int *)(unaff_ESI + 0x38);
  puVar4 = &local_8;
  if (*(uint *)(unaff_ESI + 0x58) == 0) {
    for (iVar5 = *(int *)(unaff_ESI + 0x54); iVar5 != iVar1 + 0x14;
        iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 4) + 8)) {
      *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 1;
    }
    uVar2 = *(undefined4 *)(unaff_ESI + 0x54);
    *(int *)(unaff_ESI + 0x54) = iVar1 + 0x14;
    *(undefined4 *)(unaff_ESI + 0x58) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(*(int *)(unaff_ESI + 0x38) + 8);
    return;
  }
  uVar3 = *(int *)(iVar1 + 0x10) + 0x14;
  if (*(int *)(iVar1 + 0x10) == 0) {
    uVar3 = *(uint *)(unaff_ESI + 0x58);
  }
  local_8 = iVar1 + 0x14;
  for (; uVar3 != local_8; uVar3 = uVar3 + *(int *)(*(int *)(uVar3 + 4) + 8)) {
    *(uint *)(uVar3 + 0xc) = *(uint *)(uVar3 + 0xc) | 1;
  }
  local_4 = *(uint *)(unaff_ESI + 0x54);
  if (local_8 <= *(uint *)(unaff_ESI + 0x54)) {
    puVar4 = &local_4;
  }
  *(uint *)(unaff_ESI + 0x54) = *puVar4;
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(*(int *)(unaff_ESI + 0x38) + 8);
  return;
}
