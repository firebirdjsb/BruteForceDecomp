/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C90DCD4289A063DDBFECAA5C5195659D7FE3EF5B97C58AB0E46A1C03406B4889
 * Entry: 0x00201cb0, Ghidra index: 7266, label: FUN_00201cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00201cb0(char param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int unaff_ESI;
  uint uVar5;
  
  uVar3 = 0;
  if ((*param_5 == '\0') && (*param_2 == *param_3)) {
    if (param_1 == '\0') {
      iVar4 = 0;
      if (*(int *)(param_4 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 5;
      }
      FUN_0020be90(unaff_ESI + 0x94,iVar2);
      _param_1 = 0;
      iVar2 = 0;
      while ((iVar1 = *(int *)(param_4 + 4), iVar1 != 0 &&
             (_param_1 < (uint)(*(int *)(param_4 + 8) - iVar1 >> 5)))) {
        iVar1 = iVar1 + iVar4;
        FUN_000d6ac0(*(undefined4 *)(unaff_ESI + 0x10),*(int *)(unaff_ESI + 0x98) + iVar2,0);
        *(undefined4 *)(iVar2 + 8 + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 0x10 + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar2 + 0x14 + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0xc + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar2 + 0x1c + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar2 + 0x20 + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 0x18);
        _param_1 = _param_1 + 1;
        *(undefined4 *)(iVar2 + 0x18 + *(int *)(unaff_ESI + 0x98)) = *(undefined4 *)(iVar1 + 0x1c);
        iVar4 = iVar4 + 0x20;
        iVar2 = iVar2 + 0x24;
      }
      uVar3 = 1;
    }
    else {
      for (uVar5 = 0;
          (uVar3 = 0, *(int *)(unaff_ESI + 0x98) != 0 &&
          (uVar5 < (uint)((*(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0x98)) / 0x24)));
          uVar5 = uVar5 + 1) {
        FUN_0020c010();
      }
    }
    *param_5 = '\x01';
  }
  return uVar3;
}
