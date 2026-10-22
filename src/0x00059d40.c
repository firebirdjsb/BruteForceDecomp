/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8B5078C33FD7939CF8002F8AF11047CA08989DDA656B9DD3647C503829B2B8C
 * Entry: 0x00059d40, Ghidra index: 900, label: FUN_00059d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00059d40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puStack_2c;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined1 auStack_14 [4];
  int iStack_10;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_002ea01d(0x38);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00059b60();
    }
    *(undefined4 *)(iVar3 + 4) = 0xf8659c26;
    *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 0x1000;
    (**(code **)(*(int *)(iVar3 + 8) + 8))(param_1);
    iVar1 = *(int *)(param_1 + 0xc);
    puVar2 = *(undefined4 **)(iVar1 + 0x30);
    if (puVar2 == (undefined4 *)0x0) {
      puStack_2c = (undefined4 *)0x0;
    }
    else {
      puStack_2c = (undefined4 *)*puVar2;
    }
    if (puStack_2c != puVar2) {
      do {
        iVar6 = puStack_2c[3];
        if (iVar6 != 0) {
          iStack_18 = 0;
          FUN_0008f6a0(iVar3);
          iVar5 = *(int *)(iVar6 + 0x30);
          iVar4 = FUN_000e1910(iVar6 + 0x2c,iVar5,*(undefined4 *)(iVar5 + 4),auStack_1c);
          FUN_000389d0();
          *(int *)(iVar5 + 4) = iVar4;
          **(int **)(iVar4 + 4) = iVar4;
          if (iStack_18 != 0) {
            FUN_0008f6e0();
          }
          iStack_10 = 0;
          FUN_0008f6a0(iVar6);
          iVar6 = *(int *)(iVar3 + 0x30);
          iVar5 = FUN_000e1910(iVar3 + 0x2c,iVar6,*(undefined4 *)(iVar6 + 4),auStack_14);
          FUN_000389d0();
          *(int *)(iVar6 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          if (iStack_10 != 0) {
            FUN_0008f6e0();
          }
        }
        puStack_2c = (undefined4 *)*puStack_2c;
      } while (puStack_2c != *(undefined4 **)(iVar1 + 0x30));
    }
    iStack_10 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0008f6a0(*(int *)(param_1 + 0xc));
    }
    iVar1 = *(int *)(iVar3 + 0x30);
    iVar6 = FUN_000e1910(iVar3 + 0x2c,iVar1,*(undefined4 *)(iVar1 + 4),auStack_14);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    if (iStack_10 != 0) {
      FUN_0008f6e0();
    }
    iStack_10 = 0;
    FUN_0008f6a0(iVar3);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x30);
    iVar6 = FUN_000e1910(*(int *)(param_1 + 0xc) + 0x2c,iVar1,*(undefined4 *)(iVar1 + 4),auStack_14)
    ;
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    if (iStack_10 != 0) {
      FUN_0008f6e0();
    }
    return iVar3;
  }
  return 0;
}
