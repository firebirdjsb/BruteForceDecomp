/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D4034A9651D5F6B5EFDE218799CFDDEDE7132A5EA00B421DE3520B6889F2CEE
 * Entry: 0x003546c2, Ghidra index: 13112, label: FUN_003546c2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003546c2(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  int local_c;
  
  local_c = 0;
  if (param_2 != *(int *)(param_1 + 0x9c) && -1 < param_2 - *(int *)(param_1 + 0x9c)) {
    *(int *)(param_1 + 0x9c) = param_2;
    if ((*(int *)(param_1 + 0xe4) != 0) &&
       (param_2 != *(int *)(param_1 + 0xe0) && -1 < param_2 - *(int *)(param_1 + 0xe0))) {
      FUN_003531c0(param_1);
    }
    piVar1 = (int *)(param_1 + 0x34);
    uVar5 = -(uint)((int *)*piVar1 != piVar1) & (uint)((int *)*piVar1 + -5);
    while (((uVar5 != 0 && (*(short *)(uVar5 + 0x30) != 0)) &&
           (-1 < param_2 - *(int *)(uVar5 + 0x2c)))) {
      iVar7 = *(int *)*piVar1;
      piVar3 = (int *)((int *)*piVar1)[1];
      piVar4 = *(int **)(uVar5 + 0x14);
      *piVar3 = iVar7;
      *(int **)(iVar7 + 4) = piVar3;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(int *)(uVar5 + 0x20);
      FUN_003455a6(uVar5);
      local_c = local_c + 1;
      uVar5 = -(uint)(piVar4 != piVar1) & (uint)(piVar4 + -5);
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc) >> 10 & 1;
  if (uVar5 == 0) {
    uVar8 = *(uint *)(param_1 + 0xb4);
    iVar7 = *(int *)(param_1 + 0xbc);
    if (uVar8 < *(uint *)(param_1 + 0xb8)) {
      uVar8 = uVar8 + iVar7;
      *(uint *)(param_1 + 0xb4) = uVar8;
    }
    else {
      uVar8 = (uint)(iVar7 * iVar7) / uVar8;
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + uVar8;
      uVar8 = *(uint *)(param_1 + 0xb4);
    }
    uVar6 = 0xffff;
    if (0xffff < uVar8) goto LAB_003547d5;
LAB_003547db:
    if (local_c != 0) {
      FUN_00345541(0xfffffdff,0);
      FUN_00345541(0xfffffbff,0);
      *(undefined1 *)(param_1 + 0x7f) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0xa0)) {
        piVar1 = *(int **)(param_1 + 0x34);
        uVar5 = *(int *)((-(uint)(piVar1 != (int *)(param_1 + 0x34)) & (uint)(piVar1 + -5)) + 0x34)
                + *(int *)(param_1 + 0xdc);
        if (*(uint *)(in_ECX + 0x1d8) < uVar5) {
          uVar6 = FUN_0034c3bf(param_1 + 0x6c,uVar5 - *(uint *)(in_ECX + 0x1d8));
          *(undefined4 *)(param_1 + 0x90) = uVar6;
        }
        else {
          FUN_00354023(param_1);
        }
      }
      if (*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x58)) {
        iVar7 = *(int *)(param_1 + 0x30);
        if (iVar7 == 0) {
          if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
            KeSetEvent(param_1 + 0x10,1,0);
          }
        }
        else {
          uVar6 = FUN_00354523(param_1,iVar7,0x40000);
          *(undefined4 *)(*(int *)(iVar7 + 4) + 8) = *(undefined4 *)(iVar7 + 0x10);
          FUN_00345e88(param_1,iVar7,uVar6);
        }
      }
      goto LAB_0035490f;
    }
  }
  else {
    if (local_c != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0xb8);
LAB_003547d5:
      *(undefined4 *)(param_1 + 0xb4) = uVar6;
      goto LAB_003547db;
    }
    puVar2 = (uint *)(param_1 + 0xb4);
    *puVar2 = *puVar2 + *(int *)(param_1 + 0xbc);
    if (0xffff < *puVar2) {
      *puVar2 = 0xffff;
      goto LAB_003547db;
    }
  }
  if ((*(uint *)(param_1 + 0xc) & 0x200) == 0) {
    if (((*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0xa0)) && (uVar5 == 0)) &&
       (*(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7f) + '\x01',
       3 < *(byte *)(param_1 + 0x7f))) {
      FUN_00353be9(param_1);
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x34);
    uVar5 = -(uint)(piVar1 != (int *)(param_1 + 0x34)) & (uint)(piVar1 + -5);
    if ((-1 < param_2 - *(int *)(uVar5 + 0x28)) &&
       ((int)(*(byte *)(in_ECX + 0x33) - 1) <= (int)(uint)*(ushort *)(uVar5 + 0x30))) {
      *(ushort *)(uVar5 + 0x30) = *(ushort *)(uVar5 + 0x30) - 1;
    }
  }
LAB_0035490f:
  if (((*(byte *)(param_1 + 0xd) & 2) == 0) || (iVar7 = FUN_00353b88(param_1), iVar7 == 0)) {
    do {
      if (*(int *)(param_1 + 0x84) == 0) {
        return;
      }
      iVar7 = FUN_00353f2c(param_1);
    } while (iVar7 != 0);
  }
  return;
}
