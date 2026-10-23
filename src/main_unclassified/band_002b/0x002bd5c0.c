/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6ADF19D1F92C850D0A87EFE80D63BDC5B2A25964B7FD850FF86C7F316FA3AE3
 * Entry: 0x002bd5c0, Ghidra index: 9950, label: FUN_002bd5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd5c0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = (uint)*(ushort *)(in_EAX + 0xe);
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 0) {
      FUN_002be0e0();
      return;
    }
    iVar1 = *(int *)(*(int *)(in_EAX + 0x10) + uVar7 * 4);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x162);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x164) + uVar3 * 4);
      iVar4 = *(ushort *)(in_EAX + 0x22) - 1;
      if (-1 < iVar4) {
        puVar6 = (undefined4 *)(*(int *)(in_EAX + 0x24) + iVar4 * 4);
        do {
          if (*(int *)*puVar6 == iVar2) goto LAB_002bd67b;
          iVar4 = iVar4 + -1;
          puVar6 = puVar6 + -1;
        } while (-1 < iVar4);
      }
      piVar5 = (int *)FUN_002ea01d(0x18);
      piVar8 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        *(undefined2 *)((int)piVar5 + 6) = 0;
        *(undefined2 *)(piVar5 + 3) = 0;
        piVar5[2] = (int)(piVar5 + 4);
        *(undefined2 *)(piVar5 + 1) = 2;
        piVar8 = piVar5;
      }
      *piVar8 = iVar2;
      if (*(ushort *)(in_EAX + 0x20) <= *(ushort *)(in_EAX + 0x22)) {
        FUN_002ccf80();
      }
      *(int **)(*(int *)(in_EAX + 0x24) + (uint)*(ushort *)(in_EAX + 0x22) * 4) = piVar8;
      *(short *)(in_EAX + 0x22) = *(short *)(in_EAX + 0x22) + 1;
LAB_002bd67b:
      iVar4 = *(ushort *)(in_EAX + 0x22) - 1;
      if (-1 < iVar4) {
        puVar6 = (undefined4 *)(*(int *)(in_EAX + 0x24) + iVar4 * 4);
        do {
          if (*(int *)*puVar6 == iVar2) break;
          iVar4 = iVar4 + -1;
          puVar6 = puVar6 + -1;
        } while (-1 < iVar4);
      }
      iVar2 = *(int *)(*(int *)(in_EAX + 0x24) + iVar4 * 4);
      if (*(ushort *)(iVar2 + 4) <= *(ushort *)(iVar2 + 6)) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 6) * 4) = iVar1;
      *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
    }
  } while( true );
}
