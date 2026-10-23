/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 126D4F043E5E43BD9DD01F4C179506AC5B7AC93D2923BBC8483A2337864A815D
 * Entry: 0x0008a560, Ghidra index: 1659, label: FUN_0008a560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0008a560(int *param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  /* x86 0x0008A5A3 writes one flag byte to [ESP+0x10],
   * 0x0008A6CF writes 1 to that same byte, and 0x0008A70E
   * returns its low byte in AL. The original stack slot previously
   * held the incoming pointer, copied to EBX at 0x0008A58E.
   * No following full-word read of this recycled slot was observed. */
  uint8_t status_low_byte;
  int in_ECX;
  
  piVar2 = param_1;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    iVar4 = FUN_000120f0();
    if (iVar4 != 0) {
      uVar5 = FUN_000120f0();
      piVar6 = (int *)(uVar5 & -(uint)((*(byte *)(uVar5 + 0x26) & 0x40) != 0));
      goto LAB_0008a58e;
    }
  }
  piVar6 = (int *)0x0;
LAB_0008a58e:
  if (piVar6 == param_1) {
    return 1;
  }
  status_low_byte = 0;
  if (*(int *)(in_ECX + 0x28) == 0) {
    return 0;
  }
  iVar4 = *(int *)(in_ECX + 0x10);
  if ((iVar4 != 0) && (*(int *)(in_ECX + 0x18) != iVar4)) {
    FUN_0008f6a0(iVar4);
  }
  iVar4 = *(int *)(in_ECX + 0x10);
  if (iVar4 != 0) {
    if ((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(*(int *)(in_ECX + 0x24) + 0x10) != 0)) {
      FUN_0008f6a0(0);
    }
    bVar1 = *(byte *)(iVar4 + 0x834);
    if (((bVar1 & 8) != 0) && (*(byte *)(iVar4 + 0x834) = bVar1 & 0xf7, (bVar1 & 5) == 0)) {
      FUN_00129530();
    }
    bVar1 = *(byte *)(iVar4 + 0x834);
    if (((bVar1 & 0x10) == 0) && (*(byte *)(iVar4 + 0x834) = bVar1 | 0x10, (bVar1 & 0xd) == 0)) {
      FUN_00129530();
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      FUN_0008f6a0(0);
    }
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    iVar4 = FUN_000120f0();
    if (iVar4 != 0) {
      uVar5 = FUN_000120f0();
      if ((uVar5 & -(uint)((*(byte *)(uVar5 + 0x26) & 0x40) != 0)) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x1c) + 0x30))(0);
        cVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x2c))(piVar2);
        if (cVar3 == '\0') {
          *(undefined1 *)(*(int *)(in_ECX + 0x1c) + 0x18) = 1;
          *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x1c) = 0;
          *(undefined4 *)(in_ECX + 0x1c) = 0;
        }
      }
    }
  }
  if (piVar2 == (int *)0x0) {
    if (*(int *)(in_ECX + 0x18) != 0) {
      FUN_00129410();
      FUN_0008a720(in_ECX,*(undefined4 *)(in_ECX + 0x18));
      if (*(int *)(in_ECX + 0x18) != 0) {
        FUN_0008f6a0(0);
      }
    }
  }
  else {
    if (*(int *)(in_ECX + 0x1c) == 0) {
      uVar7 = (**(code **)(*piVar2 + 0x150))();
      *(undefined4 *)(in_ECX + 0x1c) = uVar7;
    }
    if (*(int *)(in_ECX + 0x1c) != 0) {
      FUN_000de540(*(int *)(in_ECX + 0x1c));
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x30))(piVar2);
      *(int *)(*(int *)(in_ECX + 0x1c) + 0x1c) = in_ECX;
      FUN_00145060();
      status_low_byte = 1;
    }
  }
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + 0xbec) + 0x1c))();
  return status_low_byte;
}
