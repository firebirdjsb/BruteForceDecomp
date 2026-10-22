/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49F8634CC7BDF8DBF378149C8F1514430EB733C7805D0C5955DE7315A60FF729
 * Entry: 0x002d30f0, Ghidra index: 10198, label: FUN_002d30f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002d30f0(uint *param_1,int *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *local_1c;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar7 = (int)param_1;
  iVar9 = *(int *)((*(uint *)((int)param_1 + 0x14) >> 8 & 3) * 0x1c + 0x28 + (int)param_1);
  iVar1 = *(int *)(((*(uint *)((int)param_1 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x28 + (int)param_1)
  ;
  puVar2 = *(uint **)(iVar9 + 0x94);
  puVar5 = puVar2;
  param_1 = *(uint **)(iVar1 + 0x94);
  if ((*puVar2 & 0xc) != 0) {
    puVar5 = *(uint **)(iVar1 + 0x94);
    param_1 = puVar2;
  }
  local_1c = (ushort *)puVar5[0x18];
  uVar3 = puVar5[3];
  piVar6 = (int *)FUN_002d30a0(iVar7);
  if (piVar6 == (int *)0x0) {
    iVar7 = FUN_002ea01d(0x78);
    if (iVar7 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_002c28e0();
    }
    if (param_5 != 0) {
      FUN_002d29f0(piVar6);
      FUN_002d4e90();
    }
    iVar7 = *(int *)(iVar9 + 0x14);
    local_8 = piVar6[0x10];
    local_c = iVar7;
    local_4 = piVar6;
    FUN_002b5560(&local_c);
    if ((*(uint *)(iVar9 + 0x70) & 0x2000) != 0) {
      FUN_002bcc70(*(undefined4 *)(iVar7 + 0xc),iVar9,&local_c);
    }
    if ((*(uint *)(iVar1 + 0x70) & 0x2000) != 0) {
      FUN_002bcc70(*(undefined4 *)(iVar7 + 0xc),iVar1,&local_c);
    }
    *param_3 = 1;
    if (local_1c == (ushort *)0x0) {
      local_1c = (ushort *)FUN_002ea01d(0x10);
      if (local_1c == (ushort *)0x0) {
        local_1c = (ushort *)0x0;
      }
      else {
        *local_1c = 0;
        local_1c[1] = 0;
        local_1c[4] = 1;
        local_1c[2] = 0;
        local_1c[3] = 0;
      }
      if (((*param_1 & 0xc) == 0) && (puVar8 = (ushort *)param_1[0x18], puVar8 != (ushort *)0x0)) {
        iVar9 = *(int *)(puVar8 + 6);
        *(int *)(local_1c + 6) = iVar9;
        FUN_002bbc40(local_1c);
        FUN_002bd3f0(iVar9);
        FUN_002bd3d0();
        FUN_002bd330(iVar9,piVar6);
      }
      else {
        iVar9 = FUN_002ea01d(0x58);
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_002bd100(uVar3);
        }
        puVar10 = (ushort *)FUN_002ea01d(0x10);
        puVar8 = (ushort *)0x0;
        if (puVar10 != (ushort *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 1;
          puVar8 = puVar10;
        }
        *(int *)(local_1c + 6) = iVar9;
        *(int *)(puVar8 + 6) = iVar9;
        FUN_002bbc40(puVar8);
        FUN_002bbc40(local_1c);
        piVar6[0x1c] = iVar9;
        iVar1 = *(int *)(iVar9 + 0x20);
        piVar6[1] = 0;
        *piVar6 = iVar1;
        *(int **)(iVar9 + 0x20) = piVar6;
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar6;
        }
        *(short *)(iVar9 + 0x4a) = *(short *)(iVar9 + 0x4a) + 1;
        FUN_002bd330(iVar9,piVar6);
        FUN_002bd3f0(iVar9);
        FUN_002bd3f0(iVar9);
      }
    }
    else {
      iVar9 = *(int *)(local_1c + 6);
      puVar8 = (ushort *)FUN_002bbbf0();
      if (puVar8 == (ushort *)0x0) {
        if (((*param_1 & 0xc) == 0) && (puVar8 = (ushort *)param_1[0x18], puVar8 != (ushort *)0x0))
        {
          FUN_002c4880(iVar9,*(undefined4 *)(puVar8 + 6));
        }
        else {
          puVar8 = (ushort *)FUN_002ea01d(0x10);
          if (puVar8 == (ushort *)0x0) {
            puVar8 = (ushort *)0x0;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[4] = 1;
            puVar8[2] = 0;
            puVar8[3] = 0;
          }
          *(int *)(puVar8 + 6) = iVar9;
          FUN_002bbc40(puVar8);
          FUN_002bd3f0(iVar9);
        }
        piVar6[0x1c] = iVar9;
        iVar1 = *(int *)(iVar9 + 0x20);
        piVar6[1] = 0;
        *piVar6 = iVar1;
        *(int **)(iVar9 + 0x20) = piVar6;
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar6;
        }
        *(short *)(iVar9 + 0x4a) = *(short *)(iVar9 + 0x4a) + 1;
        FUN_002bd330(iVar9,piVar6);
      }
      else {
        piVar6[0x1c] = iVar9;
        iVar1 = *(int *)(iVar9 + 0x20);
        piVar6[1] = 0;
        *piVar6 = iVar1;
        *(int **)(iVar9 + 0x20) = piVar6;
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar6;
        }
        *(short *)(iVar9 + 0x4a) = *(short *)(iVar9 + 0x4a) + 1;
        FUN_002bd330(iVar9,piVar6);
      }
    }
    if (*local_1c <= local_1c[1]) {
      FUN_002ccf80();
    }
    *(int **)(*(int *)(local_1c + 2) + (uint)local_1c[1] * 4) = piVar6;
    local_1c[1] = local_1c[1] + 1;
    if (*puVar8 <= puVar8[1]) {
      FUN_002ccf80();
    }
    *(int **)(*(int *)(puVar8 + 2) + (uint)puVar8[1] * 4) = piVar6;
    puVar8[1] = puVar8[1] + 1;
    *param_2 = iVar9;
    FUN_002c5ce0();
    uVar3 = param_1[0x5c];
    uVar4 = puVar5[0x5c];
    if ((((*param_1 | *puVar5) & 0xc) == 0) && (uVar4 != uVar3)) {
      if (uVar3 == param_4) {
        FUN_002bdb10(uVar4);
        if (uVar4 != 0) {
          FUN_002bdc50();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(uVar4);
        }
      }
      else {
        FUN_002bdb10(uVar3);
        if (uVar3 != 0) {
          FUN_002bdc50();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(uVar3);
        }
      }
    }
    return piVar6;
  }
  *param_2 = *(int *)(local_1c + 6);
  *param_3 = 0;
  if (param_5 != 0) {
    FUN_002d29f0(piVar6);
    FUN_002d4e90();
  }
  return piVar6;
}
