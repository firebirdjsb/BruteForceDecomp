/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A94C31FB72EA29FE7DB28078B1E100368713DAF85BCBACAAB732F3238707300
 * Entry: 0x00145fa0, Ghidra index: 4206, label: FUN_00145fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145fa0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  uint uVar4;
  int unaff_ESI;
  int *piVar5;
  int iVar6;
  int local_4;
  
  *unaff_EBX = *(undefined4 *)(unaff_ESI + 0x128);
  unaff_EBX[1] = *(undefined4 *)(unaff_ESI + 300);
  unaff_EBX[5] = *(undefined4 *)(unaff_ESI + 0x158);
  unaff_EBX[6] = *(undefined4 *)(unaff_ESI + 0x15c);
  unaff_EBX[7] = *(undefined4 *)(unaff_ESI + 0x160);
  unaff_EBX[8] = *(undefined4 *)(unaff_ESI + 0x164);
  unaff_EBX[0xd] = *(undefined4 *)(unaff_ESI + 0x130);
  unaff_EBX[0xe] = *(undefined4 *)(unaff_ESI + 0x134);
  unaff_EBX[0xc] = *(undefined4 *)(unaff_ESI + 0x148);
  *(undefined1 *)((int)unaff_EBX + 0x71) = *(undefined1 *)(unaff_ESI + 0x13c);
  unaff_EBX[9] = *(undefined4 *)(unaff_ESI + 0x14c);
  unaff_EBX[10] = *(undefined4 *)(unaff_ESI + 0x150);
  unaff_EBX[0xb] = *(undefined4 *)(unaff_ESI + 0x154);
  unaff_EBX[2] = *(undefined4 *)(unaff_ESI + 0x138);
  unaff_EBX[3] = *(undefined4 *)(unaff_ESI + 0x140);
  unaff_EBX[4] = *(undefined4 *)(unaff_ESI + 0x144);
  unaff_EBX[0x17] = *(undefined4 *)(unaff_ESI + 0x17c);
  local_4 = 0;
  for (uVar4 = 0;
      (*(int *)(unaff_ESI + 0x170) != 0 &&
      (uVar4 < (uint)((*(int *)(unaff_ESI + 0x174) - *(int *)(unaff_ESI + 0x170)) / 0x1c)));
      uVar4 = uVar4 + 1) {
    iVar6 = *(int *)(*(int *)(unaff_ESI + 0x170) + local_4);
    piVar5 = (int *)(*(int *)(unaff_ESI + 0x170) + local_4);
    if ((iVar6 < 8) && (-1 < iVar6)) {
      piVar2 = (int *)FUN_002ea01d(0x1c);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
      }
      unaff_EBX[*piVar5 + 0xf] = piVar2;
      *piVar2 = *piVar5;
      piVar2[1] = piVar5[1];
      piVar2[2] = piVar5[2];
      piVar2[3] = piVar5[3];
      piVar2[4] = piVar5[4];
      piVar2[5] = piVar5[5];
      piVar2[6] = piVar5[6];
    }
    local_4 = local_4 + 0x1c;
  }
  unaff_EBX[0x1b] = *(undefined4 *)(unaff_ESI + 0x194);
  unaff_EBX[0x1a] = *(undefined4 *)(unaff_ESI + 400);
  if (*(int *)(unaff_ESI + 0x184) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(unaff_ESI + 0x188) - *(int *)(unaff_ESI + 0x184) >> 2;
  }
  unaff_EBX[0x19] = iVar6;
  piVar5 = (int *)thunk_FUN_002ea01d(iVar6 * 4 + 4);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = iVar6;
    piVar5 = piVar5 + 1;
    piVar2 = piVar5;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
    }
  }
  unaff_EBX[0x18] = piVar5;
  puVar3 = *(undefined4 **)(unaff_ESI + 0x184);
  puVar1 = *(undefined4 **)(unaff_ESI + 0x188);
  if (puVar3 == puVar1) {
    *(undefined1 *)(unaff_EBX + 0x1c) = *(undefined1 *)(unaff_ESI + 0x1a4);
    return;
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar6 + unaff_EBX[0x18]) = *puVar3;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + 4;
  } while (puVar3 != puVar1);
  *(undefined1 *)(unaff_EBX + 0x1c) = *(undefined1 *)(unaff_ESI + 0x1a4);
  return;
}
