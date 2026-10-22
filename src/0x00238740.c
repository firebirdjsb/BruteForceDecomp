/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EDF0585FDFAC2DD82882E837DB37F1084EFED277262EF33A0031E09B7F90EAE
 * Entry: 0x00238740, Ghidra index: 7879, label: FUN_00238740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238740(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int local_c;
  
  puVar3 = *(undefined4 **)(unaff_ESI + 0x54);
  puVar6 = *(undefined4 **)(unaff_ESI + 0x58);
  iVar5 = 0;
  iVar4 = 0;
  puVar2 = puVar6;
  if (puVar6 < puVar3) {
    do {
      if ((*(byte *)(puVar2 + 3) & 1) == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      puVar2 = (undefined4 *)((int)puVar2 + *(int *)(puVar2[1] + 8));
    } while (puVar2 < *(undefined4 **)(unaff_ESI + 0x54));
    if ((iVar4 != 0) && (iVar5 == 0)) {
      *(undefined4 **)(unaff_ESI + 0x54) = puVar6;
      *(undefined4 *)(unaff_ESI + 0x58) = 0;
      return;
    }
  }
  iVar4 = (*(int *)(unaff_ESI + 0x4c) - (int)puVar6) + (int)puVar3;
  local_c = iVar4;
  if (puVar6 < puVar3) {
    do {
      piVar1 = (int *)puVar6[1];
      if ((*(byte *)(puVar6 + 3) & 1) == 0) {
        local_c = local_c - piVar1[2];
        (**(code **)(*piVar1 + 4))(local_c,puVar6,puVar6[2]);
      }
      else {
        iVar5 = puVar6[2];
        if ((*(byte *)(iVar5 + 0xc) & 1) == 0) {
          if (piVar1[3] == 0) {
            puVar3 = (undefined4 *)FUN_00238290();
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3[2] = iVar5;
            }
            *puVar3 = 0;
            if (*(undefined4 **)(unaff_ESI + 0x2c) == (undefined4 *)0x0) {
              puVar3[1] = 0;
              *(undefined4 **)(unaff_ESI + 0x28) = puVar3;
            }
            else {
              **(undefined4 **)(unaff_ESI + 0x2c) = puVar3;
              puVar3[1] = *(undefined4 *)(unaff_ESI + 0x2c);
            }
            *(undefined4 **)(unaff_ESI + 0x2c) = puVar3;
            piVar1[3] = (int)puVar3;
          }
          else {
            *(int *)(piVar1[3] + 8) = iVar5;
          }
        }
      }
      piVar1[1] = puVar6[2];
      puVar3 = (undefined4 *)*puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + piVar1[2]);
      (*(code *)*puVar3)(0);
    } while (puVar6 < *(undefined4 **)(unaff_ESI + 0x54));
  }
  for (; local_c != iVar4; local_c = local_c + iVar5) {
    piVar1 = *(int **)(local_c + 4);
    if ((*(uint *)(local_c + 0xc) >> 1 & 1) == 0) {
      iVar5 = *(int *)(unaff_ESI + 0x54) - piVar1[2];
      *(int *)(unaff_ESI + 0x54) = iVar5;
      iVar5 = (**(code **)(*piVar1 + 4))(iVar5,local_c,piVar1[1]);
    }
    else {
      iVar5 = *(int *)(unaff_ESI + 0x54) - piVar1[2];
      *(int *)(unaff_ESI + 0x54) = iVar5;
      iVar5 = (**(code **)(*piVar1 + 4))(iVar5,local_c,0);
      *(int *)(iVar5 + 8) = piVar1[1];
      *(int *)(piVar1[1] + 0x10) = iVar5;
    }
    piVar1[1] = iVar5;
    if (piVar1[3] == 0) {
      puVar3 = (undefined4 *)FUN_00238290();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[2] = iVar5;
      }
      *puVar3 = 0;
      if (*(undefined4 **)(unaff_ESI + 0x2c) == (undefined4 *)0x0) {
        puVar3[1] = 0;
        *(undefined4 **)(unaff_ESI + 0x28) = puVar3;
      }
      else {
        **(undefined4 **)(unaff_ESI + 0x2c) = puVar3;
        puVar3[1] = *(undefined4 *)(unaff_ESI + 0x2c);
      }
      *(undefined4 **)(unaff_ESI + 0x2c) = puVar3;
      piVar1[3] = (int)puVar3;
    }
    else {
      *(int *)(piVar1[3] + 8) = iVar5;
    }
    iVar5 = piVar1[2];
    (**(code **)*unaff_EBX)(0);
  }
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  return;
}
