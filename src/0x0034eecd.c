/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F92056428347940C16CD754313C523E6195EE63A50ED6C783A0BC11DE48758
 * Entry: 0x0034eecd, Ghidra index: 13030, label: FUN_0034eecd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034eecd(undefined4 param_1,int param_2,undefined2 param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  int *piVar6;
  short *psVar7;
  int *piVar8;
  bool bVar9;
  int local_44 [2];
  short local_3a [13];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  FUN_0034e276(&local_20);
  if (*(ushort *)(param_4 + 2) < 0x4e) {
    return;
  }
  if (param_5 < 0x4e) {
    return;
  }
  iVar2 = FUN_00347b83(param_4 + 0x12);
  if (iVar2 == 0) {
    return;
  }
  local_18 = *(int *)(iVar2 + 0xf0);
  if (local_18 == 0) {
    return;
  }
  iVar3 = FUN_0034c4a1(iVar2 + 8,0x10,param_4,0x42,param_4 + 0x4e,*(ushort *)(param_4 + 2) - 0x4e,
                       param_4 + 0x42,0xc);
  if (iVar3 == 0) {
    return;
  }
  FUN_00347c42(0,iVar2 + 0x18,0x18,param_4 + 6,(int *)(param_4 + 0x1a),0x28);
  if (*(int *)(param_4 + 0x3e) != 0) {
    return;
  }
  FUN_0034877b(local_44);
  iVar2 = 9;
  bVar9 = true;
  piVar4 = local_44;
  piVar6 = (int *)(param_4 + 0x1a);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar9);
  if (!bVar9) {
    if ((*(byte *)(param_4 + 0x12) & 0xc0) != 0) {
      return;
    }
    iVar2 = 3;
    bVar9 = true;
    psVar5 = local_3a;
    psVar7 = (short *)(param_4 + 0x24);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar9 = *psVar5 == *psVar7;
      psVar5 = psVar5 + 1;
      psVar7 = psVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      return;
    }
  }
  param_5 = *(int *)(local_18 + 0x38);
  local_c = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = *(int *)(local_8 + 0x1d8) + (uint)*(byte *)(local_8 + 0x44) * -5;
  piVar4 = (int *)(local_18 + 0x40);
  if ((*(byte *)(param_4 + 0x11) & 1) != 0) {
    if (param_5 == 0) {
      return;
    }
    do {
      if ((*(byte *)(param_4 + 0x10) <= *(byte *)((int)piVar4 + 0x2a)) &&
         ((short)piVar4[10] == *(short *)(param_4 + 0xe))) {
        iVar2 = 2;
        bVar9 = true;
        piVar6 = piVar4 + 8;
        piVar8 = (int *)(param_4 + 6);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar9 = *piVar6 == *piVar8;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          if (*(byte *)((int)piVar4 + 0x2a) != *(byte *)(param_4 + 0x10)) {
            return;
          }
          if (*(char *)((int)piVar4 + 0x2b) != '\x01') {
            return;
          }
          if ((uint)piVar4[2] < local_10) {
            return;
          }
          piVar4[6] = local_20;
          piVar4[7] = local_1c;
          *(undefined1 *)((int)piVar4 + 0x2b) = 2;
          goto LAB_0034f0ff;
        }
      }
      param_5 = param_5 + -1;
      piVar4 = piVar4 + 0xe;
      if (param_5 == 0) {
        return;
      }
    } while( true );
  }
  if (param_5 != 0) {
    do {
      if ((*(char *)((int)piVar4 + 0x2b) == '\x01') && ((uint)piVar4[2] < local_10)) {
        *(undefined1 *)((int)piVar4 + 0x2b) = 0;
      }
      if ((*(char *)((int)piVar4 + 0x2b) == '\0') &&
         ((local_c == (int *)0x0 || ((uint)piVar4[2] < (uint)local_c[2])))) {
        local_c = piVar4;
      }
      if ((short)piVar4[10] == *(short *)(param_4 + 0xe)) {
        iVar2 = 2;
        bVar9 = true;
        piVar6 = piVar4 + 8;
        piVar8 = (int *)(param_4 + 6);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar9 = *piVar6 == *piVar8;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          if (*(byte *)(param_4 + 0x10) <= *(byte *)((int)piVar4 + 0x2a)) {
            return;
          }
          if (*(char *)((int)piVar4 + 0x2b) == '\x01') {
            *(undefined1 *)((int)piVar4 + 0x2b) = 0;
          }
          if (*(char *)((int)piVar4 + 0x2b) == '\0') {
            local_14 = piVar4;
          }
        }
      }
      param_5 = param_5 + -1;
      piVar4 = piVar4 + 0xe;
    } while (param_5 != 0);
    piVar4 = local_14;
    if (local_14 != (int *)0x0) goto LAB_0034f0cf;
  }
  piVar4 = local_c;
  if (local_c == (int *)0x0) {
    return;
  }
LAB_0034f0cf:
  piVar4[8] = *(int *)(param_4 + 6);
  piVar4[9] = *(int *)(param_4 + 10);
  piVar4[2] = *(int *)(local_8 + 0x1d8);
  *(undefined2 *)(piVar4 + 10) = *(undefined2 *)(param_4 + 0xe);
  *(undefined1 *)((int)piVar4 + 0x2a) = *(undefined1 *)(param_4 + 0x10);
  if ((*(byte *)(param_4 + 0x11) & 2) == 0) {
    *(undefined1 *)((int)piVar4 + 0x2b) = 1;
    piVar4[4] = local_20;
    piVar4[5] = local_1c;
  }
  else {
    *(undefined1 *)((int)piVar4 + 0x2b) = 3;
LAB_0034f0ff:
    piVar4[0xb] = param_2;
    *(undefined2 *)(piVar4 + 0xc) = param_3;
    iVar2 = FUN_0034c841();
    *(undefined4 *)((int)piVar4 + 0x32) = *(undefined4 *)(iVar2 + 6);
    *(undefined2 *)((int)piVar4 + 0x36) = *(undefined2 *)(iVar2 + 10);
    puVar1 = *(undefined4 **)(local_18 + 0x14);
    piVar4[1] = (int)puVar1;
    *piVar4 = local_18 + 0x10;
    *puVar1 = piVar4;
    *(int **)(local_18 + 0x14) = piVar4;
    FUN_0034e7ce(local_18);
  }
  return;
}
