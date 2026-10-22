/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51D9369E0B46966B3F813B952727120945CB934A68ED15F1F56231C6B63FE8FE
 * Entry: 0x000d8140, Ghidra index: 2673, label: FUN_000d8140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e620;
extern uint32_t _DAT_003c0284;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d8140(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *local_98;
  float fStack_94;
  undefined4 *local_90;
  uint local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int *piStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int aiStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(int *)(param_1 + 0xc80) != 0) {
    if (*(undefined4 **)(param_1 + 0xc7c) == (undefined4 *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)**(undefined4 **)(param_1 + 0xc7c);
    }
    if (piVar12 != *(int **)(param_1 + 0xc7c)) {
      do {
        iVar10 = piVar12[2];
        if (iVar10 != 0) {
          FUN_000d8bc0(iVar10 + 0x1c);
          if (*(uint *)(iVar10 + 0x18) < 0x10) {
            *(undefined4 *)(iVar10 + 0x18) = 0xf;
            *(undefined4 *)(iVar10 + 0x14) = 0;
            *(undefined1 *)(iVar10 + 4) = 0;
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(iVar10);
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(iVar10 + 4));
        }
        piVar12 = (int *)*piVar12;
      } while (piVar12 != (int *)*(int *)(param_1 + 0xc7c));
    }
    puVar8 = *(undefined4 **)(param_1 + 0xc7c);
    if (puVar8 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar8;
    }
    FUN_001298b0(&local_98,uVar9,puVar8);
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    FUN_001f4a90(*(int *)(param_1 + 0xa40));
  }
  iVar10 = *(int *)(param_1 + 0xa70);
  if (iVar10 != 0) {
    for (uVar11 = 0;
        (*(int *)(iVar10 + 0x128) != 0 &&
        (uVar11 < (uint)(*(int *)(iVar10 + 300) - *(int *)(iVar10 + 0x128) >> 2)));
        uVar11 = uVar11 + 1) {
      iVar4 = FUN_00160da0(0,1);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xa8) = *(uint *)(iVar4 + 0xa8) | 2;
      }
    }
    for (uVar11 = 0;
        (*(int *)(iVar10 + 0x138) != 0 &&
        (uVar11 < (uint)(*(int *)(iVar10 + 0x13c) - *(int *)(iVar10 + 0x138) >> 2)));
        uVar11 = uVar11 + 1) {
      iVar4 = FUN_00160da0(0,1);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xa8) = *(uint *)(iVar4 + 0xa8) | 1;
      }
    }
    for (uVar11 = 0;
        (*(int *)(iVar10 + 0x148) != 0 &&
        (uVar11 < (uint)(*(int *)(iVar10 + 0x14c) - *(int *)(iVar10 + 0x148) >> 2)));
        uVar11 = uVar11 + 1) {
      iVar4 = FUN_00160da0(0,1);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xa8) = *(uint *)(iVar4 + 0xa8) | 4;
      }
    }
    for (uVar11 = 0;
        (*(int *)(iVar10 + 0x158) != 0 &&
        (uVar11 < (uint)(*(int *)(iVar10 + 0x15c) - *(int *)(iVar10 + 0x158) >> 2)));
        uVar11 = uVar11 + 1) {
      iVar4 = FUN_00160da0(0,1);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xa8) = *(uint *)(iVar4 + 0xa8) | 8;
      }
    }
  }
  if (*(int *)(param_1 + 0x104) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  local_8c = 0xe47e399b;
  if (*(int *)(param_1 + 0xa70) != 0) {
    iVar10 = *(int *)(*(int *)(param_1 + 0xa70) + 0x104);
    if ((iVar10 != 0) &&
       (local_98 = (int *)((*(int *)(*(int *)(param_1 + 0xa70) + 0x108) - iVar10) / 0x44),
       local_98 != (int *)0x0)) {
      local_90 = *(undefined4 **)(*(int *)(param_1 + 0xa70) + 0x104);
      pfVar13 = (float *)((int)local_90 + 0xc);
      while (local_90 != (undefined4 *)*(int *)(*(int *)(param_1 + 0xa70) + 0x108)) {
        fVar5 = (float)(**(code **)(*DAT_00443310 + 0x54))(pfVar13 + 10);
        pfVar13[0xb] = fVar5;
        if (fVar5 == 0.0) {
          pfVar13[0xc] = 0.0;
          local_90 = (undefined4 *)((int)local_90 + 0x44);
          pfVar13 = pfVar13 + 0x11;
        }
        else {
          piVar12 = (int *)pfVar13[0xd];
          if (piVar12 != (int *)0x0) {
            if (*(undefined4 **)(param_1 + 0x28) == (undefined4 *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)**(undefined4 **)(param_1 + 0x28);
            }
            piVar7 = (int *)0x0;
            if (piVar6 != *(int **)(param_1 + 0x28)) {
              do {
                piVar7 = (int *)piVar6[2];
                piVar6 = (int *)*piVar6;
                if ((piVar7 != (int *)0x0) && (*piVar12 == piVar7[1])) break;
                piVar7 = (int *)0x0;
              } while (piVar6 != (int *)*(int *)(param_1 + 0x28));
            }
            if (piVar7 == (int *)0x0) {
              piVar6 = (int *)0x0;
              if (*(undefined4 **)(param_1 + 0xf8) != (undefined4 *)0x0) {
                piVar6 = (int *)**(undefined4 **)(param_1 + 0xf8);
              }
              if (piVar6 != *(int **)(param_1 + 0xf8)) {
                do {
                  if (*piVar12 == *(int *)(piVar6[2] + 4)) {
                    piVar7 = (int *)piVar6[2];
                    if (piVar7 != (int *)0x0) goto LAB_000d8442;
                    break;
                  }
                  piVar6 = (int *)*piVar6;
                } while (piVar6 != (int *)*(int *)(param_1 + 0xf8));
              }
            }
            else {
LAB_000d8442:
              uVar11 = (**(code **)(*piVar7 + 4))();
              if ((uVar11 != 0) &&
                 (uVar11 = uVar11 & -(uint)((*(byte *)(uVar11 + 0x26) & 0x40) != 0), uVar11 != 0)) {
                *(undefined4 **)(uVar11 + 0x1a4) = local_90;
              }
            }
          }
          fVar5 = pfVar13[0xb];
          aiStack_4c[0] = 0;
          uStack_28 = 0;
          uStack_10 = 0;
          piVar12 = aiStack_4c;
          for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
          uStack_38 = 1;
          aiStack_4c[1] = 1;
          uStack_34 = 0x3f800000;
          uStack_30 = 0x3f800000;
          uStack_2c = 0x3f800000;
          uStack_24 = 0x3cf5c28f;
          uStack_1c = 0x3c23d70a;
          uStack_18 = 0x3c23d70a;
          uStack_14 = 0x3c23d70a;
          uStack_3c = 0x3f800000;
          uStack_20 = 0;
          fVar5 = (float)FUN_0016b3f0(param_1,*(undefined4 *)((int)fVar5 + 8),aiStack_4c);
          pfVar13[0xc] = fVar5;
          *(undefined4 **)((int)fVar5 + 0x9c) = local_90;
          uVar11 = local_8c | 0x80000000;
          local_8c = local_8c + 1;
          *(uint *)((int)pfVar13[0xc] + 0x8c) = uVar11;
          fVar5 = pfVar13[0xc];
          if ((*(uint *)((int)fVar5 + 0x70) & 0x300) == 0) {
            fStack_94 = *(float *)(*(int *)((int)fVar5 + 0x14) + 0x10);
            if (*(int **)((int)fVar5 + 0x84) != (int *)0x0) {
              (**(code **)(**(int **)((int)fVar5 + 0x84) + 0x10))(1);
            }
            *(undefined4 *)((int)fVar5 + 0x84) = 0;
            puVar8 = (undefined4 *)FUN_002ea01d(0x34);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = &PTR_LAB_0038e620;
              puVar8[7] = 0;
              *(undefined2 *)(puVar8 + 10) = 0x10;
              *(undefined2 *)((int)puVar8 + 0x2a) = 0;
              *(undefined2 *)(puVar8 + 0xc) = 1;
              uVar9 = (*(code *)PTR_FUN_003bc650)(0x40);
              puVar8[0xb] = uVar9;
              puVar8[2] = 0;
              puVar8[6] = 0;
              puVar8[5] = 0;
              puVar8[4] = 0;
              puVar8[8] = 0xbf800000;
              puVar8[9] = fVar5;
              puVar8[3] = 0;
            }
            *(undefined4 **)((int)fVar5 + 0x84) = puVar8;
            FUN_002bfdd0(fVar5);
            *(uint *)((int)fVar5 + 0x70) = *(uint *)((int)fVar5 + 0x70) & 0xfffffdff | 0x100;
          }
          if (*(int *)((int)pfVar13[0xc] + 4) == 2) {
            iVar10 = *(int *)(*(int *)((int)pfVar13[0xc] + 0x7c) + 4);
            fStack_50 = *(float *)(*(int *)(iVar10 + 0x20) + 0x14 + iVar10);
            iVar10 = *(int *)(iVar10 + 0x20) + iVar10;
            fVar5 = *(float *)(iVar10 + 0x10);
            fStack_84 = *(float *)(iVar10 + 0xc);
            fStack_88 = *(float *)(iVar10 + 8);
            fStack_60 = fStack_88 * pfVar13[-2] + fVar5 * *pfVar13 + fStack_84 * pfVar13[-1] +
                        pfVar13[7];
            local_98 = (int *)(fVar5 * pfVar13[3] + fStack_84 * pfVar13[2] + fStack_88 * pfVar13[1]
                              + pfVar13[8]);
            fVar3 = fStack_84 * pfVar13[5] + fStack_88 * pfVar13[4];
            fStack_80 = fVar5;
          }
          else {
            pfVar1 = *(float **)((int)pfVar13[0xb] + 8);
            fStack_50 = pfVar1[6];
            fStack_7c = *pfVar1;
            fVar5 = pfVar1[2];
            fStack_78 = pfVar1[1];
            fStack_60 = fStack_7c * pfVar13[-2] + fVar5 * *pfVar13 + fStack_78 * pfVar13[-1] +
                        pfVar13[7];
            local_98 = (int *)(fVar5 * pfVar13[3] + fStack_78 * pfVar13[2] + fStack_7c * pfVar13[1]
                              + pfVar13[8]);
            fVar3 = fStack_78 * pfVar13[5] + fStack_7c * pfVar13[4];
            fStack_74 = fVar5;
          }
          fStack_94 = fVar5 * pfVar13[6] + fVar3 + pfVar13[9];
          fStack_64 = fStack_60 - fStack_50;
          fStack_60 = fStack_60 + fStack_50;
          fStack_5c = (float)local_98 - fStack_50;
          fStack_58 = (float)local_98 + fStack_50;
          fStack_54 = fStack_94 - fStack_50;
          fStack_50 = fStack_94 + fStack_50;
          piStack_6c = local_98;
          fStack_68 = fStack_94;
          FUN_000e08c0(&fStack_64);
          if (aiStack_4c[0] != 0) {
            (*(code *)PTR_FUN_003bc654)(aiStack_4c[0]);
            return;
          }
          local_90 = (undefined4 *)((int)local_90 + 0x44);
          pfVar13 = pfVar13 + 0x11;
        }
      }
    }
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  FUN_000d7d80();
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x28);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
    if ((int *)puVar14[2] != (int *)0x0) {
      (**(code **)(*(int *)puVar14[2] + 0xa4))();
    }
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x114);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
    if ((int *)puVar14[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar14[3] + 0x30))();
    }
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x1d4);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
    if ((int *)puVar14[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar14[3] + 0x30))();
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0x198);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
    if ((int *)puVar14[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar14[3] + 0x30))();
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0xb6c);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
    if ((int *)puVar14[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar14[3] + 0x30))();
    }
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x74);
  if (puVar8 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)*puVar8;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x68);
  puVar15 = (undefined4 *)0x0;
  local_90 = puVar8;
  if (puVar2 != (undefined4 *)0x0) {
    puVar15 = (undefined4 *)*puVar2;
  }
  do {
    if (puVar15 == puVar2) {
      if (puVar14 == puVar8) {
        puVar8 = *(undefined4 **)(param_1 + 0xa50);
        fStack_94 = (float)(param_1 + 0xa4c);
        puVar14 = (undefined4 *)0x0;
        if (*(undefined4 **)(param_1 + 0xa50) != (undefined4 *)0x0) {
          puVar14 = (undefined4 *)**(undefined4 **)(param_1 + 0xa50);
        }
        for (; puVar14 != puVar8; puVar14 = (undefined4 *)*puVar14) {
          if ((int *)puVar14[3] != (int *)0x0) {
            (**(code **)(*(int *)puVar14[3] + 0x30))();
          }
        }
        (**(code **)(**(int **)(param_1 + 0xb80) + 8))();
        iVar10 = *(int *)(param_1 + 0x20c);
        piVar12 = *(int **)(iVar10 + 4);
        local_8c = *piVar12;
        if ((int *)local_8c != piVar12) {
          do {
            FUN_00175090(*(undefined4 *)(local_8c + 0x10),param_1);
            FUN_0012aba0();
          } while (local_8c != *(int *)(iVar10 + 4));
        }
        if (*(undefined4 **)(param_1 + 0x220) == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)**(undefined4 **)(param_1 + 0x220);
        }
        for (; puVar8 != *(undefined4 **)(param_1 + 0x220); puVar8 = (undefined4 *)*puVar8) {
          iVar10 = puVar8[2];
          if (*(int *)(*(int *)(iVar10 + 0xc) + 0x2c) == 1) {
            if ((*(byte *)(iVar10 + 0x94) & 0x20) == 0) {
              fVar5 = _DAT_003c0284 * *(float *)(iVar10 + 0x8c);
            }
            else {
              fVar5 = *(float *)(iVar10 + 0x8c);
            }
            if (*(float *)(param_1 + 0xa3c) < fVar5) {
              *(float *)(param_1 + 0xa3c) = fVar5;
            }
          }
        }
        if (*(undefined4 **)(param_1 + 0x214) == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)**(undefined4 **)(param_1 + 0x214);
        }
        for (; puVar8 != *(undefined4 **)(param_1 + 0x214); puVar8 = (undefined4 *)*puVar8) {
          iVar10 = puVar8[2];
          if (*(int *)(*(int *)(iVar10 + 0xc) + 0x2c) == 1) {
            if ((*(byte *)(iVar10 + 0x94) & 0x20) == 0) {
              fVar5 = _DAT_003c0284 * *(float *)(iVar10 + 0x8c);
            }
            else {
              fVar5 = *(float *)(iVar10 + 0x8c);
            }
            if (*(float *)(param_1 + 0xa3c) < fVar5) {
              *(float *)(param_1 + 0xa3c) = fVar5;
            }
          }
        }
        local_98 = (int *)0xad514d4;
        piVar6 = (int *)FUN_000a7770(&local_98);
        piVar12 = *(int **)(param_1 + 0xc48);
        if (piVar12 != piVar6) {
          if (piVar12 != (int *)0x0) {
            (**(code **)(*piVar12 + 8))(piVar12);
            *(undefined4 *)(param_1 + 0xc48) = 0;
          }
          *(int **)(param_1 + 0xc48) = piVar6;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 4))(piVar6);
          }
        }
        if (*(int *)(param_1 + 0xa40) != 0) {
          FUN_001f7340(*(int *)(param_1 + 0xa40));
        }
        puVar8 = *(undefined4 **)(param_1 + 0x4c);
        if (puVar8 == (undefined4 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar8;
        }
        FUN_001298b0(&local_98,uVar9,puVar8);
        piVar12 = (int *)0x0;
        if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
          piVar12 = (int *)**(undefined4 **)(param_1 + 0x28);
        }
        if (piVar12 != *(int **)(param_1 + 0x28)) {
          do {
            piVar6 = (int *)piVar12[2];
            local_98 = piVar6;
            if (((*(byte *)((int)piVar6 + 0x26) & 4) == 0) &&
               (FUN_00155e20(piVar6,0), (*(byte *)((int)piVar6 + 0x26) & 4) == 0)) {
              iVar10 = *(int *)(param_1 + 0x4c);
              iVar4 = FUN_000ff730(param_1 + 0x48,iVar10,*(undefined4 *)(iVar10 + 4),&local_98);
              FUN_000b2a50();
              *(int *)(iVar10 + 4) = iVar4;
              **(int **)(iVar4 + 4) = iVar4;
            }
            piVar12 = (int *)*piVar12;
          } while (piVar12 != (int *)*(int *)(param_1 + 0x28));
        }
        FUN_000d0890(0);
        if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)**(undefined4 **)(param_1 + 0x68);
        }
        piVar6 = *(int **)(param_1 + 0x68);
        local_98 = piVar6;
        if (piVar12 != piVar6) {
          do {
            if ((int *)piVar12[3] != (int *)0x0) {
              iVar10 = *(int *)piVar12[3];
              uVar9 = (**(code **)(iVar10 + 0x40))();
              (**(code **)(iVar10 + 0x50))(uVar9);
              piVar6 = local_98;
            }
            piVar12 = (int *)*piVar12;
          } while (piVar12 != piVar6);
        }
        if (*(undefined4 **)(param_1 + 0x74) == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)**(undefined4 **)(param_1 + 0x74);
        }
        puVar14 = *(undefined4 **)(param_1 + 0x74);
        for (; puVar8 != puVar14; puVar8 = (undefined4 *)*puVar8) {
          if ((int *)puVar8[3] != (int *)0x0) {
            iVar10 = *(int *)puVar8[3];
            uVar9 = (**(code **)(iVar10 + 0x40))();
            (**(code **)(iVar10 + 0x50))(uVar9);
          }
        }
        FUN_001fe260();
        return;
      }
      if (puVar15 != puVar2) goto LAB_000d88f4;
      piVar12 = (int *)puVar14[3];
    }
    else {
LAB_000d88f4:
      piVar12 = (int *)puVar15[3];
    }
    if ((piVar12 != (int *)0x0) &&
       (iVar10 = (**(code **)(*piVar12 + 0xf4))(), puVar8 = local_90, iVar10 != 0)) {
      FUN_00017b60(iVar10,0);
      puVar8 = local_90;
    }
    if (puVar15 == puVar2) {
      puVar14 = (undefined4 *)*puVar14;
    }
    else {
      puVar15 = (undefined4 *)*puVar15;
    }
  } while( true );
}
