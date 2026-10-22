/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E468DB18B414B3750F6A3D51198CBAC62AAD59ECFB83C5330B7F8008D8405FA5
 * Entry: 0x0027d110, Ghidra index: 8999, label: FUN_0027d110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027d110(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  
  iVar4 = *param_1;
  iVar9 = ((int *)param_1[2])[3];
  iVar7 = *(int *)param_1[2];
  iVar8 = -1;
  iVar3 = 0;
  *(undefined4 *)(unaff_ESI + 0x1448) = 0;
  *(undefined4 *)(unaff_ESI + 0x144c) = 0x23d;
  if (0 < iVar9) {
    do {
      if (*(short *)(iVar4 + iVar3 * 4) == 0) {
        *(undefined2 *)(iVar4 + 2 + iVar3 * 4) = 0;
      }
      else {
        iVar8 = *(int *)(unaff_ESI + 0x1448) + 1;
        *(int *)(unaff_ESI + 0x1448) = iVar8;
        *(int *)(unaff_ESI + 0xb54 + iVar8 * 4) = iVar3;
        *(undefined1 *)(iVar3 + 0x1450 + unaff_ESI) = 0;
        iVar8 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar9);
  }
  iVar3 = *(int *)(unaff_ESI + 0x1448);
  while (iVar3 < 2) {
    if (iVar8 < 2) {
      iVar3 = iVar8 + 1;
      iVar8 = iVar3;
    }
    else {
      iVar3 = 0;
    }
    iVar6 = *(int *)(unaff_ESI + 0x1448) + 1;
    *(int *)(unaff_ESI + 0x1448) = iVar6;
    *(int *)(unaff_ESI + 0xb54 + iVar6 * 4) = iVar3;
    *(undefined2 *)(iVar4 + iVar3 * 4) = 1;
    *(undefined1 *)(unaff_ESI + 0x1450 + iVar3) = 0;
    *(int *)(unaff_ESI + 0x16a0) = *(int *)(unaff_ESI + 0x16a0) + -1;
    if (iVar7 != 0) {
      *(int *)(unaff_ESI + 0x16a4) =
           *(int *)(unaff_ESI + 0x16a4) - (uint)*(ushort *)(iVar7 + 2 + iVar3 * 4);
    }
    iVar3 = *(int *)(unaff_ESI + 0x1448);
  }
  param_1[1] = iVar8;
  for (iVar7 = *(int *)(unaff_ESI + 0x1448) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_0027cdb0(iVar7);
  }
  do {
    uVar2 = *(undefined4 *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x1448) * 4);
    iVar7 = *(int *)(unaff_ESI + 0xb58);
    *(int *)(unaff_ESI + 0x1448) = *(int *)(unaff_ESI + 0x1448) + -1;
    *(undefined4 *)(unaff_ESI + 0xb58) = uVar2;
    FUN_0027cdb0(1);
    iVar8 = *(int *)(unaff_ESI + 0xb58);
    iVar3 = *(int *)(unaff_ESI + 0x144c) + -1;
    *(int *)(unaff_ESI + 0x144c) = iVar3;
    *(int *)(unaff_ESI + 0xb54 + iVar3 * 4) = iVar7;
    iVar3 = *(int *)(unaff_ESI + 0x144c) + -1;
    *(int *)(unaff_ESI + 0x144c) = iVar3;
    *(int *)(unaff_ESI + 0xb54 + iVar3 * 4) = iVar8;
    *(short *)(iVar4 + iVar9 * 4) = *(short *)(iVar4 + iVar8 * 4) + *(short *)(iVar4 + iVar7 * 4);
    bVar5 = *(byte *)(unaff_ESI + 0x1450 + iVar8);
    bVar1 = *(byte *)(unaff_ESI + 0x1450 + iVar7);
    if (bVar5 <= bVar1) {
      bVar5 = bVar1;
    }
    *(byte *)(unaff_ESI + 0x1450 + iVar9) = bVar5 + 1;
    *(short *)(iVar4 + 2 + iVar8 * 4) = (short)iVar9;
    *(short *)(iVar4 + 2 + iVar7 * 4) = (short)iVar9;
    *(int *)(unaff_ESI + 0xb58) = iVar9;
    iVar9 = iVar9 + 1;
    FUN_0027cdb0(1);
  } while (1 < *(int *)(unaff_ESI + 0x1448));
  iVar4 = *(int *)(unaff_ESI + 0x144c) + -1;
  *(int *)(unaff_ESI + 0x144c) = iVar4;
  *(undefined4 *)(unaff_ESI + 0xb54 + iVar4 * 4) = *(undefined4 *)(unaff_ESI + 0xb58);
  FUN_0027ce80();
  FUN_0027d090();
  return;
}
