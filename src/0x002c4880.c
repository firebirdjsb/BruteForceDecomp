/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5886509C616576F8320CF840447354FD8CCB39B3FEA929700C2C381EC77C68B2
 * Entry: 0x002c4880, Ghidra index: 10058, label: FUN_002c4880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7ee0;
extern uint32_t PTR_FUN_003bc650;
void FUN_002c4880(int *param_1,int *param_2)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int **ppiVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int *local_4;
  
  piVar12 = (int *)param_2[8];
  while (piVar12 != (int *)0x0) {
    piVar3 = (int *)*piVar12;
    piVar4 = (int *)piVar12[1];
    if (piVar3 != (int *)0x0) {
      piVar3[1] = (int)piVar4;
    }
    if (piVar4 == (int *)0x0) {
      param_2[8] = (int)piVar3;
    }
    else {
      *piVar4 = (int)piVar3;
    }
    *(short *)((int)param_2 + 0x4a) = *(short *)((int)param_2 + 0x4a) + -1;
    FUN_002bd2a0(param_2,piVar12);
    piVar12[0x1c] = (int)param_1;
    iVar14 = param_1[8];
    piVar12[1] = 0;
    *piVar12 = iVar14;
    param_1[8] = (int)piVar12;
    if (iVar14 != 0) {
      *(int **)(iVar14 + 4) = piVar12;
    }
    *(short *)((int)param_1 + 0x4a) = *(short *)((int)param_1 + 0x4a) + 1;
    FUN_002bd330(param_1,piVar12);
    piVar12 = piVar3;
  }
  uVar6 = (uint)*(ushort *)((int)param_2 + 0x26);
joined_r0x002c48eb:
  do {
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 0) {
      (**(code **)(*param_2 + 0x18))(1);
      return;
    }
    puVar5 = *(undefined4 **)(param_2[10] + uVar6 * 4);
    if (((byte)*puVar5 & 0xc) == 4) {
      if (puVar5[0x18] == 0) {
LAB_002c495d:
        iVar14 = 0;
      }
      else {
        local_4 = param_2;
        ppiVar13 = &local_4;
        uVar7 = 0xffffffff;
        iVar14 = 4;
        do {
          bVar2 = *(byte *)ppiVar13;
          ppiVar13 = (int **)((int)ppiVar13 + 1);
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar7) & 0xff) * 4);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        iVar14 = FUN_002bee90(param_2,uVar7 | 0x80000000);
      }
    }
    else {
      iVar14 = puVar5[0x18];
      if ((iVar14 == 0) || (*(int **)(iVar14 + 0xc) != param_2)) goto LAB_002c495d;
    }
    if (((byte)*puVar5 & 0xc) == 4) {
      if (puVar5[0x18] != 0) {
        local_4 = param_1;
        ppiVar13 = &local_4;
        uVar7 = 0xffffffff;
        iVar15 = 4;
        do {
          bVar2 = *(byte *)ppiVar13;
          ppiVar13 = (int **)((int)ppiVar13 + 1);
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar7) & 0xff) * 4);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        puVar8 = (ushort *)FUN_002bee90(param_1,uVar7 | 0x80000000);
LAB_002c49d7:
        if (puVar8 != (ushort *)0x0) {
          if (((byte)*puVar5 & 0xc) == 4) {
            if (puVar5[0x18] == 0) {
LAB_002c4a47:
              iVar14 = 0;
            }
            else {
              local_4 = param_2;
              ppiVar13 = &local_4;
              uVar7 = 0xffffffff;
              iVar14 = 4;
              do {
                bVar2 = *(byte *)ppiVar13;
                ppiVar13 = (int **)((int)ppiVar13 + 1);
                uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar7) & 0xff) * 4);
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
              iVar14 = FUN_002bee90(param_2,uVar7 | 0x80000000);
            }
          }
          else {
            iVar14 = puVar5[0x18];
            if ((iVar14 == 0) || (*(int **)(iVar14 + 0xc) != param_2)) goto LAB_002c4a47;
          }
          uVar7 = (uint)*(ushort *)(iVar14 + 2);
          while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
            iVar15 = *(int *)(*(int *)(iVar14 + 4) + uVar7 * 4);
            if (*puVar8 <= puVar8[1]) {
              FUN_002ccf80();
            }
            *(int *)(*(int *)(puVar8 + 2) + (uint)puVar8[1] * 4) = iVar15;
            puVar8[1] = puVar8[1] + 1;
            iVar9 = *(ushort *)(iVar14 + 2) - 1;
            if (-1 < iVar9) {
              piVar12 = (int *)(*(int *)(iVar14 + 4) + iVar9 * 4);
              do {
                if (*piVar12 == iVar15) break;
                iVar9 = iVar9 + -1;
                piVar12 = piVar12 + -1;
              } while (-1 < iVar9);
            }
            uVar1 = *(ushort *)(iVar14 + 2) - 1;
            *(ushort *)(iVar14 + 2) = uVar1;
            if (iVar9 < (int)(uint)uVar1) {
              do {
                *(undefined4 *)(*(int *)(iVar14 + 4) + iVar9 * 4) =
                     *(undefined4 *)(*(int *)(iVar14 + 4) + 4 + iVar9 * 4);
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(iVar14 + 2));
            }
          }
          FUN_002bbcb0(puVar5);
          goto joined_r0x002c48eb;
        }
      }
    }
    else {
      puVar8 = (ushort *)puVar5[0x18];
      if ((puVar8 != (ushort *)0x0) && (*(int **)(puVar8 + 6) == param_1)) goto LAB_002c49d7;
    }
    if (((byte)*puVar5 & 0xc) == 4) {
      local_4 = *(int **)(iVar14 + 0xc);
      ppiVar13 = &local_4;
      uVar7 = 0xffffffff;
      iVar15 = 4;
      do {
        bVar2 = *(byte *)ppiVar13;
        ppiVar13 = (int **)((int)ppiVar13 + 1);
        uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar7) & 0xff) * 4);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      FUN_002beda0(puVar5[0x18],uVar7 | 0x80000000);
    }
    else {
      puVar5[0x18] = 0;
    }
    *(int **)(iVar14 + 0xc) = param_1;
    if (((byte)*puVar5 & 0xc) == 4) {
      if (puVar5[0x18] == 0) {
        puVar10 = (undefined4 *)FUN_002ea01d(0x14);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = 2;
          puVar10[1] = 1;
          puVar10[2] = 0;
          puVar10[4] = 0;
          puVar11 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(0x18);
          puVar16 = puVar11;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar16 = 0;
            puVar16 = puVar16 + 1;
          }
          puVar10[3] = puVar11;
        }
        puVar5[0x18] = puVar10;
      }
      local_4 = *(int **)(iVar14 + 0xc);
      ppiVar13 = &local_4;
      uVar7 = 0xffffffff;
      iVar15 = 4;
      do {
        bVar2 = *(byte *)ppiVar13;
        ppiVar13 = (int **)((int)ppiVar13 + 1);
        uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar7) & 0xff) * 4);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      FUN_002bece0(*(int **)(iVar14 + 0xc),iVar14,uVar7 | 0x80000000);
    }
    else {
      puVar5[0x18] = iVar14;
    }
    FUN_002bd460(param_2);
    FUN_002bd3f0(param_1);
  } while( true );
}
