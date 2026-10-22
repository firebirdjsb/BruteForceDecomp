/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3E5877A4214AE19B09304472120CFA5ACB8C81D299FB2F5C484790817D9CAB2
 * Entry: 0x000e81e0, Ghidra index: 2875, label: FUN_000e81e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c06dd;
extern uint32_t DAT_003c06de;
extern uint32_t DAT_003c06df;
extern uint32_t DAT_003c06e0;
extern uint32_t DAT_003c06e1;
extern uint32_t DAT_003c06e2;
extern uint32_t DAT_003c06e3;
extern uint32_t DAT_003c06e4;
extern uint32_t DAT_0040cf58;
extern uint32_t DAT_0041b4d0;
extern uint32_t DAT_0041b518;
extern uint32_t DAT_0041b690;
extern uint32_t DAT_0041b790;
extern uint32_t DAT_0041d010;
extern uint32_t DAT_0041d028;
extern uint32_t DAT_0041d1a0;
extern uint32_t DAT_0041d2e0;
extern uint32_t DAT_00469a78;
extern uint32_t DAT_00469a80;
extern uint32_t DAT_00469a84;
extern uint32_t DAT_00469a88;
extern uint32_t DAT_00469a90;
extern uint32_t DAT_00469a94;
extern uint32_t DAT_00469a98;
extern uint32_t DAT_00469a9c;
void FUN_000e81e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_8;
  int local_4;
  
  iVar2 = *(int *)(*param_1 + 0x80);
  iVar3 = *(int *)(*param_1 + 0x8c);
  local_4 = *(int *)(iVar3 + 0xd8);
  iVar4 = *(int *)(iVar2 + 0xb78);
  FUN_000e4ca0(iVar4,iVar3);
  FUN_000d4180();
  if (DAT_003c06e0 != '\0') {
    if (DAT_003c06e4 == '\0') {
      FUN_000e7d40(param_1);
    }
    else if (DAT_00469a78 != 0) {
      if ((param_1[3] != param_1[2]) || (DAT_003c06e3 == '\0')) {
        FUN_000d2e20(param_1[1],*param_1,0);
        uVar9 = 0;
        if (DAT_00469a78 != 0) {
          do {
            piVar8 = (int *)(&DAT_0041d2e0)[uVar9];
            uVar7 = -(uint)((*(byte *)((int)piVar8 + 0x26) & 0x40) != 0) & (uint)piVar8;
            if (uVar7 == 0) {
              (**(code **)(*piVar8 + 100))(*param_1);
            }
            else {
              FUN_000d3330(param_1[1],uVar7);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < DAT_00469a78);
        }
        iVar5 = param_1[1];
        iVar1 = iVar5 + *(int *)(iVar5 + 0xf000) * 4;
        FUN_000d3af0(iVar5,iVar1,iVar1 - iVar5 >> 2,iVar4);
        iVar1 = iVar5 + (0xa00 - *(int *)(iVar5 + 0xf004)) * 4;
        FUN_000d3af0(iVar1,iVar5 + 0x2800,(iVar5 + 0x2800) - iVar1 >> 2,iVar4);
        *(byte *)(iVar5 + 0xf008) = *(byte *)(iVar5 + 0xf008) | 1;
        param_1[2] = param_1[3];
      }
      if (DAT_003c06e2 != '\0') {
        *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) & 0x7f;
        FUN_000d3550(param_1[1],*param_1,0,1,0);
        *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) | 0x80;
      }
      if (DAT_003c06e1 != '\0') {
        FUN_002385a0();
        *(byte *)(*param_1 + 0x85) = *(byte *)(*param_1 + 0x85) & 0xfe;
        local_8 = 0x202;
        FUN_0006a610(&local_8);
        local_8 = 0;
        FUN_0006a610(&local_8);
        local_8 = 1;
        FUN_0006a610(&local_8);
        local_8 = 0x206;
        FUN_0006a610(&local_8);
        local_8 = 1;
        FUN_0006a610(&local_8);
        FUN_000d3550(param_1[1],*param_1,0,1,0);
        *(byte *)(*param_1 + 0x85) = *(byte *)(*param_1 + 0x85) | 1;
        FUN_00238630();
      }
    }
  }
  if (*(char *)(iVar4 + 0xb45) != '\0') {
    FUN_00238630();
    *(undefined1 *)(iVar4 + 0xb45) = 0;
  }
  FUN_002175e0(*(undefined4 *)(param_1[4] + 0x200),iVar3,0);
  FUN_000d4180();
  FUN_000e7d40(param_1);
  if (*(char *)(iVar4 + 0xb45) != '\0') {
    FUN_00238630();
    *(undefined1 *)(iVar4 + 0xb45) = 0;
  }
  FUN_000da530(*param_1);
  FUN_000d4180();
  uVar9 = 0;
  if (DAT_00469a80 != 0) {
    do {
      if (*(int *)(*(int *)((&DAT_0041d1a0)[uVar9] + 0xc) + 4) == 3) {
        FUN_00116480((&DAT_0041d1a0)[uVar9],*param_1,2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < DAT_00469a80);
  }
  if (DAT_003c06e0 != '\0') {
    uVar9 = 0;
    if (DAT_00469a84 != 0) {
      puVar10 = &DAT_0041d028;
      do {
        (**(code **)(*(int *)*puVar10 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 3;
      } while (uVar9 < DAT_00469a84);
    }
    uVar9 = 0;
    if (DAT_00469a88 != 0) {
      do {
        (**(code **)(*(int *)(&DAT_0041d010)[uVar9] + 100))(*param_1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < DAT_00469a88);
    }
  }
  iVar1 = *(int *)(*(int *)(*param_1 + 0x80) + 0xa48);
  if (iVar1 != 0) {
    FUN_000d25e0(iVar1,*param_1);
  }
  if ((DAT_003c06e4 != '\0') && (DAT_00469a78 != 0)) {
    if (DAT_003c06e2 != '\0') {
      *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) & 0x7f;
      FUN_000d3550(param_1[1],*param_1,0,1,1);
      *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) | 0x80;
    }
    if (DAT_003c06e1 != '\0') {
      FUN_002385a0();
      *(byte *)(*param_1 + 0x85) = *(byte *)(*param_1 + 0x85) & 0xfe;
      local_8 = 0x202;
      FUN_0006a610(&local_8);
      local_8 = 0;
      FUN_0006a610(&local_8);
      local_8 = 1;
      FUN_0006a610(&local_8);
      local_8 = 0x206;
      FUN_0006a610(&local_8);
      local_8 = 1;
      FUN_0006a610(&local_8);
      FUN_000d3550(param_1[1],*param_1,0,1,1);
      *(byte *)(*param_1 + 0x85) = *(byte *)(*param_1 + 0x85) | 1;
      FUN_00238630();
    }
  }
  FUN_002385a0();
  local_8 = 0x1010101;
  FUN_0006a610(&local_8);
  FUN_000e7d40(param_1);
  FUN_00238630();
  if (*(char *)(iVar4 + 0xb45) != '\0') {
    FUN_00238630();
    *(undefined1 *)(iVar4 + 0xb45) = 0;
  }
  FUN_002175e0(*(undefined4 *)(param_1[4] + 0x200),iVar3,1);
  iVar1 = local_4;
  if ((local_4 == 0) && (*(char *)(iVar4 + 0xb44) != '\0')) {
    FUN_000e5f60(iVar4,iVar3);
    FUN_000e5d40(iVar4);
  }
  if (DAT_003c06dd != '\0') {
    FUN_000e4da0(iVar4,*param_1,DAT_00469a90 == 0);
  }
  if (iVar1 == 0) {
    if (DAT_003c06de != '\0') {
      FUN_000e5240(*(undefined4 *)(*(int *)(*param_1 + 0x80) + 0xb78),&DAT_0041b790,DAT_00469a90);
    }
    if (DAT_003c06df != '\0') {
      FUN_000e5730(*(undefined4 *)(*(int *)(*param_1 + 0x80) + 0xb78),*param_1);
    }
    uVar9 = 0;
    if (DAT_00469a9c != 0) {
      do {
        piVar8 = (int *)(&DAT_0041b4d0)[uVar9];
        (**(code **)(*piVar8 + 100))(*param_1);
        *(undefined4 *)(*param_1 + 0x88) = 3;
        (**(code **)(*piVar8 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < DAT_00469a9c;
        *(undefined4 *)(*param_1 + 0x88) = 0;
      } while (bVar11);
      return;
    }
  }
  else if (iVar1 == 2) {
    if (DAT_0040cf58 != '\0') {
      FUN_000e66d0(iVar4);
    }
    FUN_000d4180();
    uVar9 = 0;
    if (DAT_00469a94 != 0) {
      do {
        piVar8 = (int *)(&DAT_0041b690)[uVar9];
        *(undefined4 *)(piVar8[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar8 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < DAT_00469a94;
        *(undefined4 *)(piVar8[0x153] + 0x10) = 0xffffffff;
      } while (bVar11);
    }
    uVar9 = 0;
    if (DAT_00469a98 != 0) {
      piVar8 = &DAT_0041b518;
      do {
        piVar6 = (int *)*piVar8;
        *(undefined4 *)(piVar6[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar6 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 3;
        bVar11 = uVar9 < DAT_00469a98;
        *(undefined4 *)(piVar6[0x153] + 0x10) = 0xffffffff;
      } while (bVar11);
    }
    if (*(char *)(iVar4 + 0xb45) != '\0') {
      FUN_00238630();
      *(undefined1 *)(iVar4 + 0xb45) = 0;
    }
    if (*(char *)(iVar4 + 0xb44) != '\0') {
      FUN_000e5f60(iVar4,iVar3);
      FUN_000e5d40(iVar4);
    }
    uVar9 = 0;
    if (DAT_00469a9c != 0) {
      do {
        piVar8 = (int *)(&DAT_0041b4d0)[uVar9];
        (**(code **)(*piVar8 + 100))(*param_1);
        *(undefined4 *)(*param_1 + 0x88) = 3;
        (**(code **)(*piVar8 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < DAT_00469a9c;
        *(undefined4 *)(*param_1 + 0x88) = 0;
      } while (bVar11);
      return;
    }
  }
  else if (iVar1 == 1) {
    FUN_000e6a70(iVar4);
    FUN_000d4180();
    uVar9 = 0;
    if (DAT_00469a94 != 0) {
      do {
        piVar8 = (int *)(&DAT_0041b690)[uVar9];
        *(undefined4 *)(piVar8[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar8 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < DAT_00469a94;
        *(undefined4 *)(piVar8[0x153] + 0x10) = 0xffffffff;
      } while (bVar11);
    }
    uVar9 = 0;
    if (DAT_00469a98 != 0) {
      piVar8 = &DAT_0041b518;
      do {
        piVar6 = (int *)*piVar8;
        *(undefined4 *)(piVar6[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar6 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 3;
        bVar11 = uVar9 < DAT_00469a98;
        *(undefined4 *)(piVar6[0x153] + 0x10) = 0xffffffff;
      } while (bVar11);
    }
    if (*(char *)(iVar4 + 0xb45) != '\0') {
      FUN_00238630();
      *(undefined1 *)(iVar4 + 0xb45) = 0;
    }
    if (*(char *)(iVar4 + 0xb44) != '\0') {
      FUN_000e5f60(iVar4,iVar3);
      FUN_000e5d40(iVar4);
    }
    uVar9 = 0;
    if (DAT_00469a9c != 0) {
      do {
        piVar8 = (int *)(&DAT_0041b4d0)[uVar9];
        (**(code **)(*piVar8 + 100))(*param_1);
        *(undefined4 *)(*param_1 + 0x88) = 3;
        (**(code **)(*piVar8 + 100))(*param_1);
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < DAT_00469a9c;
        *(undefined4 *)(*param_1 + 0x88) = 0;
      } while (bVar11);
    }
    FUN_000a45a0(*(undefined4 *)(*(int *)(iVar2 + 0xb80) + 0x14),*param_1);
  }
  return;
}
