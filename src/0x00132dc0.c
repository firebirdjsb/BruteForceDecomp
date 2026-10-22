/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A80FBCA47D5FCC040C5D808B5ACEBABD33E3684AED766E7E58037278EB94C951
 * Entry: 0x00132dc0, Ghidra index: 3865, label: FUN_00132dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00132dc0(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  
  if (-*(int *)(unaff_ESI + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar3 = *(int *)(unaff_ESI + 0x14) + in_EAX;
    if (uVar3 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_ESI + 0x18) < uVar3) {
      FUN_0001f730(uVar3,*(undefined4 *)(unaff_ESI + 0x14));
    }
    else if (uVar3 == 0) {
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      if (0xf < *(uint *)(unaff_ESI + 0x18)) {
        **(undefined1 **)(unaff_ESI + 4) = 0;
        return;
      }
      *(undefined1 *)(unaff_ESI + 4) = 0;
      return;
    }
    if (uVar3 != 0) {
      if (*(uint *)(unaff_ESI + 0x18) < 0x10) {
        iVar2 = unaff_ESI + 4;
      }
      else {
        iVar2 = *(int *)(unaff_ESI + 4);
      }
      puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x14) + iVar2);
      for (uVar1 = in_EAX >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = in_EAX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = param_1;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)(unaff_ESI + 0x14) = uVar3;
      if (0xf < *(uint *)(unaff_ESI + 0x18)) {
        *(undefined1 *)(*(int *)(unaff_ESI + 4) + uVar3) = 0;
        return;
      }
      *(undefined1 *)(unaff_ESI + 4 + uVar3) = 0;
    }
  }
  return;
}
