/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFDA7483BC0715D81A3A453184206A7A9ADC4BAE2ADD61E28976DD79B0006868
 * Entry: 0x002c4d40, Ghidra index: 10061, label: FUN_002c4d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7ee0;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c4d40(int *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int **ppiVar17;
  byte *pbVar18;
  byte *pbVar19;
  ushort *local_10;
  int *local_8;
  int *local_4;
  
  piVar13 = param_1;
  do {
    iVar5 = FUN_002ea01d(0x58);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_002bd100(piVar13[1]);
    }
    uVar15 = (uint)*(ushort *)((int)piVar13 + 0x26);
    while (uVar15 = uVar15 - 1, -1 < (int)uVar15) {
      pbVar18 = *(byte **)(piVar13[10] + uVar15 * 4);
      pbVar3 = pbVar18;
      if ((*pbVar18 & 0xc) == 0) {
        do {
          pbVar16 = pbVar3;
          pbVar3 = *(byte **)(pbVar16 + 0x1c8);
        } while (pbVar3 != (byte *)0x0);
        if (pbVar16 == param_2) {
          FUN_002bd460(piVar13);
          FUN_002bd3f0(piVar6);
          if (((byte)*(undefined4 *)pbVar18 & 0xc) == 4) {
            if (*(int *)(pbVar18 + 0x60) == 0) {
LAB_002c4e28:
              iVar5 = 0;
            }
            else {
              local_4 = piVar13;
              uVar8 = FUN_002b2b80();
              iVar5 = FUN_002bee90(piVar13,uVar8);
            }
          }
          else {
            iVar5 = *(int *)(pbVar18 + 0x60);
            if ((iVar5 == 0) || (*(int **)(iVar5 + 0xc) != piVar13)) goto LAB_002c4e28;
          }
          *(int **)(iVar5 + 0xc) = piVar6;
        }
      }
      else {
        puVar7 = (undefined2 *)FUN_002ea01d(0x10);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = (undefined2 *)0x0;
        }
        else {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[4] = 1;
          *(undefined4 *)(puVar7 + 2) = 0;
        }
        *(int **)(puVar7 + 6) = piVar6;
        FUN_002bd3f0(piVar6);
        FUN_002bbc40(puVar7);
      }
    }
    local_4 = (int *)(*(ushort *)((int)piVar13 + 0x3e) - 1);
    while (-1 < (int)local_4) {
      iVar5 = *(int *)(param_1[0x10] + (int)local_4 * 4);
      pbVar18 = *(byte **)(iVar5 + 0x2c);
      pbVar3 = *(byte **)(iVar5 + 0x30);
      iVar14 = 0;
      local_10 = (ushort *)0x0;
      pbVar16 = pbVar3;
      pbVar19 = pbVar18;
      if (((*pbVar18 & 0xc) != 0) || (pbVar16 = pbVar18, pbVar19 = pbVar3, (*pbVar3 & 0xc) != 0)) {
        if (((byte)*(undefined4 *)pbVar19 & 0xc) == 4) {
          if (*(int *)(pbVar19 + 0x60) == 0) {
            iVar14 = 0;
          }
          else {
            local_8 = param_1;
            ppiVar17 = &local_8;
            uVar15 = 0xffffffff;
            iVar14 = 4;
            do {
              bVar2 = *(byte *)ppiVar17;
              ppiVar17 = (int **)((int)ppiVar17 + 1);
              uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar9 = FUN_002bee90(param_1,uVar15 | 0x80000000);
LAB_002c4edf:
            iVar14 = iVar9;
          }
        }
        else {
          iVar9 = *(int *)(pbVar19 + 0x60);
          if ((iVar9 != 0) && (*(int **)(iVar9 + 0xc) == param_1)) goto LAB_002c4edf;
        }
        local_10 = *(ushort **)(pbVar19 + 0x60);
        pbVar18 = pbVar16;
        if (((byte)*(undefined4 *)pbVar19 & 0xc) == 4) {
          if (local_10 == (ushort *)0x0) {
LAB_002c4f54:
            local_10 = (ushort *)0x0;
          }
          else {
            local_8 = piVar6;
            ppiVar17 = &local_8;
            uVar15 = 0xffffffff;
            iVar9 = 4;
            do {
              bVar2 = *(byte *)ppiVar17;
              ppiVar17 = (int **)((int)ppiVar17 + 1);
              uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            local_10 = (ushort *)FUN_002bee90(piVar6,uVar15 | 0x80000000);
          }
        }
        else if ((local_10 == (ushort *)0x0) || (*(int **)(local_10 + 6) != piVar6))
        goto LAB_002c4f54;
      }
      while (pbVar3 = pbVar16, piVar13 = param_1, pbVar3 != (byte *)0x0) {
        pbVar18 = pbVar3;
        pbVar16 = *(byte **)(pbVar3 + 0x1c8);
      }
      if (pbVar18 == param_2) {
        iVar9 = *(ushort *)((int)param_1 + 0x3e) - 1;
        if (-1 < iVar9) {
          piVar11 = (int *)(param_1[0x10] + iVar9 * 4);
          do {
            if (*piVar11 == iVar5) break;
            iVar9 = iVar9 + -1;
            piVar11 = piVar11 + -1;
          } while (-1 < iVar9);
        }
        uVar1 = *(ushort *)((int)param_1 + 0x3e) - 1;
        *(ushort *)((int)param_1 + 0x3e) = uVar1;
        if (iVar9 < (int)(uint)uVar1) {
          do {
            *(undefined4 *)(param_1[0x10] + iVar9 * 4) =
                 *(undefined4 *)(param_1[0x10] + 4 + iVar9 * 4);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(ushort *)((int)param_1 + 0x3e));
        }
        if (*(ushort *)(piVar6 + 0xf) <= *(ushort *)((int)piVar6 + 0x3e)) {
          FUN_002ccf80();
        }
        *(int *)(piVar6[0x10] + (uint)*(ushort *)((int)piVar6 + 0x3e) * 4) = iVar5;
        *(short *)((int)piVar6 + 0x3e) = *(short *)((int)piVar6 + 0x3e) + 1;
        local_8 = (int *)(*(ushort *)(iVar5 + 2) - 1);
        while (-1 < (int)local_8) {
          piVar11 = *(int **)(*(int *)(iVar5 + 4) + (int)local_8 * 4);
          piVar10 = (int *)piVar13[8];
          bVar4 = false;
          if (piVar10 == (int *)0x0) {
LAB_002c502a:
            _DAT_00000000 = 0;
          }
          else {
            do {
              if (piVar10 == piVar11) {
                bVar4 = true;
              }
              piVar10 = (int *)*piVar10;
            } while (piVar10 != (int *)0x0);
            if (!bVar4) goto LAB_002c502a;
          }
          iVar9 = *piVar11;
          piVar10 = (int *)piVar11[1];
          if (iVar9 != 0) {
            *(int **)(iVar9 + 4) = piVar10;
          }
          if (piVar10 == (int *)0x0) {
            piVar13[8] = iVar9;
          }
          else {
            *piVar10 = iVar9;
          }
          *(short *)((int)piVar13 + 0x4a) = *(short *)((int)piVar13 + 0x4a) + -1;
          piVar11[0x1c] = (int)piVar6;
          iVar9 = piVar6[8];
          piVar11[1] = 0;
          *piVar11 = iVar9;
          piVar6[8] = (int)piVar11;
          if (iVar9 != 0) {
            *(int **)(iVar9 + 4) = piVar11;
          }
          *(short *)((int)piVar6 + 0x4a) = *(short *)((int)piVar6 + 0x4a) + 1;
          if (iVar14 != 0) {
            iVar9 = *(ushort *)(iVar14 + 2) - 1;
            if (-1 < iVar9) {
              puVar12 = (undefined4 *)(*(int *)(iVar14 + 4) + iVar9 * 4);
              do {
                if ((int *)*puVar12 == piVar11) break;
                iVar9 = iVar9 + -1;
                puVar12 = puVar12 + -1;
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
            if (*local_10 <= local_10[1]) {
              FUN_002ccf80();
            }
            *(int **)(*(int *)(local_10 + 2) + (uint)local_10[1] * 4) = piVar11;
            local_10[1] = local_10[1] + 1;
          }
          local_8 = (int *)((int)local_8 + -1);
        }
      }
      local_4 = (int *)((int)local_4 + -1);
    }
    param_2 = (byte *)(*(ushort *)((int)param_1 + 0x26) - 1);
    piVar13 = param_1;
    while (param_1 = piVar13, -1 < (int)param_2) {
      piVar13 = *(int **)(piVar13[10] + (int)param_2 * 4);
      iVar5 = (*piVar13 << 0x1c) >> 0x1e;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          if (piVar13[0x18] == 0) {
LAB_002c5193:
            iVar5 = 0;
          }
          else {
            local_4 = piVar6;
            ppiVar17 = &local_4;
            uVar15 = 0xffffffff;
            iVar5 = 4;
            do {
              bVar2 = *(byte *)ppiVar17;
              ppiVar17 = (int **)((int)ppiVar17 + 1);
              uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar5 = FUN_002bee90(piVar6,uVar15 | 0x80000000);
          }
        }
        else {
          iVar5 = piVar13[0x18];
          if ((iVar5 == 0) || (*(int **)(iVar5 + 0xc) != piVar6)) goto LAB_002c5193;
        }
        if (((byte)*piVar13 & 0xc) == 4) {
          if (piVar13[0x18] == 0) {
LAB_002c5201:
            iVar14 = 0;
          }
          else {
            local_4 = param_1;
            ppiVar17 = &local_4;
            uVar15 = 0xffffffff;
            iVar14 = 4;
            do {
              bVar2 = *(byte *)ppiVar17;
              ppiVar17 = (int **)((int)ppiVar17 + 1);
              uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = FUN_002bee90(param_1,uVar15 | 0x80000000);
          }
        }
        else {
          iVar14 = piVar13[0x18];
          if ((iVar14 == 0) || (*(int **)(iVar14 + 0xc) != param_1)) goto LAB_002c5201;
        }
        if (*(short *)(iVar5 + 2) == 0) {
          FUN_002bbcb0(piVar13);
          FUN_002bd460(piVar6);
        }
        if (*(short *)(iVar14 + 2) == 0) {
          FUN_002bbcb0(piVar13);
          FUN_002bd460(param_1);
        }
      }
      param_2 = (byte *)((int)param_2 + -1);
      piVar13 = param_1;
    }
    if ((short)piVar6[0x12] < 2) {
      puVar12 = *(undefined4 **)piVar6[10];
      if (((byte)*puVar12 & 0xc) == 4) {
        if (puVar12[0x18] != 0) {
          param_1 = piVar6;
          pbVar18 = (byte *)&param_1;
          uVar15 = 0xffffffff;
          iVar5 = 4;
          do {
            bVar2 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          puVar7 = (undefined2 *)FUN_002bee90(piVar6,uVar15 | 0x80000000);
LAB_002c52dd:
          FUN_002bbcb0(puVar12);
          if (puVar7 == (undefined2 *)0x0) {
            (**(code **)(*piVar6 + 0x18))(1);
            return;
          }
          if (puVar7[4] != 0) {
            if (*(int *)(puVar7 + 2) != 0) {
              (*(code *)PTR_FUN_003bc654)(*(int *)(puVar7 + 2));
              return;
            }
            *puVar7 = 0;
            puVar7[4] = 0;
          }
          puVar7[1] = 0;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(puVar7);
        }
      }
      else {
        puVar7 = (undefined2 *)puVar12[0x18];
        if ((puVar7 != (undefined2 *)0x0) && (*(int **)(puVar7 + 6) == piVar6)) goto LAB_002c52dd;
      }
      puVar7 = (undefined2 *)0x0;
      goto LAB_002c52dd;
    }
    if ((short)piVar13[0x12] < 2) {
      puVar12 = *(undefined4 **)piVar13[10];
      if (((byte)*puVar12 & 0xc) == 4) {
        if (puVar12[0x18] != 0) {
          param_2 = (byte *)piVar13;
          pbVar18 = (byte *)&param_2;
          uVar15 = 0xffffffff;
          iVar5 = 4;
          do {
            bVar2 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar2 ^ uVar15) & 0xff) * 4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          puVar7 = (undefined2 *)FUN_002bee90(piVar13,uVar15 | 0x80000000);
LAB_002c538f:
          FUN_002bbcb0(puVar12);
          if (puVar7 == (undefined2 *)0x0) {
            (**(code **)(*param_1 + 0x18))(1);
            return;
          }
          if (puVar7[4] != 0) {
            if (*(int *)(puVar7 + 2) != 0) {
              (*(code *)PTR_FUN_003bc654)(*(int *)(puVar7 + 2));
              return;
            }
            *puVar7 = 0;
            puVar7[4] = 0;
          }
          puVar7[1] = 0;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(puVar7);
        }
      }
      else {
        puVar7 = (undefined2 *)puVar12[0x18];
        if ((puVar7 != (undefined2 *)0x0) && (*(int **)(puVar7 + 6) == piVar13)) goto LAB_002c538f;
      }
      puVar7 = (undefined2 *)0x0;
      goto LAB_002c538f;
    }
    param_2 = (byte *)FUN_002c4c50();
    if (param_2 == (byte *)0x0) {
      return;
    }
  } while( true );
}
