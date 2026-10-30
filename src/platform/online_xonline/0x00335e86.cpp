/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47634B0AAC475F1D35C46CD1B62D5A64E60409DEE5C2CC2C088D325E8A400924
 * Entry: 0x00335e86, Ghidra index: 12448, label: FUN_00335e86
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00335e86(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  FUN_003355e1(param_1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
LAB_00335f7f:
    iVar3 = FUN_003354e5(param_1);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
LAB_00336055:
      iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8));
      if (iVar3 == 0x1500f0) {
        piVar4 = (int *)(param_1 + 0x1c);
        *piVar4 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        puVar2 = *(undefined4 **)(param_1 + 0x30);
        iVar3 = *(int *)(param_1 + 0x14) * 0xb8;
        *(undefined4 **)(param_1 + 0x24) = puVar2;
        *(undefined4 **)(param_1 + 0x2c) = puVar2;
        *(undefined4 *)(param_1 + 0x28) = 0xfd0;
        *puVar2 = *(undefined4 *)(iVar3 + 0x12d0 + in_ECX);
        puVar2[1] = *(undefined4 *)(iVar3 + 0x12d4 + in_ECX);
        iVar3 = FUN_0033d2ef(*(undefined4 *)(in_ECX + 0x15c4),piVar4);
        if (iVar3 < 0) goto LAB_003360e2;
        if ((*piVar4 == 0) || (*(int *)(param_1 + 0x20) == 0)) {
          XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar3 = FUN_0033d73c(*(undefined4 *)(in_ECX + 0x15c4),*(undefined4 *)(in_ECX + 0x15c8),
                               piVar4);
          if (iVar3 < 0) goto LAB_003360e2;
        }
        *(undefined4 *)(param_1 + 0x10) = 2;
        goto LAB_00336102;
      }
    }
    else {
      XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
    }
  }
  else {
    if (iVar3 == 1) goto LAB_00336055;
    if (iVar3 == 2) {
      iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8));
      if (iVar3 != 0x1500f0) goto LAB_00336104;
      iVar3 = *(int *)(param_1 + 0x30);
      while (*(int *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x130c + in_ECX) != 0) {
        piVar4 = (int *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x130c + in_ECX);
        piVar1 = (int *)*piVar4;
        *piVar4 = piVar1[4];
        if (*piVar1 == 0) {
          FUN_00335a85(iVar3,piVar1[2],piVar1[3]);
        }
        else {
          FUN_003359fb(iVar3,piVar1[2],piVar1[3]);
        }
        thunk_FUN_0033e986(piVar1,0x8035);
      }
      iVar5 = FUN_00335b70(iVar3);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      iVar3 = FUN_0033def3(*(undefined4 *)(in_ECX + 0x15c4),*(undefined4 *)(in_ECX + 0x15c8),
                           *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),1);
      if (iVar3 < 0) goto LAB_003360e2;
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    else if (iVar3 == 3) {
LAB_00335f12:
      iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8));
      if (iVar3 != 0x1500f0) goto LAB_00336104;
      FUN_0033554d(param_1);
      *(undefined4 *)(param_1 + 0x10) = 7;
    }
    else if (iVar3 == 7) {
      uVar6 = 0;
      piVar4 = (int *)(in_ECX + 0x130c);
      do {
        if (*piVar4 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(uint *)(param_1 + 0x14) = uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 0x2e;
      } while (uVar6 < 4);
      if (uVar6 < 4) goto LAB_00335f7f;
    }
    else if (iVar3 == 10) {
      iVar3 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8));
      if (iVar3 != 0x1500f0) goto LAB_00336104;
      uVar6 = 0;
      piVar4 = (int *)(in_ECX + 0x130c);
      do {
        if (*piVar4 != 0) {
          *(uint *)(param_1 + 0x14) = uVar6;
          *(undefined4 *)(param_1 + 0x10) = 1;
          XAPILIB__SetEvent(*(undefined4 *)(param_1 + 8));
          goto LAB_00336108;
        }
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 0x2e;
      } while (uVar6 < 4);
      iVar3 = FUN_00335527(param_1);
      if (iVar3 < 0) goto LAB_003360e2;
      *(undefined4 *)(param_1 + 0x10) = 3;
      goto LAB_00335f12;
    }
LAB_00336102:
    iVar3 = 0;
  }
LAB_00336104:
  if (-1 < iVar3) {
LAB_00336108:
    if (((*(int *)(param_1 + 0x18) != 0) || (*(int *)(param_1 + 0x10) != 7)) &&
       (*(int *)(param_1 + 0x10) != 0xc)) {
      return 0;
    }
    return 0x1500f2;
  }
LAB_003360e2:
  FUN_003356c8(param_1);
  return iVar3;
}
