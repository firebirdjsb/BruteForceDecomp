/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01F5C70B6EF7029EADC13D1FCE768BED8607A5E86DFC6B51C8A787574942B9E3
 * Entry: 0x000377b0, Ghidra index: 367, label: FUN_000377b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0001fe80(void);

extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00044480(void);
extern void FUN_000447b0(int *param_1,float param_2);
extern void FUN_00055a60(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0003abe0(float param_1);
extern undefined4 FUN_00055aa0(void);
extern void FUN_00022dc0(void);
extern void FUN_00055d30(undefined4 param_1);
extern void FUN_0001d470(void);
extern undefined4 FUN_000230d0(int param_1);
extern void FUN_000556e0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern undefined4 FUN_00022f70(void);
extern void FUN_00055b10(void);
extern void FUN_00055c00(void);

extern uint32_t DAT_004a5908;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
void FUN_000377b0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int unaff_retaddr;
  bool bStack_212;
  bool bStack_211;
  int iStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e4;
  undefined **ppuStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  byte bStack_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_15c;
  undefined **ppuStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_144;
  undefined **ppuStack_13c;
  undefined4 uStack_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte bStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [92];
  undefined4 uStack_4c;
  
  FUN_000120f0();
  if (*(int *)(param_1 + 0x9bc) == 0) {
    FUN_00044480();
  }
  FUN_000447b0(param_1,*(undefined4 *)(param_1 + 0x440));
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4);
  if ((((*(uint *)(iVar6 + 0x88) & 0x4000) == 0) &&
      ((*(byte *)(&DAT_004a5908 + *(int *)(iVar6 + 0x5c)) & 0x20) == 0)) &&
     (iVar6 = FUN_0004a860(param_1), iVar6 != *(int *)(param_1 + 0xa0))) {
    if (*(int *)(param_1 + 0xa0) != iVar6) {
      FUN_0008f6a0(iVar6);
    }
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 1;
  }
  FUN_0003abe0(*(undefined4 *)(param_1 + 0x440));
  (*(code *)**(undefined4 **)(param_1 + 0xc4))(*(undefined4 *)(param_1 + 0x440));
  if ((((*(byte *)(param_1 + 0xcc) & 1) == 0) || (*(float *)(param_1 + 200) == 0.0)) &&
     (iVar6 = FUN_00055aa0(), (*(byte *)(iVar6 + 0x88) & 1) == 0)) {
    iStack_200 = 0;
    iVar6 = param_1;
LAB_000378b7:
    iVar2 = *(int *)(iVar6 + 0x44);
    if (((iVar2 == 0) || (iVar2 < 0)) || (0x86 < iVar2)) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(iVar2 * 0x40 + *(int *)(iVar6 + 0x4c) + 0x20))(param_1);
    }
    if ((iVar6 == 0) || ((iVar6 != 1 && (iVar6 == 2)))) {
      bVar10 = false;
      if (*(int *)(param_1 + 0x42c) == 0) {
        FUN_00022dc0();
        uStack_4c = 1;
        FUN_00055d30(auStack_a8);
        FUN_0001d470();
      }
      uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
      if (*(uint *)(param_1 + 0x424) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
      }
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x88) >> 0xd & 1) == 0) {
        iVar6 = FUN_00055aa0();
        if ((((*(uint *)(iVar6 + 0x88) & 0x2000) == 0) || (*(char *)(iVar6 + 0x19) != '\0')) &&
           (iVar6 != -0x1c)) {
          bVar10 = *(int *)(iVar6 + 0x20) == 4;
          FUN_000230d0(*(int *)(iVar6 + 0x20));
        }
        iVar6 = FUN_00055aa0();
        uVar5 = *(uint *)(iVar6 + 0x88);
        uVar8 = uVar5 >> 0x14 & 7;
        if (uVar8 == 0xffffffff) {
          bStack_211 = (bool)((byte)(uVar5 >> 0x10) & 1);
        }
        else {
          bStack_211 = uVar8 != 0;
        }
        *(uint *)(iVar6 + 0x88) = uVar5 | 0x700000;
        if (*(int *)(param_1 + 0x42c) == 0) goto LAB_00037a20;
        FUN_0001d470();
        do {
          piVar1 = (int *)(param_1 + 0x42c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined4 *)(param_1 + 0x428) = 0;
          }
LAB_00037a20:
          do {
            if (*(int *)(param_1 + 0x42c) == 0) {
              bStack_1a8 = bStack_1a8 & 0xfe;
              ppuStack_1f8 = &PTR_FUN_003a4f68;
              iStack_1e4 = 0;
              uStack_1ec = 0;
              uStack_1f0 = 0;
              uStack_1f4 = 0;
              iStack_1d0 = 0;
              iStack_1bc = 0;
              ppuStack_1dc = &PTR_FUN_003a4f64;
              uStack_1d8 = 0;
              uStack_1c4 = 0;
              uStack_1c8 = 0;
              uStack_1cc = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              uStack_1ac = 0;
              uStack_1b8 = 0;
              iStack_1a0 = 0;
              uStack_15c = 0;
              FUN_000556e0();
              uStack_19c = 1;
              FUN_00055d30(&ppuStack_1f8);
              if (iStack_1a0 != 0) {
                FUN_0008f6e0();
              }
              ppuStack_1dc = &PTR_FUN_003a4f64;
              if (iStack_1bc != 0) {
                FUN_0008f6e0();
              }
              if (iStack_1d0 != 0) {
                FUN_0008f6e0();
              }
              ppuStack_1f8 = &PTR_FUN_003a4f68;
              if (iStack_1e4 != 0) {
                FUN_0008f6e0();
              }
            }
            uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
            if (*(uint *)(param_1 + 0x424) <= uVar5) {
              uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
            }
            iVar6 = *(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4);
            uVar5 = *(uint *)(iVar6 + 0x88);
            uVar8 = uVar5 >> 0x11 & 7;
            if (uVar8 == 0xffffffff) {
              bVar9 = (bool)((byte)(uVar5 >> 0xf) & 1);
            }
            else {
              bVar9 = uVar8 != 0;
            }
            *(uint *)(iVar6 + 0x88) = uVar5 | 0xe0000;
            if (*(int *)(param_1 + 0x42c) == 0) {
              bStack_108 = bStack_108 & 0xfe;
              ppuStack_158 = &PTR_FUN_003a4f68;
              iStack_144 = 0;
              uStack_14c = 0;
              uStack_150 = 0;
              uStack_154 = 0;
              iStack_130 = 0;
              iStack_11c = 0;
              ppuStack_13c = &PTR_FUN_003a4f64;
              uStack_138 = 0;
              uStack_124 = 0;
              uStack_128 = 0;
              uStack_12c = 0;
              uStack_114 = 0;
              uStack_110 = 0;
              uStack_10c = 0;
              uStack_118 = 0;
              iStack_100 = 0;
              uStack_bc = 0;
              FUN_000556e0();
              uStack_fc = 1;
              FUN_00055d30(&ppuStack_158);
              if (iStack_100 != 0) {
                FUN_0008f6e0();
              }
              ppuStack_13c = &PTR_FUN_003a4f64;
              if (iStack_11c != 0) {
                FUN_0008f6e0();
              }
              if (iStack_130 != 0) {
                FUN_0008f6e0();
              }
              ppuStack_158 = &PTR_FUN_003a4f68;
              if (iStack_144 != 0) {
                FUN_0008f6e0();
              }
            }
            uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
            if (*(uint *)(param_1 + 0x424) <= uVar5) {
              uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
            }
            uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x5c);
            if (bStack_211 != false) {
              iVar6 = *(int *)(unaff_retaddr + 0x44);
              if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
                (**(code **)(iVar6 * 0x40 + *(int *)(unaff_retaddr + 0x4c) + 0x10))();
              }
            }
            uVar4 = *(undefined4 *)(unaff_retaddr + 0x44);
            *(undefined4 *)(unaff_retaddr + 0x44) = uVar3;
            if (bVar9 == false) {
LAB_00037df3:
              iVar6 = FUN_00055aa0();
              *(undefined4 *)(unaff_retaddr + 0x44) = *(undefined4 *)(iVar6 + 0x5c);
              iVar6 = FUN_00055aa0();
              if (*(float *)(iVar6 + 0x84) == 0.0) {
                FUN_00022f70();
                FUN_00055b10();
              }
              if ((bVar10) &&
                 (iVar6 = FUN_0004a860(unaff_retaddr), iVar6 != *(int *)(unaff_retaddr + 0xa0))) {
                if (*(int *)(unaff_retaddr + 0xa0) != iVar6) {
                  FUN_0008f6a0(iVar6);
                }
                *(byte *)(unaff_retaddr + 0xa8) = *(byte *)(unaff_retaddr + 0xa8) | 1;
              }
              FUN_0003abe0(0);
              FUN_00055c00();
              iStack_200 = iStack_200 + 1;
              iVar6 = unaff_retaddr;
              if (3 < iStack_200) goto LAB_000382ef;
              goto LAB_000378b7;
            }
            (**(code **)(*(int *)(unaff_retaddr + 0x40) + 4))();
            iVar6 = *(int *)(unaff_retaddr + 0x44);
            if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
              uStack_b0 = *(undefined4 *)(iVar6 * 0x40 + 8 + *(int *)(unaff_retaddr + 0x4c));
              puVar7 = (undefined4 *)(iVar6 * 0x40 + *(int *)(unaff_retaddr + 0x4c));
              uStack_ac = puVar7[3];
              iVar6 = (*(code *)*puVar7)();
              if (iVar6 != 0) goto LAB_00037df3;
            }
            *(undefined4 *)(unaff_retaddr + 0x44) = uVar4;
          } while (*(int *)(param_1 + 0x42c) == 0);
          uVar5 = *(int *)(param_1 + 0x428) + -1 + *(int *)(param_1 + 0x42c);
          if (*(uint *)(param_1 + 0x424) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
          }
          puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x420) + uVar5 * 4);
          if (puVar7[0x16] != 0) {
            FUN_0008f6e0();
          }
          puVar7[7] = &PTR_FUN_003a4f64;
          FUN_00012080();
          FUN_00012080();
          *puVar7 = &PTR_FUN_003a4f68;
          FUN_0001fe80();
        } while( true );
      }
      iVar6 = FUN_00055aa0();
      uVar5 = *(uint *)(iVar6 + 0x88);
      uVar8 = uVar5 >> 0x14 & 7;
      if (uVar8 == 0xffffffff) {
        bStack_212 = (bool)((byte)(uVar5 >> 0x10) & 1);
      }
      else {
        bStack_212 = uVar8 != 0;
      }
      *(uint *)(iVar6 + 0x88) = uVar5 | 0x700000;
      if (*(int *)(param_1 + 0x42c) == 0) goto LAB_00037f01;
      FUN_0001d470();
      do {
        piVar1 = (int *)(param_1 + 0x42c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(param_1 + 0x428) = 0;
        }
LAB_00037f01:
        do {
          if (*(int *)(param_1 + 0x42c) == 0) {
            bStack_108 = bStack_108 & 0xfe;
            ppuStack_158 = &PTR_FUN_003a4f68;
            iStack_144 = 0;
            uStack_14c = 0;
            uStack_150 = 0;
            uStack_154 = 0;
            iStack_130 = 0;
            iStack_11c = 0;
            ppuStack_13c = &PTR_FUN_003a4f64;
            uStack_138 = 0;
            uStack_124 = 0;
            uStack_128 = 0;
            uStack_12c = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_118 = 0;
            iStack_100 = 0;
            uStack_bc = 0;
            FUN_000556e0();
            uStack_fc = 1;
            FUN_00055d30(&ppuStack_158);
            if (iStack_100 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_13c = &PTR_FUN_003a4f64;
            if (iStack_11c != 0) {
              FUN_0008f6e0();
            }
            if (iStack_130 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_158 = &PTR_FUN_003a4f68;
            if (iStack_144 != 0) {
              FUN_0008f6e0();
            }
          }
          uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
          if (*(uint *)(param_1 + 0x424) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
          }
          iVar6 = *(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4);
          uVar5 = *(uint *)(iVar6 + 0x88);
          uVar8 = uVar5 >> 0x11 & 7;
          if (uVar8 == 0xffffffff) {
            bVar10 = (bool)((byte)(uVar5 >> 0xf) & 1);
          }
          else {
            bVar10 = uVar8 != 0;
          }
          *(uint *)(iVar6 + 0x88) = uVar5 | 0xe0000;
          if (*(int *)(param_1 + 0x42c) == 0) {
            bStack_1a8 = bStack_1a8 & 0xfe;
            ppuStack_1f8 = &PTR_FUN_003a4f68;
            iStack_1e4 = 0;
            uStack_1ec = 0;
            uStack_1f0 = 0;
            uStack_1f4 = 0;
            iStack_1d0 = 0;
            iStack_1bc = 0;
            ppuStack_1dc = &PTR_FUN_003a4f64;
            uStack_1d8 = 0;
            uStack_1c4 = 0;
            uStack_1c8 = 0;
            uStack_1cc = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            uStack_1b8 = 0;
            iStack_1a0 = 0;
            uStack_15c = 0;
            FUN_000556e0();
            uStack_19c = 1;
            FUN_00055d30(&ppuStack_1f8);
            if (iStack_1a0 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_1dc = &PTR_FUN_003a4f64;
            if (iStack_1bc != 0) {
              FUN_0008f6e0();
            }
            if (iStack_1d0 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_1f8 = &PTR_FUN_003a4f68;
            if (iStack_1e4 != 0) {
              FUN_0008f6e0();
            }
          }
          uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
          if (*(uint *)(param_1 + 0x424) <= uVar5) {
            uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
          }
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x5c);
          if (bStack_212 != false) {
            iVar6 = *(int *)(unaff_retaddr + 0x44);
            if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
              iVar6 = iVar6 * 0x40 + *(int *)(unaff_retaddr + 0x4c);
              uStack_b0 = *(undefined4 *)(iVar6 + 0x18);
              uStack_ac = *(undefined4 *)(iVar6 + 0x1c);
              (**(code **)(iVar6 + 0x10))();
            }
          }
          uVar4 = *(undefined4 *)(unaff_retaddr + 0x44);
          *(undefined4 *)(unaff_retaddr + 0x44) = uVar3;
          if (bVar10 == false) {
LAB_000382db:
            iVar6 = FUN_00055aa0();
            *(undefined4 *)(unaff_retaddr + 0x44) = *(undefined4 *)(iVar6 + 0x5c);
            goto LAB_000382ef;
          }
          (**(code **)(*(int *)(unaff_retaddr + 0x40) + 4))();
          iVar6 = *(int *)(unaff_retaddr + 0x44);
          if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
            uStack_b0 = *(undefined4 *)(iVar6 * 0x40 + 8 + *(int *)(unaff_retaddr + 0x4c));
            puVar7 = (undefined4 *)(iVar6 * 0x40 + *(int *)(unaff_retaddr + 0x4c));
            uStack_ac = puVar7[3];
            iVar6 = (*(code *)*puVar7)();
            if (iVar6 != 0) goto LAB_000382db;
          }
          *(undefined4 *)(unaff_retaddr + 0x44) = uVar4;
        } while (*(int *)(param_1 + 0x42c) == 0);
        uVar5 = *(int *)(param_1 + 0x42c) + -1 + *(int *)(param_1 + 0x428);
        if (*(uint *)(param_1 + 0x424) <= uVar5) {
          uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
        }
        puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x420) + uVar5 * 4);
        if (puVar7[0x16] != 0) {
          FUN_0008f6e0();
        }
        puVar7[7] = &PTR_FUN_003a4f64;
        FUN_00012080();
        FUN_00012080();
        *puVar7 = &PTR_FUN_003a4f68;
        FUN_0001fe80();
      } while( true );
    }
  }
LAB_000382ef:
  FUN_0001b4b0(*(undefined4 *)(unaff_retaddr + 0x440));
  FUN_00016030();
  return;
}
