/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A322E6003D4E3CBA46BC3BCF0A033E03F48C4749706E2EFDBE4043D5B7C8740A
 * Entry: 0x00203830, Ghidra index: 7283, label: FUN_00203830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
extern uint32_t PTR_LAB_003a4f50;
void FUN_00203830(int param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piStack_3c4;
  int *apiStack_3bc [3];
  int iStack_3b0;
  uint uStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_398;
  uint uStack_394;
  int *piStack_390;
  int *piStack_38c;
  uint uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  int *local_378;
  int iStack_374;
  undefined **ppuStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  uint uStack_35c;
  undefined **ppuStack_354;
  undefined4 uStack_350;
  int iStack_34c;
  uint uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int iStack_338;
  uint uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  byte bStack_320;
  int iStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_2d4;
  undefined **ppuStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  uint uStack_2bc;
  undefined **ppuStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  uint uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  byte bStack_280;
  int iStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_234;
  undefined **ppuStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int iStack_220;
  uint uStack_21c;
  undefined **ppuStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  byte bStack_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_194;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined **ppuStack_180;
  undefined **ppuStack_17c;
  undefined4 uStack_178;
  int iStack_170;
  int iStack_15c;
  undefined **appuStack_140 [5];
  int iStack_12c;
  undefined1 uStack_128;
  undefined **ppuStack_124;
  int iStack_118;
  int iStack_104;
  int iStack_e8;
  undefined4 uStack_e4;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [92];
  undefined4 uStack_44;
  
  if (*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0x24);
  }
  if (piVar4 != *(int **)(param_1 + 0x24)) {
    do {
      piVar6 = (int *)piVar4[3];
      if ((piVar6 != (int *)0x0) &&
         (((local_378 = piVar4, iVar5 = (**(code **)(*piVar6 + 4))(), iVar5 != 0 ||
           (((((int *)piVar4[3] != (int *)0x0 &&
              (piVar6 = (int *)(**(code **)(*(int *)piVar4[3] + 0xc))(), piVar6 != (int *)0x0)) &&
             (iVar5 = (**(code **)(*piVar6 + 0x20))(), iVar5 == 7)) &&
            (piVar6 = (int *)piVar6[0x31], piVar6 != (int *)0x0)))) && (piVar6 != (int *)0x0)))) {
        piStack_3c4 = (int *)piVar4[3];
        if ((piStack_3c4 == (int *)0x0) ||
           ((iVar5 = (**(code **)(*piStack_3c4 + 4))(), iVar5 == 0 &&
            ((((int *)piVar4[3] == (int *)0x0 ||
              (piVar6 = (int *)(**(code **)(*(int *)piVar4[3] + 0xc))(), piVar6 == (int *)0x0)) ||
             ((iVar5 = (**(code **)(*piVar6 + 0x20))(), iVar5 != 7 ||
              (piStack_3c4 = (int *)piVar6[0x31], piStack_3c4 == (int *)0x0)))))))) {
          piStack_3c4 = (int *)0x0;
        }
        piVar6 = (int *)(**(code **)(*piStack_3c4 + 0xec))();
        if ((piVar6 != (int *)0x0) &&
           (iVar5 = (**(code **)(*piStack_3c4 + 0xf4))(), piVar4 = local_378, iStack_3a0 = iVar5,
           iVar5 != 0)) {
          iStack_374 = FUN_000120f0();
          bVar3 = false;
          if (*(int *)(param_1 + 0x70) != 0) {
            *(int *)(iVar5 + 0x460) = *(int *)(param_1 + 0x70);
          }
          *(uint *)(iVar5 + 0x3c4) =
               ((byte)~(*(byte *)(param_1 + 0x48) >> 2) & 1 | 2) << 1 |
               *(uint *)(iVar5 + 0x3c4) & 0xfffffffd;
          if ((*(uint *)(param_1 + 0x74) != 0xffffffff) &&
             (uStack_388 = *(uint *)(param_1 + 0x74), uVar7 = (**(code **)(*piVar6 + 0x9c))(),
             uStack_388 != uVar7)) {
            (**(code **)(*piVar6 + 0xa0))(uStack_388);
            FUN_0004e030();
          }
          if (*(int *)(param_1 + 0x44) != 0) {
            FUN_00039f00(iVar5);
            FUN_00055b50();
            FUN_00015fe0();
          }
          iVar9 = iStack_374;
          iVar8 = FUN_000120f0();
          if (((iVar8 != 0) &&
              (iVar8 = FUN_000120f0(), (*(byte *)(*(int *)(iVar8 + 0xc) + 0x1a8) & 1) != 0)) &&
             (-1 < *(int *)(param_1 + 0x40))) {
            if ((((*(byte *)(param_1 + 0x80) & 1) != 0) && (iVar9 != 0)) &&
               (iVar9 = FUN_00126890(), iVar9 != 0)) {
              if ((*(byte *)(param_1 + 0x80) & 2) == 0) {
                FUN_00129470();
                bVar3 = true;
              }
              else {
                FUN_001294c0();
              }
            }
            if ((-1 < *(int *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x40) < 4)) {
              FUN_00018040(iVar5,0);
            }
          }
          if (*(int *)(param_1 + 0x5c) != 0) {
            FUN_000122d0(*(int *)(param_1 + 0x5c));
            iVar9 = FUN_001fb020();
            if (iVar9 != 0) {
              FUN_001fb020();
              FUN_00012250();
            }
            iVar9 = *(int *)(param_1 + 0x6c);
            if ((iVar9 != 0) && (iStack_15c != iVar9)) {
              FUN_0008f6a0(iVar9);
            }
            if (((uint)piStack_3c4 & -(uint)((*(byte *)((int)piStack_3c4 + 0x26) & 0x40) != 0)) != 0
               ) {
              FUN_00012000(uStack_178,&ppuStack_180);
            }
            ppuStack_17c = &PTR_FUN_003a4f64;
            if (iStack_15c != 0) {
              FUN_0008f6e0();
            }
            if (iStack_170 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_180 = &PTR_LAB_003a4f50;
          }
          if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
            FUN_00039980(iVar5);
          }
          if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
            FUN_00039f00(iVar5);
          }
          iStack_398 = 0;
          uStack_394 = 0;
          piStack_390 = (int *)0x0;
          piStack_38c = (int *)0x0;
          if (*(int *)(param_1 + 0x50) == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 6);
          }
          iVar5 = (int)piVar4 + -1;
          if (-1 < iVar5) {
            piStack_3c4 = (int *)(iVar5 * 0x40);
            uStack_388 = iVar5 * 8 + 8;
            apiStack_3bc[0] = piVar4;
            do {
              puVar13 = (undefined4 *)(*(int *)(param_1 + 0x50) + (int)piStack_3c4);
              if (0 < *(int *)(*(int *)(param_1 + 0x50) + (int)piStack_3c4)) {
                FUN_00022dc0();
                piVar4 = (int *)puVar13[2];
                uStack_e4 = *puVar13;
                uStack_b8 = uStack_b8 & 0xffffefff | 0x2000;
                if ((piVar4 != (int *)0x0) &&
                   (((iVar5 = (**(code **)(*piVar4 + 4))(), iVar5 != 0 ||
                     (((((int *)puVar13[2] != (int *)0x0 &&
                        (piVar4 = (int *)(**(code **)(*(int *)puVar13[2] + 0xc))(),
                        piVar4 != (int *)0x0)) &&
                       (iVar5 = (**(code **)(*piVar4 + 0x20))(), iVar5 == 7)) &&
                      (piVar4 = (int *)piVar4[0x31], piVar4 != (int *)0x0)))) &&
                    (piVar4 != (int *)0x0)))) {
                  iVar5 = FUN_001fb020();
                  if (iStack_e8 != iVar5) {
                    FUN_0008f6a0(iVar5);
                  }
                  uStack_b8 = uStack_b8 ^ ((uint)(iVar5 != 0) << 0xb ^ uStack_b8) & 0x800;
                }
                if (puVar13[4] != 0) {
                  uStack_128 = 1;
                  FUN_00058b60();
                }
                bVar1 = *(byte *)(puVar13 + 0xf);
                uStack_b4 = puVar13[0xc];
                if ((bVar1 & 1) == 0) {
                  uStack_b8 = uStack_b8 | 2;
                }
                else {
                  uStack_b8 = uStack_b8 & 0xfffffffd;
                }
                uStack_a8 = puVar13[0xe];
                uStack_a4 = puVar13[0xd];
                uStack_b8 = (bVar1 & 2) << 1 | uStack_388 & 0xf8 |
                            (uStack_b8 ^ ((uint)bVar1 << 7 ^ uStack_b8) & 0x200) & 0xffffff03;
                FUN_00055d30(appuStack_140);
                bVar3 = true;
                if (iStack_e8 != 0) {
                  FUN_0008f6e0();
                }
                ppuStack_124 = &PTR_FUN_003a4f64;
                if (iStack_104 != 0) {
                  FUN_0008f6e0();
                }
                if (iStack_118 != 0) {
                  FUN_0008f6e0();
                }
                appuStack_140[0] = &PTR_FUN_003a4f68;
                if (iStack_12c != 0) {
                  FUN_0008f6e0();
                }
              }
              piStack_3c4 = (int *)((int)piStack_3c4 + -0x40);
              uStack_388 = uStack_388 - 8;
              apiStack_3bc[0] = (int *)((int)apiStack_3bc[0] + -1);
            } while (apiStack_3bc[0] != (int *)0x0);
          }
          iVar5 = iStack_3a0;
          FUN_0001a4e0();
          ppiVar10 = (int **)(param_1 + 0x7c);
          if (*(int *)(param_1 + 0x7c) < 1) {
            iVar9 = 0;
            if (0 < (int)piStack_38c) {
              do {
                apiStack_3bc[0] = piStack_390;
                uVar7 = (int)piStack_390 + iVar9;
                if (uStack_394 <= uVar7) {
                  uVar7 = uVar7 - uStack_394;
                }
                FUN_00055d30(*(undefined4 *)(iStack_398 + uVar7 * 4));
                iVar9 = iVar9 + 1;
                iVar5 = iStack_3a0;
              } while (iVar9 < (int)piStack_38c);
            }
            piVar4 = (int *)(iVar5 + 0x40);
            apiStack_3bc[0] = piVar4;
LAB_00203e00:
            if (*(int *)(iVar5 + 0x42c) == 0) {
              bStack_280 = bStack_280 & 0xfe;
              ppuStack_2d0 = &PTR_FUN_003a4f68;
              uStack_2bc = 0;
              uStack_2c4 = 0;
              uStack_2c8 = 0;
              uStack_2cc = 0;
              uStack_2a8 = 0;
              uStack_294 = 0;
              ppuStack_2b4 = &PTR_FUN_003a4f64;
              uStack_2b0 = 0;
              uStack_29c = 0;
              uStack_2a0 = 0;
              uStack_2a4 = 0;
              uStack_28c = 0;
              uStack_288 = 0;
              uStack_284 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_234 = 0;
              FUN_000556e0();
              uStack_274 = 1;
              if (*(uint *)(iVar5 + 0x424) <= *(int *)(iVar5 + 0x42c) + 1U) {
                FUN_00055ec0();
              }
              uVar7 = *(int *)(iVar5 + 0x428) + *(int *)(iVar5 + 0x42c);
              if (*(uint *)(iVar5 + 0x424) <= uVar7) {
                uVar7 = uVar7 - *(uint *)(iVar5 + 0x424);
              }
              if (*(int *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) == 0) {
                uVar11 = FUN_002ea01d(0xa0);
                *(undefined4 *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) = uVar11;
              }
              puVar13 = *(undefined4 **)(*(int *)(iVar5 + 0x420) + uVar7 * 4);
              if (puVar13 != (undefined4 *)0x0) {
                *puVar13 = &PTR_FUN_003a4f68;
                FUN_000c72a0();
                FUN_0001fe70();
                FUN_00012290();
                puVar13[7] = &PTR_FUN_003a4f64;
                FUN_00055630();
                puVar13[0x16] = 0;
                puVar13[0x27] = 0;
                FUN_00055790(&ppuStack_2d0);
                piVar4 = apiStack_3bc[0];
              }
              *(int *)(iVar5 + 0x42c) = *(int *)(iVar5 + 0x42c) + 1;
              if ((uStack_278 != 0) && ((uStack_278 & 1) == 0)) {
                iVar8 = uStack_278 * 0x19660d;
                uStack_278 = 0;
                iVar9 = *(int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                piVar6 = (int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                while (iVar9 != 0) {
                  piVar2 = (int *)*piVar6;
                  if (piVar2 == &iStack_27c) {
                    *piVar6 = *(int *)*piVar6;
                    break;
                  }
                  piVar6 = piVar2;
                  iVar9 = *piVar2;
                }
              }
              ppuStack_2b4 = &PTR_FUN_003a4f64;
              if ((uStack_294 != 0) && ((uStack_294 & 1) == 0)) {
                iVar8 = FUN_0008f690();
                uStack_294 = 0;
                iVar9 = *(int *)(&DAT_00414da0 + iVar8 * 4);
                piVar6 = (int *)(&DAT_00414da0 + iVar8 * 4);
                while (iVar9 != 0) {
                  piVar2 = (int *)*piVar6;
                  if (piVar2 == &iStack_298) {
                    *piVar6 = *(int *)*piVar6;
                    break;
                  }
                  piVar6 = piVar2;
                  iVar9 = *piVar2;
                }
              }
              if ((uStack_2a8 != 0) && ((uStack_2a8 & 1) == 0)) {
                iVar8 = FUN_0008f690();
                uStack_2a8 = 0;
                iVar9 = *(int *)(&DAT_00414da0 + iVar8 * 4);
                piVar6 = (int *)(&DAT_00414da0 + iVar8 * 4);
                while (iVar9 != 0) {
                  piVar2 = (int *)*piVar6;
                  if (piVar2 == &iStack_2ac) {
                    *piVar6 = *(int *)*piVar6;
                    break;
                  }
                  piVar6 = piVar2;
                  iVar9 = *piVar2;
                }
              }
              ppuStack_2d0 = &PTR_FUN_003a4f68;
              if ((uStack_2bc != 0) && ((uStack_2bc & 1) == 0)) {
                iVar8 = uStack_2bc * 0x19660d;
                uStack_2bc = 0;
                iVar9 = *(int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                piVar6 = (int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                while (iVar9 != 0) {
                  piVar2 = (int *)*piVar6;
                  if (piVar2 == &iStack_2c0) {
                    *piVar6 = *(int *)*piVar6;
                    break;
                  }
                  piVar6 = piVar2;
                  iVar9 = *piVar2;
                }
              }
            }
            piVar6 = apiStack_3bc[0];
            uStack_388 = *(int *)(iVar5 + 0x428) + *(int *)(iVar5 + 0x42c);
            uVar7 = uStack_388 - 1;
            if (*(uint *)(iVar5 + 0x424) <= uVar7) {
              uVar7 = uVar7 - *(uint *)(iVar5 + 0x424);
            }
            iVar9 = piVar4[1];
            iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) + 0x5c);
            if (((iVar9 != 0) && (-1 < iVar9)) && (iVar9 < 0x87)) {
              iVar9 = iVar9 * 0x40 + piVar4[3];
              uStack_380 = *(undefined4 *)(iVar9 + 0x18);
              uStack_37c = *(undefined4 *)(iVar9 + 0x1c);
              (**(code **)(iVar9 + 0x10))();
              piVar4 = piVar6;
            }
            uStack_388 = piVar4[1];
            piVar4[1] = iVar8;
            (**(code **)(*piVar4 + 4))();
            iVar9 = piVar4[1];
            if (((iVar9 != 0) && (-1 < iVar9)) && (iVar9 < 0x87)) {
              uStack_188 = *(undefined4 *)(iVar9 * 0x40 + 8 + piVar4[3]);
              puVar13 = (undefined4 *)(iVar9 * 0x40 + piVar4[3]);
              uStack_184 = puVar13[3];
              iVar9 = (*(code *)*puVar13)();
              if (iVar9 != 0) goto LAB_002049c7;
            }
            piVar4[1] = uStack_388;
            if (*(int *)(iVar5 + 0x42c) != 0) {
              uVar7 = *(int *)(iVar5 + 0x42c) + -1 + *(int *)(iVar5 + 0x428);
              if (*(uint *)(iVar5 + 0x424) <= uVar7) {
                uVar7 = uVar7 - *(uint *)(iVar5 + 0x424);
              }
              puVar13 = *(undefined4 **)(*(int *)(iVar5 + 0x420) + uVar7 * 4);
              if (puVar13[0x16] != 0) {
                FUN_0008f6e0();
              }
              puVar13[7] = &PTR_FUN_003a4f64;
              FUN_00012080();
              FUN_00012080();
              *puVar13 = &PTR_FUN_003a4f68;
              FUN_0001fe80();
              piVar6 = (int *)(iVar5 + 0x42c);
              *piVar6 = *piVar6 + -1;
              if (*piVar6 == 0) {
                *(undefined4 *)(iVar5 + 0x428) = 0;
              }
            }
            goto LAB_00203e00;
          }
          iStack_3b0 = 0;
          uStack_3ac = 0;
          iStack_3a8 = 0;
          iStack_3a4 = 0;
          apiStack_3bc[0] = piStack_38c;
          if ((int)piStack_38c <= (int)*ppiVar10) {
            ppiVar10 = apiStack_3bc;
          }
          piVar4 = *ppiVar10;
          if (0 < (int)*ppiVar10) {
            do {
              apiStack_3bc[0] = piVar4;
              if (piStack_38c == (int *)0x0) {
                bStack_1e0 = bStack_1e0 & 0xfe;
                ppuStack_230 = &PTR_FUN_003a4f68;
                uStack_21c = 0;
                uStack_224 = 0;
                uStack_228 = 0;
                uStack_22c = 0;
                uStack_208 = 0;
                uStack_1f4 = 0;
                ppuStack_214 = &PTR_FUN_003a4f64;
                uStack_210 = 0;
                uStack_1fc = 0;
                uStack_200 = 0;
                uStack_204 = 0;
                uStack_1ec = 0;
                uStack_1e8 = 0;
                uStack_1e4 = 0;
                uStack_1f0 = 0;
                uStack_1d8 = 0;
                uStack_194 = 0;
                FUN_000556e0();
                uStack_1d4 = 1;
                FUN_00055d30(&ppuStack_230);
                if ((uStack_1d8 != 0) && ((uStack_1d8 & 1) == 0)) {
                  iVar9 = uStack_1d8 * 0x19660d;
                  uStack_1d8 = 0;
                  iVar5 = *(int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
                  piVar4 = (int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
                  while (iVar5 != 0) {
                    piVar6 = (int *)*piVar4;
                    if (piVar6 == &iStack_1dc) {
                      *piVar4 = *(int *)*piVar4;
                      break;
                    }
                    piVar4 = piVar6;
                    iVar5 = *piVar6;
                  }
                }
                ppuStack_214 = &PTR_FUN_003a4f64;
                if ((uStack_1f4 != 0) && ((uStack_1f4 & 1) == 0)) {
                  iVar9 = FUN_0008f690();
                  uStack_1f4 = 0;
                  iVar5 = *(int *)(&DAT_00414da0 + iVar9 * 4);
                  piVar4 = (int *)(&DAT_00414da0 + iVar9 * 4);
                  while (iVar5 != 0) {
                    piVar6 = (int *)*piVar4;
                    if (piVar6 == &iStack_1f8) {
                      *piVar4 = *(int *)*piVar4;
                      break;
                    }
                    piVar4 = piVar6;
                    iVar5 = *piVar6;
                  }
                }
                if ((uStack_208 != 0) && ((uStack_208 & 1) == 0)) {
                  iVar9 = FUN_0008f690();
                  uStack_208 = 0;
                  iVar5 = *(int *)(&DAT_00414da0 + iVar9 * 4);
                  piVar4 = (int *)(&DAT_00414da0 + iVar9 * 4);
                  while (iVar5 != 0) {
                    piVar6 = (int *)*piVar4;
                    if (piVar6 == &iStack_20c) {
                      *piVar4 = *(int *)*piVar4;
                      break;
                    }
                    piVar4 = piVar6;
                    iVar5 = *piVar6;
                  }
                }
                ppuStack_230 = &PTR_FUN_003a4f68;
                if ((uStack_21c != 0) && ((uStack_21c & 1) == 0)) {
                  iVar9 = uStack_21c * 0x19660d;
                  uStack_21c = 0;
                  iVar5 = *(int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
                  piVar4 = (int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
                  while (iVar5 != 0) {
                    piVar6 = (int *)*piVar4;
                    if (piVar6 == &iStack_220) {
                      *piVar4 = *(int *)*piVar4;
                      break;
                    }
                    piVar4 = piVar6;
                    iVar5 = *piVar6;
                  }
                }
              }
              uStack_388 = (int)piStack_38c + (int)piStack_390;
              uVar7 = uStack_388 - 1;
              if (uStack_394 <= uVar7) {
                uVar7 = uVar7 - uStack_394;
              }
              FUN_0020bc80(*(undefined4 *)(iStack_398 + uVar7 * 4));
              if (piStack_38c != (int *)0x0) {
                uVar7 = (int)piStack_38c + -1 + (int)piStack_390;
                if (uStack_394 <= uVar7) {
                  uVar7 = uVar7 - uStack_394;
                }
                puVar13 = *(undefined4 **)(iStack_398 + uVar7 * 4);
                if (puVar13[0x16] != 0) {
                  FUN_0008f6e0();
                }
                puVar13[7] = &PTR_FUN_003a4f64;
                FUN_00012080();
                FUN_00012080();
                *puVar13 = &PTR_FUN_003a4f68;
                FUN_0001fe80();
                piStack_38c = (int *)((int)piStack_38c + -1);
                if (piStack_38c == (int *)0x0) {
                  piStack_390 = (int *)0x0;
                }
              }
              apiStack_3bc[0] = (int *)((int)apiStack_3bc[0] + -1);
              piVar4 = apiStack_3bc[0];
            } while (apiStack_3bc[0] != (int *)0x0);
          }
          iVar5 = iStack_3a0;
          uStack_388 = 0;
          if (0 < (int)piStack_38c) {
            do {
              apiStack_3bc[0] = piStack_390;
              uVar7 = (int)piStack_390 + uStack_388;
              if (uStack_394 <= uVar7) {
                uVar7 = uVar7 - uStack_394;
              }
              uVar11 = *(undefined4 *)(iStack_398 + uVar7 * 4);
              if (*(uint *)(iVar5 + 0x424) <= *(int *)(iVar5 + 0x42c) + 1U) {
                FUN_00055ec0();
              }
              uVar7 = *(int *)(iVar5 + 0x428) + *(int *)(iVar5 + 0x42c);
              if (*(uint *)(iVar5 + 0x424) <= uVar7) {
                uVar7 = uVar7 - *(uint *)(iVar5 + 0x424);
              }
              if (*(int *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) == 0) {
                uVar12 = FUN_002ea01d(0xa0);
                *(undefined4 *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) = uVar12;
              }
              puVar13 = *(undefined4 **)(*(int *)(iVar5 + 0x420) + uVar7 * 4);
              if (puVar13 != (undefined4 *)0x0) {
                *puVar13 = &PTR_FUN_003a4f68;
                puVar13[5] = 0;
                puVar13[3] = 0;
                puVar13[2] = 0;
                puVar13[1] = 0;
                puVar13[10] = 0;
                puVar13[0xf] = 0;
                puVar13[8] = 0;
                puVar13[7] = &PTR_FUN_003a4f64;
                puVar13[0xd] = 0;
                puVar13[0xc] = 0;
                puVar13[0xb] = 0;
                puVar13[0x11] = 0;
                puVar13[0x12] = 0;
                puVar13[0x13] = 0;
                puVar13[0x10] = 0;
                *(byte *)(puVar13 + 0x14) = *(byte *)(puVar13 + 0x14) & 0xfe;
                puVar13[0x16] = 0;
                puVar13[0x27] = 0;
                FUN_00055790(uVar11);
              }
              *(int *)(iVar5 + 0x42c) = *(int *)(iVar5 + 0x42c) + 1;
              uStack_388 = uStack_388 + 1;
            } while ((int)uStack_388 < (int)piStack_38c);
          }
          iVar5 = iStack_3a0;
          if (iStack_3a4 != 0) {
            piVar4 = (int *)(iStack_3a0 + 0x40);
            do {
              if (iStack_3a4 == 0) {
                bStack_320 = bStack_320 & 0xfe;
                ppuStack_370 = &PTR_FUN_003a4f68;
                uStack_35c = 0;
                uStack_364 = 0;
                uStack_368 = 0;
                uStack_36c = 0;
                uStack_348 = 0;
                uStack_334 = 0;
                ppuStack_354 = &PTR_FUN_003a4f64;
                uStack_350 = 0;
                uStack_33c = 0;
                uStack_340 = 0;
                uStack_344 = 0;
                uStack_32c = 0;
                uStack_328 = 0;
                uStack_324 = 0;
                uStack_330 = 0;
                uStack_318 = 0;
                uStack_2d4 = 0;
                FUN_000556e0();
                uStack_314 = 1;
                if (uStack_3ac <= iStack_3a4 + 1U) {
                  FUN_00055ec0();
                }
                uVar7 = iStack_3a4 + iStack_3a8;
                if (uStack_3ac <= uVar7) {
                  uVar7 = uVar7 - uStack_3ac;
                }
                if (*(int *)(iStack_3b0 + uVar7 * 4) == 0) {
                  uVar11 = FUN_002ea01d(0xa0);
                  *(undefined4 *)(iStack_3b0 + uVar7 * 4) = uVar11;
                }
                puVar13 = *(undefined4 **)(iStack_3b0 + uVar7 * 4);
                if (puVar13 != (undefined4 *)0x0) {
                  *puVar13 = &PTR_FUN_003a4f68;
                  FUN_000c72a0();
                  FUN_0001fe70();
                  FUN_00012290();
                  puVar13[7] = &PTR_FUN_003a4f64;
                  FUN_00055630();
                  puVar13[0x16] = 0;
                  puVar13[0x27] = 0;
                  FUN_00055790(&ppuStack_370);
                }
                iStack_3a4 = iStack_3a4 + 1;
                if ((uStack_318 != 0) && ((uStack_318 & 1) == 0)) {
                  iVar8 = uStack_318 * 0x19660d;
                  uStack_318 = 0;
                  iVar9 = *(int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                  piVar6 = (int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                  while (iVar9 != 0) {
                    piVar2 = (int *)*piVar6;
                    if (piVar2 == &iStack_31c) {
                      *piVar6 = *(int *)*piVar6;
                      break;
                    }
                    piVar6 = piVar2;
                    iVar9 = *piVar2;
                  }
                }
                ppuStack_354 = &PTR_FUN_003a4f64;
                if ((uStack_334 != 0) && ((uStack_334 & 1) == 0)) {
                  iVar8 = FUN_0008f690();
                  uStack_334 = 0;
                  iVar9 = *(int *)(&DAT_00414da0 + iVar8 * 4);
                  piVar6 = (int *)(&DAT_00414da0 + iVar8 * 4);
                  while (iVar9 != 0) {
                    piVar2 = (int *)*piVar6;
                    if (piVar2 == &iStack_338) {
                      *piVar6 = *(int *)*piVar6;
                      break;
                    }
                    piVar6 = piVar2;
                    iVar9 = *piVar2;
                  }
                }
                if ((uStack_348 != 0) && ((uStack_348 & 1) == 0)) {
                  iVar8 = FUN_0008f690();
                  uStack_348 = 0;
                  iVar9 = *(int *)(&DAT_00414da0 + iVar8 * 4);
                  piVar6 = (int *)(&DAT_00414da0 + iVar8 * 4);
                  while (iVar9 != 0) {
                    piVar2 = (int *)*piVar6;
                    if (piVar2 == &iStack_34c) {
                      *piVar6 = *(int *)*piVar6;
                      break;
                    }
                    piVar6 = piVar2;
                    iVar9 = *piVar2;
                  }
                }
                ppuStack_370 = &PTR_FUN_003a4f68;
                if ((uStack_35c != 0) && ((uStack_35c & 1) == 0)) {
                  iVar8 = uStack_35c * 0x19660d;
                  uStack_35c = 0;
                  iVar9 = *(int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                  piVar6 = (int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
                  while (iVar9 != 0) {
                    piVar2 = (int *)*piVar6;
                    if (piVar2 == &iStack_360) {
                      *piVar6 = *(int *)*piVar6;
                      break;
                    }
                    piVar6 = piVar2;
                    iVar9 = *piVar2;
                  }
                }
              }
              apiStack_3bc[0] = (int *)(iStack_3a4 + iStack_3a8);
              uVar7 = (int)apiStack_3bc[0] - 1;
              if (uStack_3ac <= uVar7) {
                uVar7 = uVar7 - uStack_3ac;
              }
              FUN_00055d30(*(undefined4 *)(iStack_3b0 + uVar7 * 4));
              if (*(int *)(iVar5 + 0x42c) == 0) {
                FUN_00022dc0();
                uStack_44 = 1;
                FUN_00055d30(auStack_a0);
                FUN_0001d470();
              }
              apiStack_3bc[0] = (int *)(*(int *)(iVar5 + 0x428) + *(int *)(iVar5 + 0x42c));
              uVar7 = (int)apiStack_3bc[0] - 1;
              if (*(uint *)(iVar5 + 0x424) <= uVar7) {
                uVar7 = uVar7 - *(uint *)(iVar5 + 0x424);
              }
              uVar11 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x420) + uVar7 * 4) + 0x5c);
              FUN_00022f70();
              uVar12 = *(undefined4 *)(iVar5 + 0x44);
              iVar9 = *piVar4;
              *(undefined4 *)(iVar5 + 0x44) = uVar11;
              (**(code **)(iVar9 + 4))();
              iVar9 = *(int *)(iVar5 + 0x44);
              if (((iVar9 != 0) && (-1 < iVar9)) && (iVar9 < 0x87)) {
                uStack_188 = *(undefined4 *)(iVar9 * 0x40 + 8 + *(int *)(iVar5 + 0x4c));
                puVar13 = (undefined4 *)(iVar9 * 0x40 + *(int *)(iVar5 + 0x4c));
                uStack_184 = puVar13[3];
                iVar9 = (*(code *)*puVar13)();
                if (iVar9 != 0) goto LAB_002049bc;
              }
              *(undefined4 *)(iVar5 + 0x44) = uVar12;
              if (*(int *)(iVar5 + 0x42c) != 0) {
                FUN_0001d470();
                piVar6 = (int *)(iVar5 + 0x42c);
                *piVar6 = *piVar6 + -1;
                if (*piVar6 == 0) {
                  *(undefined4 *)(iVar5 + 0x428) = 0;
                }
              }
              if (iStack_3a4 == 0) goto LAB_002049bc;
              FUN_0001d470();
              iStack_3a4 = iStack_3a4 + -1;
            } while (iStack_3a4 != 0);
            iStack_3a8 = 0;
          }
LAB_002049bc:
          FUN_0001c2d0();
LAB_002049c7:
          if (((bVar3) && (iStack_374 != 0)) &&
             ((bVar1 = *(byte *)(iStack_374 + 0x834), (bVar1 & 1) == 0 || ((bVar1 & 2) == 0)))) {
            *(byte *)(iStack_374 + 0x834) = bVar1 | 3;
            FUN_00129530();
          }
          FUN_0001c2d0();
          piVar4 = local_378;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x24));
  }
  return;
}
