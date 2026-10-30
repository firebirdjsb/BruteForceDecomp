/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A94653025F863AE0AFEEF4C6496A4EB75A9C15E1B56CA1434501607308DD713D
 * Entry: 0x00117660, Ghidra index: 3601, label: FUN_00117660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00117660(int *param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  uint unaff_EBX;
  float10 extraout_ST0;
  int **ppiVar10;
  float *pfVar11;
  byte bStack_a1;
  int *piStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined1 uStack_91;
  float fStack_90;
  undefined8 uStack_8c;
  float fStack_84;
  int *piStack_80;
  float afStack_7c [2];
  float fStack_74;
  int *piStack_70;
  float fStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  int *piStack_48;
  float fStack_44;
  float fStack_40;
  int *piStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  
  uStack_9c = (int *)CONCAT13(1,(undefined3)uStack_9c);
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = (**(code **)(*(int *)param_1[0x169] + 0x18))(param_2);
  if (uVar3 == 0) goto LAB_00118e4a;
  if (uVar3 < 0x1b2ec99f) {
    if (uVar3 == 0x1b2ec99e) {
      iVar4 = *(int *)(param_1[0xba] + 0x130);
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x34))(1);
      iVar5 = FUN_0014d2e0();
      if (iVar4 == 0) {
        if ((iVar5 != 0) && (iVar4 = FUN_0014d2e0(), *(int *)(iVar4 + 0x1e8) != 0)) {
          iVar4 = FUN_0014d2e0();
          uVar6 = *(undefined4 *)(iVar4 + 0x1e8);
          iVar4 = FUN_0014d2e0();
          *(undefined4 *)(iVar4 + 0x1f8) = uVar6;
          iVar4 = FUN_0014d2e0();
          *(undefined4 *)(iVar4 + 0x1e8) = 0;
        }
      }
      else {
        cVar2 = FUN_0022d8e0(iVar4);
        if (cVar2 == '\0') {
          iVar4 = FUN_0014d2e0();
          *(undefined4 *)(iVar5 + 0x1f8) = *(undefined4 *)(iVar4 + 0x1e8);
          *(undefined4 *)(iVar5 + 0x1e8) = 0;
        }
        FUN_0022dd70();
      }
      *(undefined1 *)(param_1 + 0x1fa) = 0;
      *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
      return (uint)piStack_a0 >> 0x18;
    }
    if (0xfda32ab < uVar3) {
      if (uVar3 < 0x152e893a) {
        if (uVar3 == 0x152e8939) {
          cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
          if (cVar2 != '\0') {
            iVar4 = *(int *)(*(int *)(*(int *)(param_1[0xba] + 0x130) + 0xc) + 0xcc);
            FUN_0014a880();
            if (((iVar4 != 0) && (iVar5 = FUN_0012b3c0(), 0 < iVar5)) &&
               (iVar4 = **(int **)(iVar4 + 8), iVar4 != 0)) {
              iStack_68 = *(int *)(param_1[0xba] + 0x130);
              uStack_64 = *(undefined4 *)(iVar4 + 0x14);
              uStack_60 = 3;
              uStack_5c = 0;
              uStack_54 = 0x3f800000;
              uStack_58 = 0x3f800000;
              uStack_50 = 0x3f800000;
              FUN_000cdcb0(&uStack_91);
            }
            FUN_00117620();
            bVar9 = *(byte *)(param_1 + 0x1df) & 0xfe;
LAB_001181f3:
            *(byte *)(param_1 + 0x1df) = bVar9;
            param_1[0x1dd] = 0;
            return (uint)uStack_9c >> 0x18;
          }
          goto LAB_00118e4a;
        }
        if (0x1303b7c4 < uVar3) {
          if (uVar3 == 0x1342def2) {
            *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) | 1;
            param_1[0x1dd] = 0;
            return (uint)((uint)uStack_9c >> 24);
          }
          if (uVar3 != 0x14ee2201) {
            return 0;
          }
          cVar2 = FUN_0010e3e0();
          if (cVar2 != '\0') {
            FUN_0014d310();
            FUN_0014a880();
            FUN_0014d1a0();
            return (uint)uStack_9c >> 0x18;
          }
          goto LAB_00118e4a;
        }
        if (uVar3 != 0x1303b7c4) {
          if (uVar3 == 0x1096666f) {
            iVar4 = param_1[400];
            if (iVar4 != 0) {
              ppuStack_30 = &PTR_LAB_003a3fb4;
              uStack_20 = 0xffffffff;
              uStack_2c = 0xf;
              piStack_24 = param_1;
              uStack_28 = 0;
              FUN_001fe3d0(&ppuStack_30);
              ppuStack_30 = &PTR_LAB_003a4f50;
              iVar5 = FUN_0014ce00(param_1[0xba],*(undefined4 *)(iVar4 + 0xc),1);
              if (iVar5 != 0) {
                FUN_000db3e0(iVar4);
              }
              FUN_0014a880();
              FUN_000c4f10();
              return (uint)uStack_9c >> 0x18;
            }
          }
          else {
            if (uVar3 != 0x11866f3a) {
              return 0;
            }
            cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
            if (cVar2 != '\0') {
              uStack_5c = 0;
              uStack_34 = 0;
              FUN_0014b440();
              uStack_64 = (int *)uStack_8c;
              iStack_68 = (int)fStack_90;
              uStack_60 = uStack_8c._4_4_;
              afStack_7c[0] = -0.9659;
              piStack_80 = (int *)0x3e84816f;
              fStack_84 = 0.0;
              fStack_98 = 0.4;
              fStack_90 = 0.0;
              piStack_a0 = (int *)0x3dd4024b;
              fStack_6c = -0.38636002;
              uStack_8c = 0xbec5d0fb3dd4024b;
              fStack_74 = fStack_90;
              piStack_70 = piStack_a0;
              iVar4 = FUN_00122ea0((float)param_1[0x1fc] * (float)param_1[0x1fc]);
              fStack_98 = (float)extraout_ST0;
              *(byte *)(iVar4 + 0x748) = *(byte *)(iVar4 + 0x748) & 0xfb;
              fStack_90 = fStack_98 * fStack_84;
              piStack_a0 = (int *)(fStack_98 * (float)piStack_80);
              afStack_7c[0] = fStack_98 * afStack_7c[0];
              fStack_84 = fStack_90;
              piStack_80 = piStack_a0;
              uStack_8c._0_4_ = piStack_a0;
              uStack_8c._4_4_ = afStack_7c[0];
              (**(code **)(param_1[0x6d] + 0x28))();
              FUN_0001f9c0();
              fStack_98 = uStack_8c._4_4_;
              piStack_a0 = (int *)uStack_8c;
              fStack_84 = fStack_90;
              piStack_80 = (int *)uStack_8c;
              fStack_40 = fStack_90;
              piStack_3c = (int *)uStack_8c;
              afStack_7c[0] = uStack_8c._4_4_;
              fStack_38 = uStack_8c._4_4_;
              piVar8 = *(int **)(param_1[0xba] + 0x130);
              FUN_0014a150();
              FUN_0014a880();
              (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x34))(1);
              cVar2 = (**(code **)(*piVar8 + 0xc4))(afStack_7c);
              if (cVar2 == '\0') goto LAB_00118e4a;
              iVar4 = (**(code **)(*piVar8 + 0x40))();
              fStack_98 = fStack_6c + *(float *)(iVar4 + 0x2c);
              piStack_a0 = (int *)((float)piStack_70 + *(float *)(iVar4 + 0x28));
              fStack_4c = fStack_74 + *(float *)(iVar4 + 0x24);
              piStack_48 = piStack_a0;
              fStack_44 = fStack_98;
              (**(code **)(*piVar8 + 0x48))(&fStack_4c);
              FUN_002b3bc0(&iStack_68,&fStack_40);
            }
            *(undefined1 *)(param_1 + 0x1fa) = 0;
            *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
            if (param_1[0x7e] == 0x2a) {
              param_1[0x160] = 0x3e19999a;
              return (uint)uStack_9c >> 0x18;
            }
          }
          goto LAB_00118e4a;
        }
        piVar8 = (int *)param_1[400];
        if (piVar8 != (int *)0x0) {
          piStack_a0 = piVar8;
          if (*(int *)(piVar8[3] + 0x160) == 1) {
            ppuStack_1c = &PTR_LAB_003a3fb4;
            uStack_c = 0xffffffff;
            uStack_18 = 0xf;
            piStack_10 = param_1;
            uStack_14 = 0;
            FUN_001fe3d0(&ppuStack_1c);
            ppuStack_1c = &PTR_LAB_003a4f50;
            uVar6 = FUN_00146340();
            iVar4 = FUN_0014ce00(param_1[0xba],uVar6,1);
            if (iVar4 != 0) {
              *(undefined1 *)(param_1 + 0x210) = 0;
              FUN_0014d020();
              FUN_0014d2e0();
              FUN_0014a880();
              iVar4 = piVar8[0x7e];
              if (-1 < iVar4) {
                iVar5 = FUN_0014d2e0();
                *(int *)(iVar5 + 0x1f8) = iVar4;
                uVar6 = 0;
                FUN_0014d2e0(0);
                FUN_0022daf0(uVar6);
                piVar8 = piStack_a0;
              }
              param_1[0x16c] = param_1[0x1f8];
              param_1[0x1f8] = 0;
              FUN_000db3e0(piVar8);
            }
          }
          FUN_000c4f10();
          FUN_001241b0();
          *(undefined1 *)(param_1 + 0x1fa) = 0;
          return (uint)uStack_9c >> 0x18;
        }
        goto LAB_001186cb;
      }
      if (uVar3 < 0x1a4ed2c0) {
        if (uVar3 == 0x1a4ed2bf) {
          FUN_0014d470();
          return (uint)uStack_9c >> 0x18;
        }
        if (uVar3 != 0x17c67207) {
          if (uVar3 != 0x19f8311b) {
            return 0;
          }
          if ((*(int *)(param_1[0xba] + 0x130) != 0) && (iVar4 = FUN_001463c0(), iVar4 == 2)) {
            FUN_0014a150();
          }
          FUN_001215e0();
          return (uint)uStack_9c >> 0x18;
        }
        param_1[0x107] = 1;
        return CONCAT31(0x17c672,((uint)uStack_9c >> 24));
      }
      if (uVar3 != 0x1a6b4920) {
        return 0;
      }
      if ((char)param_1[0x1fa] != '\0') {
        iVar4 = param_1[0xba];
        piVar8 = (int *)(iVar4 + 0xf0);
        if (*(int *)(iVar4 + 0x130) != 0) {
          (**(code **)(*(int *)(iVar4 + 0x110) + 0x38))();
          *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
          *(undefined1 *)(param_1 + 0x1a8) = 0;
          *(undefined1 *)(param_1 + 0x1fa) = 0;
          return (uint)uStack_9c >> 0x18;
        }
        cVar2 = (**(code **)(*piVar8 + 0x20))();
        if (cVar2 != '\0') {
          if ((param_1[0x7b] == 7) && (iVar4 = FUN_0014d2e0(), iVar4 != 0)) {
            pfVar11 = &fStack_98;
            ppiVar10 = &piStack_a0;
            (**(code **)(*piVar8 + 0x5c))(ppiVar10,pfVar11);
            FUN_00149d30(ppiVar10,pfVar11);
            if (piStack_a0 == (int *)0x1) {
              piStack_a0 = *(int **)(param_1[0xba] + 0x110);
              uVar6 = FUN_0014d2e0();
              uVar6 = FUN_0022d820(uVar6);
              (*(code *)piStack_a0[0xb])(uVar6);
              (**(code **)(*piVar8 + 0x24))(0);
              *(undefined1 *)(param_1 + 0x1fa) = 0;
              return (uint)bStack_a1;
            }
          }
          if (param_1[0x7b] == 8) {
            iVar4 = (**(code **)(*piVar8 + 0x5c))();
            (**(code **)(**(int **)(iVar4 + 0x15c) + 0x2c))(piVar8);
          }
          else {
            *(undefined1 *)(param_1 + 0x1a8) = 1;
            (**(code **)(*piVar8 + 0x5c))();
            iVar4 = FUN_001463c0();
            if ((((iVar4 == 3) || (iVar4 == 2)) || (iVar4 == 5)) || (iVar4 == 0)) {
              *(undefined1 *)(param_1 + 0x1a8) = 0;
              *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
            }
          }
          (**(code **)(*piVar8 + 0x50))(param_1[0xba] + 0x110);
          iVar4 = *(int *)(param_1[0xba] + 0x130);
          FUN_0014a880();
          if (*(int *)(*(int *)(iVar4 + 0xc) + 4) == 0x18) {
            FUN_0010fed0();
            (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
            FUN_0010fef0();
            FUN_0010f7c0();
          }
        }
        *(undefined1 *)(param_1 + 0x1fa) = 0;
        return (uint)uStack_9c >> 0x18;
      }
      goto LAB_00118e4a;
    }
    if (uVar3 == 0xfda32ab) {
      iVar4 = (**(code **)(*param_1 + 0xf4))();
      if ((*(byte *)(iVar4 + 0x14) & 2) == 0) {
        iVar4 = FUN_0014d2e0();
        *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) | 4;
        return (uint)uStack_9c >> 0x18;
      }
      (**(code **)(*param_1 + 0xf4))();
      FUN_0004df70();
      return (uint)uStack_9c >> 0x18;
    }
    if (0xb6968b5 < uVar3) {
      if (uVar3 < 0xefa982c) {
        if (uVar3 == 0xefa982b) {
          *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) & 0xfd;
          param_1[0x1de] = 0;
          return (uint)((uint)uStack_9c >> 24);
        }
        if (uVar3 == 0xc0bd8c0) {
          *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) | 2;
          param_1[0x1de] = 0;
          return (uint)((uint)uStack_9c >> 24);
        }
        if (uVar3 == 0xcd73c75) {
          return CONCAT31(0xcd73c,((uint)uStack_9c >> 24));
        }
      }
      else if (uVar3 == 0xf8408d5) {
        *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xf7;
        iVar4 = FUN_0014d2e0();
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) & 0xfd;
        }
        iVar4 = FUN_0014d310();
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) & 0xfd;
          return (uint)uStack_9c >> 0x18;
        }
        goto LAB_00118e4a;
      }
      return 0;
    }
    if (uVar3 == 0xb6968b5) {
      param_1[0x6a] = -0x3d3a0000;
      (**(code **)(*param_1 + 0xbc))();
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xdf;
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfe;
      return (uint)uStack_9c >> 0x18;
    }
    if (uVar3 < 0x79b089a) {
      if (uVar3 == 0x79b0899) {
        iVar4 = FUN_0014d2e0();
        if (iVar4 != 0) {
          FUN_0014d2e0();
          FUN_0022d970();
          return (uint)uStack_9c >> 0x18;
        }
        goto LAB_00118e4a;
      }
      if (uVar3 == 0x31e98d4) {
        cVar2 = (**(code **)(**(int **)(param_1[0xba] + 0x1ac) + 0x20))();
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0xf0) + 0x20))(), cVar2 != '\0')) {
          *(undefined1 *)(param_1 + 0x1fa) = 1;
          (**(code **)(*(int *)(param_1[0xba] + 0xf0) + 0x50))(param_1[0xba] + 0x110);
          FUN_0014a880();
          return (uint)piStack_a0 >> 0x18;
        }
        goto LAB_00118e4a;
      }
      if (uVar3 != 0x775fceb) {
        return 0;
      }
      cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
      if (cVar2 == '\0') {
        if ((int *)param_1[0x85] != (int *)0x0) {
          iVar4 = *(int *)param_1[0x85];
          if (iVar4 == 0x28) {
            FUN_00121010();
            return (uint)uStack_9c >> 0x18;
          }
          if (iVar4 == 0x27) {
            FUN_00121070();
            return (uint)uStack_9c >> 0x18;
          }
        }
        goto LAB_00118e4a;
      }
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x3c))(param_1[0xba]);
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x5c))();
      iVar4 = FUN_001463c0();
      if (iVar4 == 1) {
        iVar5 = param_1[0xba];
        iVar4 = iVar5 + 0x88;
      }
      else {
        (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x5c))();
        iVar4 = FUN_001463c0();
        if (iVar4 != 7) goto LAB_0011781d;
        iVar5 = param_1[0xba];
        iVar4 = iVar5 + 0xbc;
      }
      if (iVar4 != 0) {
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x110) + 0x5c))();
        (**(code **)(**(int **)(iVar5 + 0x15c) + 0x18))(param_1[0xba] + 0x110);
        FUN_0014a880();
        (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x50))(iVar4);
        *(undefined1 *)(param_1 + 0x1fa) = 0;
        return unaff_EBX >> 0x18;
      }
