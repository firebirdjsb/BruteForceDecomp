/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCD82078856F2FD32706FCB0A73D17BBBBBAE1C4B11BC2EDCCFB73E49C30BC9F
 * Entry: 0x0022f2a0, Ghidra index: 7736, label: FUN_0022f2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f2a0(void)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(in_EAX + 0x1b0);
  cVar3 = '\x01';
  bVar2 = false;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 8) == 0) {
      if ((*(int *)(iVar6 + 0x10) == 0) ||
         (iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0xb0), *(int *)(*(int *)(iVar6 + 0xc) + 4) != 3)
         ) goto LAB_0022f2f0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x1d4);
    }
    if (iVar6 != 0) {
      cVar3 = FUN_00126c60(0,0);
      bVar2 = false;
    }
  }
LAB_0022f2f0:
  do {
    do {
      if ((((*(byte *)(in_EAX + 0x224) & 2) == 0) ||
          (*(float *)(in_EAX + 0x218) < 0.0 == (*(float *)(in_EAX + 0x218) == 0.0))) || (bVar2)) {
        return;
      }
      if ((0 < *(int *)(in_EAX + 0x28c)) && (*(float *)(*(int *)(in_EAX + 0x228) + 0xd8) == 0.0)) {
        FUN_0022e1d0(in_EAX,in_EAX + 0x25c + *(int *)(in_EAX + 0x1fc) * 0xc);
        if ((*(byte *)(in_EAX + 0x225) & 2) != 0) {
          FUN_0022e1d0(in_EAX,in_EAX + 0x2e8);
        }
      }
      FUN_0022f0e0();
      if (*(int *)(in_EAX + 0x1f8) == 0) {
        cVar4 = FUN_0022fe00();
        if (cVar4 == '\0') {
          FUN_002327f0();
          bVar2 = true;
          goto LAB_0022f2f0;
        }
      }
      cVar4 = FUN_0022f1d0();
    } while (cVar4 == '\0');
    cVar4 = FUN_0022fe00();
    if ((cVar4 == '\0') && (0 < *(int *)(in_EAX + 0x1f8))) {
      *(int *)(in_EAX + 0x1f8) = *(int *)(in_EAX + 0x1f8) + -1;
    }
    cVar4 = FUN_0022f5e0();
    if ((*(int *)(in_EAX + 0x28c) < 1) || (*(float *)(*(int *)(in_EAX + 0x228) + 0xd8) != 0.0)) {
      FUN_0022f060();
      if ((*(byte *)(in_EAX + 0x224) & 0x10) != 0) {
        fVar1 = *(float *)(*(int *)(in_EAX + 0x228) + 0x164);
        *(byte *)(in_EAX + 0x225) = *(byte *)(in_EAX + 0x225) | 4;
        *(float *)(in_EAX + 0x208) = fVar1 + *(float *)(in_EAX + 0x208);
      }
      FUN_0022de10();
      FUN_00222c10(in_EAX + 0x1d0);
      FUN_002326e0(*(int *)(in_EAX + 0xc) + 0x3d4);
      FUN_0022f640();
      FUN_0022f690(in_EAX);
      FUN_0014a880();
      FUN_0014a880();
      iVar6 = *(int *)(*(int *)(in_EAX + 0x228) + 0x40);
      if (iVar6 == 0) {
        iVar5 = *(int *)(in_EAX + 8);
        iVar6 = *(int *)(iVar5 + 0xc64) + 8;
      }
      else {
        iVar5 = *(int *)(in_EAX + 8);
        if (iVar6 == 2) {
          iVar6 = *(int *)(iVar5 + 0xc64) + 5;
        }
        else {
          iVar6 = *(int *)(iVar5 + 0xc64) + 1;
        }
      }
      *(int *)(iVar5 + 0xc64) = iVar6;
    }
  } while (((cVar3 != '\x01') ||
           ((0 < *(int *)(in_EAX + 0x28c) && (*(float *)(*(int *)(in_EAX + 0x228) + 0xd8) == 0.0))))
          && (cVar4 != '\x01'));
  if (*(int *)(in_EAX + 0x184) == 0) {
    iVar6 = *(int *)(in_EAX + 0x1b0);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 8) == 0) {
        if ((*(int *)(iVar6 + 0x10) == 0) ||
           (iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0xb0),
           *(int *)(*(int *)(iVar6 + 0xc) + 4) != 3)) goto LAB_0022f546;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x1d4);
      }
      if (iVar6 != 0) {
        iVar6 = (**(code **)(**(int **)(*(int *)(iVar6 + 8) + 0xbec) + 0xc))(iVar6);
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != 0)) &&
           ((*(byte *)(*(int *)(iVar6 + 0x24) + 0x14) & 2) != 0)) goto LAB_0022f56d;
      }
    }
LAB_0022f546:
    if ((2 < *(int *)(*(int *)(in_EAX + 8) + 0xc6c)) ||
       (1.0 <= *(float *)(*(int *)(in_EAX + 8) + 0xc58))) goto LAB_0022f2f0;
  }
LAB_0022f56d:
  FUN_0022f170();
  goto LAB_0022f2f0;
}
