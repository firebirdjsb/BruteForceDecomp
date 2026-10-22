/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 015C375DD88F12103C126CB41EC2E7D34C106FB5A49881F1A6554A51B1CA1EF0
 * Entry: 0x000d0890, Ghidra index: 2579, label: FUN_000d0890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0890(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  int local_8;
  
  if (*(int *)(unaff_EDI + 0x34) != 0) {
    FUN_000d0680(unaff_EDI);
    *(undefined4 *)(unaff_EDI + 0x34) = 0;
    if (*(int *)(unaff_EDI + 0x40) == -1) {
      puVar9 = *(undefined4 **)(unaff_EDI + 0x2c);
      while (puVar6 = puVar9, puVar6 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)*puVar6;
        if (*(int *)((uint)*(ushort *)(puVar6 + 2) * 0x10 + 0xc + *(int *)(unaff_EDI + 0x14)) == 0)
        {
          puVar5 = (undefined4 *)puVar6[1];
          if (puVar5 == (undefined4 *)0x0) {
            *(undefined4 **)(unaff_EDI + 0x2c) = puVar9;
          }
          else {
            *puVar5 = puVar9;
          }
          if (puVar9 == (undefined4 *)0x0) {
            *(undefined4 **)(unaff_EDI + 0x30) = puVar5;
          }
          else {
            puVar9[1] = puVar5;
          }
          *puVar6 = 0;
          if (*(undefined4 **)(unaff_EDI + 0x24) == (undefined4 *)0x0) {
            puVar6[1] = 0;
            *(undefined4 **)(unaff_EDI + 0x20) = puVar6;
            *(undefined4 **)(unaff_EDI + 0x24) = puVar6;
          }
          else {
            **(undefined4 **)(unaff_EDI + 0x24) = puVar6;
            puVar6[1] = *(undefined4 *)(unaff_EDI + 0x24);
            *(undefined4 **)(unaff_EDI + 0x24) = puVar6;
          }
        }
      }
    }
  }
  iVar7 = *(int *)(*(int *)(unaff_EDI + 0x38) + 0xa40);
  if (iVar7 == 0) {
    iVar7 = *(int *)(unaff_EDI + 0x40) + 1;
    *(int *)(unaff_EDI + 0x40) = iVar7;
    if (iVar7 == 0x1e) {
      *(undefined4 *)(unaff_EDI + 0x40) = 0xffffffff;
    }
  }
  else {
    piVar1 = *(int **)(iVar7 + 0x20);
    iVar7 = piVar1[1] * *piVar1;
    if (0 < iVar7) {
      iVar8 = 0;
      local_8 = iVar7;
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x38) + 0xa40) + 0x18);
        iVar3 = *(int *)(iVar2 + 0x18 + iVar8);
        *(undefined4 *)(iVar2 + iVar8 + 0x24) = 0;
        FUN_000d0680(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x204));
        iVar8 = iVar8 + 0x40;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    iVar8 = *(int *)(unaff_EDI + 0x40);
    if ((-1 < iVar8) && (iVar8 < iVar7)) {
      puVar9 = (undefined4 *)
               (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x38) + 0xa40) + 0x18) + 0x1c + iVar8 * 0x40)
      ;
      puVar6 = (undefined4 *)*puVar9;
      while (puVar5 = puVar6, puVar5 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)*puVar5;
        if (*(int *)((uint)*(ushort *)(puVar5 + 2) * 0x10 + 0xc + *(int *)(unaff_EDI + 0x14)) == 0)
        {
          puVar4 = (undefined4 *)puVar5[1];
          if (puVar4 == (undefined4 *)0x0) {
            *puVar9 = puVar6;
          }
          else {
            *puVar4 = puVar6;
          }
          if (puVar6 == (undefined4 *)0x0) {
            puVar9[1] = puVar4;
          }
          else {
            puVar6[1] = puVar4;
          }
          *puVar5 = 0;
          if (*(undefined4 **)(unaff_EDI + 0x24) == (undefined4 *)0x0) {
            puVar5[1] = 0;
            *(undefined4 **)(unaff_EDI + 0x20) = puVar5;
            *(undefined4 **)(unaff_EDI + 0x24) = puVar5;
          }
          else {
            **(undefined4 **)(unaff_EDI + 0x24) = puVar5;
            puVar5[1] = *(undefined4 *)(unaff_EDI + 0x24);
            *(undefined4 **)(unaff_EDI + 0x24) = puVar5;
          }
        }
      }
    }
    iVar8 = *(int *)(unaff_EDI + 0x40) + 1;
    *(int *)(unaff_EDI + 0x40) = iVar8;
    if (iVar8 == iVar7) {
      *(undefined4 *)(unaff_EDI + 0x40) = 0xffffffff;
    }
    puVar9 = *(undefined4 **)(*(int *)(unaff_EDI + 0x38) + 0x4c);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)*puVar9;
    }
    puVar6 = *(undefined4 **)(*(int *)(unaff_EDI + 0x38) + 0x4c);
    for (; puVar9 != puVar6; puVar9 = (undefined4 *)*puVar9) {
      if (puVar9[2] != 0) {
        FUN_00155e20(puVar9[2],param_1);
      }
    }
  }
  if (0x7f0f0f0f < *(int *)(unaff_EDI + 0x3c)) {
    puVar9 = *(undefined4 **)(*(int *)(unaff_EDI + 0x38) + 0x28);
    puVar6 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar9;
    }
    puVar9 = *(undefined4 **)(*(int *)(unaff_EDI + 0x38) + 0x28);
    for (; puVar6 != puVar9; puVar6 = (undefined4 *)*puVar6) {
      if (puVar6[2] != 0) {
        *(undefined4 *)(puVar6[2] + 0x18) = 0xffffffff;
      }
    }
    *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  }
  return;
}