LAB_0011781d:
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x38))();
      *(undefined1 *)(param_1 + 0x1fa) = 0;
      return (uint)piStack_a0 >> 0x18;
    }
    if (uVar3 == 0xa6e8f79) {
      cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
      if (cVar2 != '\0') {
        (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x3c))(param_1[0xba]);
        FUN_0014a880();
        pbVar1 = (byte *)(*(int *)(param_1[0xba] + 0x130) + 0x71);
        *pbVar1 = *pbVar1 & 0xef;
      }
      *(undefined1 *)(param_1 + 0x1fa) = 0;
      *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
      param_1[0x7b] = 0;
      return (uint)uStack_9c >> 0x18;
    }
    if (uVar3 != 0xae15ccb) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
    if (cVar2 != '\0') {
      uVar6 = *(undefined4 *)(*(int *)(param_1[0xba] + 0x130) + 0xc);
      FUN_0014ce90(param_1[0xba],1,0);
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x38))();
      iVar4 = FUN_0014db20();
      if (iVar4 == 0) {
        FUN_0014d760(uVar6);
      }
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
LAB_001186bb:
    *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
LAB_001186cb:
    *(undefined1 *)(param_1 + 0x1fa) = 0;
    return (uint)uStack_9c >> 0x18;
  }
  if (uVar3 < 0xeaba3d49) {
    if (uVar3 != 0xeaba3d48) {
      if (0xe3f05d60 < uVar3) {
        if (0xe7e78455 < uVar3) {
          if (uVar3 != 0xe85f3539) {
            return 0;
          }
          cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x144) + 0x20))();
          if (cVar2 != '\0') {
            iVar4 = *(int *)(param_1[0xba] + 0x164);
            piVar8 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
            if (((*piVar8 != 0x17506391) && (iVar4 != 0)) && (*(float *)(iVar4 + 0x1a8) == 0.0)) {
              *(undefined4 *)(iVar4 + 0x1a8) = 0x41a00000;
            }
            if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (iVar5 = FUN_0022b580(), iVar5 != 0)) {
              iVar5 = *(int *)(iVar4 + 0x1f8);
              iVar7 = FUN_0014ce90(param_1[0xba],iVar5,0);
              *(int *)(iVar4 + 0x1f8) = iVar5 - iVar7;
            }
            FUN_00118e60();
            FUN_0014a880();
            (**(code **)(*(int *)(param_1[0xba] + 0x144) + 0x34))(1);
          }
          if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
            iVar4 = FUN_0014d310();
            if (iVar4 != 0) {
              (**(code **)(*(int *)(param_1[0xba] + 0x178) + 0x34))(1);
              FUN_0014d1a0();
            }
            FUN_0014dc50();
            (**(code **)(*piStack_a0 + 0x34))(1);
            (**(code **)(*uStack_9c + 0x34))(1);
          }
          *(undefined1 *)(param_1 + 0x1fa) = 0;
          return (uint)uStack_9c >> 0x18;
        }
        if (uVar3 == 0xe7e78455) {
          cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
          if (cVar2 != '\0') {
            iVar4 = *(int *)(param_1[0xba] + 0x130);
            iVar5 = *(int *)(*(int *)(iVar4 + 0xc) + 0xcc);
            FUN_0014a880();
            if (((iVar5 != 0) && (iVar7 = FUN_0012b3c0(), 0 < iVar7)) &&
               (iVar5 = **(int **)(iVar5 + 8), iVar5 != 0)) {
              uStack_64 = *(undefined4 *)(iVar5 + 0x14);
              uStack_60 = 0;
              uStack_5c = 0;
              uStack_54 = 0x3f800000;
              uStack_58 = 0x3f800000;
              uStack_50 = 0x3f800000;
              iStack_68 = iVar4;
              FUN_000cdcb0(&uStack_91);
            }
            FUN_00117580();
            bVar9 = *(byte *)(param_1 + 0x1df) | 1;
            goto LAB_001181f3;
          }
        }
        else {
          if (uVar3 == 0xe6f06f48) goto LAB_00118d51;
          if (uVar3 != 0xe70a72d0) {
            return 0;
          }
          iVar4 = FUN_0014d2e0();
          if (iVar4 != 0) {
            iVar4 = (**(code **)(*param_1 + 0xf4))();
            if ((*(byte *)(iVar4 + 0x14) & 2) == 0) {
              iVar4 = FUN_0014d2e0();
              *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) | 4;
              return (uint)uStack_9c >> 0x18;
            }
            (**(code **)(*param_1 + 0xf4))();
            FUN_0004df70();
            return (uint)uStack_9c >> 0x18;
          }
        }
        goto LAB_00118e4a;
      }
      if (uVar3 == 0xe3f05d60) {
        *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) & 0xfe;
        param_1[0x1dd] = 0;
        return (uint)((uint)uStack_9c >> 24);
      }
      if (0xe141f815 < uVar3) {
        if (uVar3 == 0xe24bbc42) {
LAB_00118bc5:
          cVar2 = FUN_00023c80();
          if (cVar2 == '\0') {
            FUN_0010e470();
            return (uint)uStack_9c >> 0x18;
          }
          FUN_0010e3e0();
          return (uint)uStack_9c >> 0x18;
        }
        if (uVar3 != 0xe2a3fff9) {
          return 0;
        }
        iVar4 = FUN_0014d2e0();
        if (iVar4 != 0) {
          FUN_0014a880();
          FUN_0014d130();
          iVar4 = FUN_0014d2e0();
          if (iVar4 != 0) {
            (**(code **)(*(int *)(param_1[0xba] + 0x144) + 0x34))(1);
            return (uint)piStack_a0 >> 0x18;
          }
        }
        goto LAB_00118e4a;
      }
      if (uVar3 == 0xe141f815) {
        if (*(int *)(param_1[0xba] + 0x1cc) == 2) goto LAB_00118e4a;
        FUN_0014d020();
        FUN_001241b0();
        FUN_0014d2e0();
        FUN_0014a880();
        if (*(int *)(param_1[3] + 0x15c) == 2) {
          iVar4 = FUN_0014d2e0();
          param_1[0x16c] = (**(int **)(iVar4 + 0x228) == 2) + 1;
        }
        else {
          param_1[0x16c] = 2;
        }
        *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 2;
        iVar4 = FUN_0014d2e0();
      }
      else {
        if (uVar3 == 0x1da39f39) {
          cVar2 = (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x20))();
          if ((cVar2 != '\0') && ((char)param_1[0x1fa] != '\0')) {
            FUN_0014a880();
            (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x38))();
          }
          goto LAB_001186bb;
        }
        if (uVar3 != 0xe094eb7b) {
          return 0;
        }
        FUN_0014d020();
        FUN_001241b0();
        FUN_0014d2e0();
        FUN_0014a880();
        iVar4 = FUN_0014d2e0();
        param_1[0x16c] = (**(int **)(iVar4 + 0x228) == 2) + 1;
        *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 2;
        iVar4 = FUN_0014d2e0();
      }
      goto joined_r0x00118e10;
    }
    cVar2 = FUN_0010e470();
    if (cVar2 == '\0') goto LAB_00118e4a;
    FUN_0014d090();
    FUN_001241b0();
    FUN_0014d310();
    FUN_0014a880();
    iVar4 = FUN_0014d310();
    if (iVar4 != 0) {
      uVar6 = 0;
      FUN_0014d310(0);
      FUN_0022daf0(uVar6);
    }
    iVar4 = *(int *)param_1[0x169];
    uVar6 = FUN_0014d310(0);
  }
  else {
    if (uVar3 < 0xf2cfbb93) {
      if (uVar3 == 0xf2cfbb92) {
        if ((int *)param_1[400] != (int *)0x0) {
          (**(code **)(*(int *)param_1[400] + 0x138))(param_1);
          FUN_000c4f10();
          return (uint)piStack_a0 >> 0x18;
        }
      }
      else if (uVar3 < 0xef1045bd) {
        if (uVar3 != 0xef1045bc) {
          if (uVar3 != 0xead033a3) {
            if (uVar3 != 0xed585109) {
              return 0;
            }
            FUN_0014d500();
            return (uint)uStack_9c >> 0x18;
          }
          goto LAB_00118bc5;
        }
      }
      else {
        if (uVar3 != 0xf10332ed) {
          if (uVar3 != 0xf18780b8) {
            return 0;
          }
          FUN_0014d570();
          return (uint)uStack_9c >> 0x18;
        }
        *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 8;
        iVar4 = FUN_0014d2e0();
        if (iVar4 != 0) {
          FUN_0010ffe0();
        }
        iVar4 = FUN_0014d310();
        if (iVar4 != 0) {
          FUN_0010ffe0();
          return (uint)uStack_9c >> 0x18;
        }
      }
      goto LAB_00118e4a;
    }
    if (uVar3 < 0xfb1a31cb) {
      if (uVar3 == 0xfb1a31ca) {
LAB_00118d51:
        if (param_1[400] == 0) {
          FUN_00122870(param_1);
          return (uint)uStack_9c >> 0x18;
        }
        *(undefined1 *)(param_1 + 0x164) = 1;
        return (uint)((uint)uStack_9c >> 24);
      }
      if (uVar3 == 0xf9c94f64) {
        param_1[0x107] = 2;
        return CONCAT31(0xf9c94f,((uint)uStack_9c >> 24));
      }
      if (uVar3 != 0xfa48a9af) {
        return 0;
      }
      if (*(int *)(param_1[0xba] + 0x1cc) == 1) goto LAB_00118e4a;
      FUN_0014d020();
      FUN_001241b0();
      FUN_0014d2e0();
      FUN_0014a880();
      param_1[0x16c] = 1;
      *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 2;
      iVar4 = FUN_0014d2e0();
    }
    else {
      if (uVar3 != 0xfbc01df5) {
        return 0;
      }
      FUN_0014d020();
      FUN_001241b0();
      FUN_0014d2e0();
      FUN_0014a880();
      iVar4 = FUN_0014d2e0();
      param_1[0x16c] = (**(int **)(iVar4 + 0x228) == 2) + 1;
      *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 2;
      iVar4 = FUN_0014d2e0();
    }
joined_r0x00118e10:
    if (iVar4 != 0) {
      uVar6 = 0;
      FUN_0014d2e0(0);
      FUN_0022daf0(uVar6);
    }
    iVar4 = *(int *)param_1[0x169];
    uVar6 = FUN_0014d2e0(1);
  }
  (**(code **)(iVar4 + 0xa0))(uVar6);
LAB_00118e4a:
  return (uint)uStack_9c >> 0x18;
}
