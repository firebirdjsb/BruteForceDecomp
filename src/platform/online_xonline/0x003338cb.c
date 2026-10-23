/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AB5FC48642864FA56FE35F75C6DB5B18F476DB94C28B20375781B01C97ADCAA
 * Entry: 0x003338cb, Ghidra index: 12418, label: FUN_003338cb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003569d0;
extern uint32_t DAT_00356a30;
undefined4 FUN_003338cb(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int in_ECX;
  uint uVar12;
  undefined4 *puVar13;
  char cVar14;
  char cVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_9c [36];
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_6c [12];
  undefined4 local_60;
  int local_50 [10];
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  int local_8;
  
  uVar3 = param_1;
  local_8 = in_ECX;
  if (*(uint *)(in_ECX + 0xbc) == param_1) {
    iVar5 = *(int *)(in_ECX + 0xbdc);
    iVar4 = 0;
    if ((((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 5)) &&
       (iVar4 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0xbd8)), iVar4 == 0x1500f0)) {
      iVar5 = *(int *)(in_ECX + 0xbdc);
      if (iVar5 == 1) {
        *(undefined4 *)(in_ECX + 0xbdc) = 2;
      }
      else if (iVar5 == 3) {
        *(undefined4 *)(in_ECX + 0xbdc) = 4;
      }
      else if (iVar5 == 5) {
        *(undefined4 *)(in_ECX + 0xbdc) = 6;
      }
    }
    if (((*(int *)(in_ECX + 0xbe0) != 0) && (0xe < *(uint *)(uVar3 + 0x14))) &&
       ((*(int *)(in_ECX + 0xbdc) == 2 || (*(int *)(in_ECX + 0xbdc) == 4)))) {
      iVar4 = FUN_0033d2b6(*(undefined4 *)(in_ECX + 0xbd4),*(undefined4 *)(in_ECX + 0xbd8));
      if (-1 < iVar4) {
        *(undefined4 *)(in_ECX + 0xbdc) = 5;
      }
      *(undefined4 *)(in_ECX + 0xbe0) = 0;
    }
    if (iVar4 < 0) {
      FUN_0033108f();
    }
    iVar5 = *(int *)(in_ECX + 0x664);
    iVar4 = 0;
    if ((((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 5)) &&
       (iVar4 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x660)), iVar4 == 0x1500f0)) {
      iVar5 = *(int *)(in_ECX + 0x664);
      if (iVar5 == 1) {
        *(undefined4 *)(in_ECX + 0x664) = 2;
      }
      else if (iVar5 == 3) {
        *(undefined4 *)(in_ECX + 0x664) = 4;
      }
      else if (iVar5 == 5) {
        *(undefined4 *)(in_ECX + 0x664) = 6;
      }
    }
    if (((*(int *)(in_ECX + 0x668) != 0) && (0xe < *(uint *)(uVar3 + 0x14))) &&
       ((*(int *)(in_ECX + 0x664) == 2 || (*(int *)(in_ECX + 0x664) == 4)))) {
      iVar4 = FUN_0033d2b6(*(undefined4 *)(in_ECX + 0x65c),*(undefined4 *)(in_ECX + 0x660));
      if (-1 < iVar4) {
        *(undefined4 *)(in_ECX + 0x664) = 5;
      }
      *(undefined4 *)(in_ECX + 0x668) = 0;
    }
    if (iVar4 < 0) {
      FUN_00331052();
    }
    if ((*(int *)(uVar3 + 0x54) != 0) && (iVar5 = FUN_00342a84(*(int *)(uVar3 + 0x54)), iVar5 != 0))
    {
      iVar5 = FUN_00341c55(*(undefined4 *)(uVar3 + 0x54),&param_1);
      FUN_0034244a(*(undefined4 *)(uVar3 + 0x54));
      *(undefined4 *)(uVar3 + 0x54) = 0;
      thunk_FUN_0033e986(*(undefined4 *)(uVar3 + 0x50),0x8043);
      *(undefined4 *)(uVar3 + 0x50) = 0;
      if ((iVar5 == 0x1500f0) || (iVar5 == -0x7feae6e9)) {
        FUN_00347a1c(param_1);
      }
    }
  }
  iVar5 = *(int *)(in_ECX + 0x658);
  if (iVar5 != 8) {
    iVar4 = 0;
    if (((iVar5 == 1) || (iVar5 == 5)) &&
       (iVar4 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x654)), iVar4 == 0x1500f0)) {
      if (*(int *)(in_ECX + 0x658) == 1) {
        *(undefined4 *)(in_ECX + 0x658) = 2;
      }
      else if (*(int *)(in_ECX + 0x658) == 5) {
        *(undefined4 *)(in_ECX + 0x658) = 6;
      }
    }
    if ((*(int *)(uVar3 + 0xa0) == 0) &&
       ((*(int *)(in_ECX + 0x658) == 2 || (*(int *)(in_ECX + 0x658) == 6)))) {
      piVar11 = local_50 + 8;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      XAPILIB__GetSystemTimeAsFileTime(local_28);
      piVar11 = (int *)(uVar3 + 0xbc);
      param_1 = 4;
      do {
        if (((*piVar11 != 0 || piVar11[1] != 0) && ((*(byte *)(piVar11 + 2) & 3) == 0)) &&
           (local_50[8] = *piVar11, local_50[9] = piVar11[1],
           iVar5 = FUN_0033def3(*(undefined4 *)(in_ECX + 0x650),*(undefined4 *)(in_ECX + 0x654),
                                local_50 + 8,0,0), -1 < iVar5)) {
          do {
            iVar5 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x654));
          } while (iVar5 == 0);
        }
        piVar11 = piVar11 + 0x1c;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      iVar4 = FUN_0033d2b6(*(undefined4 *)(in_ECX + 0x650),*(undefined4 *)(in_ECX + 0x654));
      if (-1 < iVar4) {
        *(undefined4 *)(in_ECX + 0x658) = 5;
      }
      *(undefined4 *)(uVar3 + 0xa0) = 1;
    }
    if (iVar4 < 0) {
      FUN_00331015();
    }
  }
  if (((*(uint *)(uVar3 + 0x14) < 2) || (0x62 < *(uint *)(uVar3 + 0x14))) ||
     (uVar6 = XAPILIB__GetTickCount(), uVar6 < *(uint *)(uVar3 + 0x2c))) {
LAB_00333bee:
    uVar6 = *(uint *)(uVar3 + 0x14);
    if (uVar6 < 0xe) {
      if (uVar6 == 0xd) {
        if ((*(int *)(uVar3 + 0x40) != 0) || (*(int *)(uVar3 + 0x60) != 0)) {
          *(undefined4 *)(uVar3 + 0x94) = 0;
          piVar11 = (int *)(uVar3 + 0x27c);
          param_1 = 0xc;
          do {
            if (*piVar11 != 0) {
              *(int *)(uVar3 + 100 + *(int *)(uVar3 + 0x94) * 4) = *piVar11;
              *(int *)(uVar3 + 0x94) = *(int *)(uVar3 + 0x94) + 1;
            }
            piVar11 = piVar11 + 5;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
          iVar5 = FUN_00333392(*(undefined4 *)(uVar3 + 0x60),uVar3 + 100,
                               *(undefined4 *)(uVar3 + 0x94),*(undefined4 *)(uVar3 + 0x40),
                               *(undefined4 *)(uVar3 + 8),uVar3 + 0x98);
          if (-1 < iVar5) {
            *(undefined4 *)(uVar3 + 0x14) = 0xe;
            goto LAB_00333e33;
          }
          goto LAB_0033414a;
        }
      }
      else {
        if (uVar6 == 1) {
          iVar5 = FUN_0034506e(local_9c);
          if (iVar5 == 0) {
            FUN_003476db(uVar3 + 0x18,*(undefined4 *)(uVar3 + 8),200);
            goto LAB_0033414d;
          }
          if ((((byte)iVar5 & 0x60) != 0x60) || ((char)((uint)iVar5 >> 8) < '\0')) {
            *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 1;
            *(int *)(uVar3 + 0x34) = iVar5;
            *(undefined4 *)(uVar3 + 0x10) = 0x80151901;
            goto LAB_0033414d;
          }
          if ((*(uint *)(in_ECX + 0xbc) == uVar3) && (FUN_00344fe4(local_6c), local_50[6] != 0)) {
            iVar5 = FUN_00342ff1(local_60,local_50[7],*(undefined4 *)(uVar3 + 8),
                                 *(undefined4 *)(uVar3 + 0x50));
            if (iVar5 < 0) {
              *(undefined4 *)(uVar3 + 0x10) = 0x80151919;
              thunk_FUN_0033e986(*(undefined4 *)(uVar3 + 0x50),0x8043);
              *(undefined4 *)(uVar3 + 0x50) = 0;
              goto LAB_0033414d;
            }
            *(undefined4 *)(uVar3 + 0x54) = *(undefined4 *)(uVar3 + 0x50);
          }
          iVar5 = XAPILIB__GetTickCount();
          *(int *)(uVar3 + 0x2c) = iVar5 + 90000;
          FUN_003476db(uVar3 + 0x18,*(undefined4 *)(uVar3 + 8),90000);
LAB_00333db0:
          *(undefined4 *)(uVar3 + 0x14) = 9;
          goto LAB_00333bee;
        }
        if (uVar6 == 9) {
          iVar5 = FUN_0033222d(*(undefined4 *)(uVar3 + 0x38),*(undefined4 *)(uVar3 + 8),uVar3 + 0x58
                              );
          if (iVar5 < 0) {
            *(undefined4 *)(uVar3 + 0x10) = 0x80151906;
            goto LAB_0033414d;
          }
          *(undefined4 *)(uVar3 + 0x14) = 10;
        }
        else if (uVar6 != 10) {
          if (uVar6 == 0xb) {
            iVar5 = FUN_003329b5(in_ECX + 0x18,*(undefined4 *)(uVar3 + 0x3c),
                                 *(undefined4 *)(uVar3 + 8),uVar3 + 0x5c);
            if (iVar5 < 0) goto LAB_0033414a;
            *(undefined4 *)(uVar3 + 0x14) = 0xc;
          }
          else if (uVar6 != 0xc) goto LAB_0033414d;
          iVar5 = FUN_0033233c(*(undefined4 *)(uVar3 + 0x5c));
          if (iVar5 == 0x1500f0) {
            iVar5 = *(int *)(uVar3 + 0x60);
            if (iVar5 != 0) {
              FUN_0033ea20(iVar5);
            }
            FUN_00330ea2(*(undefined4 *)(uVar3 + 0x5c),(int *)(uVar3 + 0x60),&param_1);
            FUN_00330c53(*(undefined4 *)(uVar3 + 0x5c));
            *(undefined4 *)(uVar3 + 0x5c) = 0;
            *(undefined4 *)(uVar3 + 0x14) = 0xd;
            goto LAB_00334245;
          }
          if (-1 < iVar5) goto LAB_0033414d;
          if (iVar5 == -0x7feae6ec) {
            FUN_00330c53(*(undefined4 *)(uVar3 + 0x5c));
            *(undefined4 *)(uVar3 + 0x5c) = 0;
            if (*(int *)(uVar3 + 0x38) == 0) {
              *(undefined4 *)(uVar3 + 0x10) = 0x80151908;
              goto LAB_0033414d;
            }
            *(undefined4 *)(uVar3 + 0x38) = 0;
          }
          else {
            if (iVar5 != -0x7feae6ea) goto LAB_0033414a;
            FUN_00330c53(*(undefined4 *)(uVar3 + 0x5c));
            *(undefined4 *)(uVar3 + 0x5c) = 0;
          }
          *(undefined4 *)(uVar3 + 0x3c) = 0;
          *(undefined4 *)(uVar3 + 0x40) = 0;
          goto LAB_00333db0;
        }
        iVar5 = FUN_00331db8(*(undefined4 *)(uVar3 + 0x58));
        if (iVar5 != 0x1500f0) {
          if (-1 < iVar5) goto LAB_0033414d;
          goto LAB_0033414a;
        }
        FUN_00330c53(*(undefined4 *)(uVar3 + 0x58));
        *(undefined4 *)(uVar3 + 0x58) = 0;
        if (*(int *)(uVar3 + 0x38) != 0) goto LAB_00333f37;
LAB_00334279:
        *(undefined4 *)(uVar3 + 0x3c) = 0;
        *(undefined4 *)(uVar3 + 0x40) = 0;
      }
      *(undefined4 *)(uVar3 + 0x14) = 0xb;
      goto LAB_00333bee;
    }
    if (uVar6 == 0xe) {
LAB_00333e33:
      puVar10 = (undefined4 *)(uVar3 + 0x98);
      iVar5 = FUN_00332b65(*puVar10);
      if (iVar5 != 0x1500f0) {
        if (-1 < iVar5) goto LAB_0033414d;
        if (iVar5 == -0x7feae6f4) {
          FUN_00330c53(*puVar10);
          *puVar10 = 0;
          if ((*(int *)(uVar3 + 0x3c) == 0) && (*(int *)(uVar3 + 0x38) == 0)) {
            *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) | 4;
            *(undefined4 *)(uVar3 + 0x10) = 0x8015190c;
            goto LAB_0033414d;
          }
          FUN_00330f12(uVar3);
          *(undefined4 *)(uVar3 + 0x38) = 0;
          *(undefined4 *)(uVar3 + 0x3c) = 0;
          *(undefined4 *)(uVar3 + 0x40) = 0;
          *(undefined4 *)(uVar3 + 0x14) = 9;
        }
        else {
          if (iVar5 != -0x7feae6ea) {
            if (iVar5 == -0x7feae6eb) {
              FUN_00330c53(*puVar10);
              *puVar10 = 0;
              if (*(int *)(uVar3 + 0x3c) != 0) {
                FUN_00330f12(uVar3);
                goto LAB_00334279;
              }
              *(undefined4 *)(uVar3 + 0x10) = 0x8015190a;
              goto LAB_0033414d;
            }
            goto LAB_0033414a;
          }
          FUN_00330c53(*puVar10);
          *puVar10 = 0;
          FUN_00330f12(uVar3);
          *(undefined4 *)(uVar3 + 0x14) = 0xb;
LAB_00334245:
          *(undefined4 *)(uVar3 + 0x40) = 0;
        }
        goto LAB_00333bee;
      }
      FUN_00330eda(*puVar10,uVar3 + 0x9c,&param_1);
      FUN_00330c53(*puVar10);
      *puVar10 = 0;
      *(undefined4 *)(uVar3 + 0x94) = 0;
      param_1 = 0;
      if (*(int *)(*(int *)(uVar3 + 0x9c) + 0x30) != 0) {
        local_c = (uint *)(uVar3 + 0x27c);
        iVar5 = 0x230;
        local_10 = 0x200;
        do {
          iVar4 = 0;
          piVar11 = (int *)(uVar3 + 0x27c);
          do {
            if (*piVar11 == *(int *)((local_10 - 0x1cc) + *(int *)(uVar3 + 0x9c)))
            goto LAB_00333ec3;
            iVar4 = iVar4 + 1;
            piVar11 = piVar11 + 5;
          } while (iVar4 < 0xc);
          iVar4 = -1;
LAB_00333ec3:
          iVar2 = *(int *)(local_10 + *(int *)(uVar3 + 0x9c));
          iVar17 = uVar3 + iVar4 * 0x14;
          *(int *)(iVar17 + 0x288) = iVar2;
          if (iVar2 == 1) {
            *(uint *)(uVar3 + 100 + *(int *)(uVar3 + 0x94) * 4) = *local_c;
            *(int *)(uVar3 + 0x94) = *(int *)(uVar3 + 0x94) + 1;
          }
          else if (iVar2 == 0) {
            piVar11 = (int *)(uVar3 + 0x9c);
            *(undefined2 *)(iVar17 + 0x284) = *(undefined2 *)(iVar5 + *piVar11);
            *(undefined4 *)(uVar3 + (iVar4 * 5 + 0xa0) * 4) = *(undefined4 *)(*piVar11 + 0x1b8);
            *(int *)(iVar17 + 0x28c) = *piVar11;
          }
          param_1 = param_1 + 1;
          local_10 = local_10 + 4;
          local_c = local_c + 5;
          iVar5 = iVar5 + 2;
        } while (param_1 < *(uint *)(*(int *)(uVar3 + 0x9c) + 0x30));
      }
      iVar5 = *(int *)(uVar3 + 0x9c);
      puVar7 = (uint *)(iVar5 + 0xdc);
      *(undefined4 *)(iVar5 + 0x19c) = *(undefined4 *)(iVar5 + 0x2b8);
      *(undefined4 *)(iVar5 + 0x1a0) = *(undefined4 *)(iVar5 + 700);
      *(undefined4 *)(iVar5 + 0x1a4) = *(undefined4 *)(iVar5 + 0x2c0);
      *(undefined4 *)(iVar5 + 0x1a8) = *(undefined4 *)(iVar5 + 0x2c4);
      *(undefined4 *)(iVar5 + 0x1ac) = *(undefined4 *)(uVar3 + 0x36c);
      *(int *)(iVar5 + 0x1b0) = *(int *)(*(int *)(uVar3 + 0x9c) + 0x2dc) + 0x118;
      if (uVar3 == *(uint *)(local_8 + 0xc0)) {
        param_1 = 0;
        piVar11 = (int *)(local_8 + 0xd8);
LAB_0033400e:
        if ((*piVar11 == 0) || (*(int *)(*piVar11 + 0x1ac) != *(int *)(iVar5 + 0x1ac)))
        goto LAB_00334022;
        piVar11 = (int *)(local_8 + 0xd8 + param_1 * 0x14);
        puVar16 = (uint *)(*piVar11 + 0xdc);
        puVar18 = puVar7;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar10 = (undefined4 *)(*piVar11 + 0x13c);
        puVar13 = (undefined4 *)(iVar5 + 0x13c);
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
      }
LAB_00334062:
      local_c = puVar7;
      if ((uVar3 == *(uint *)(local_8 + 0xbc)) || (param_1 == 0xc)) {
        FUN_00344fef(puVar7,0x60);
        iVar5 = XcModExp(iVar5 + 0x13c,&DAT_00356a30,puVar7,&DAT_003569d0,0x18);
        if (iVar5 == 0) {
          *(undefined4 *)(uVar3 + 0x10) = 0x80150007;
          in_ECX = local_8;
          goto LAB_0033414d;
        }
      }
      uVar6 = 0;
      param_1 = 0;
      piVar11 = (int *)(uVar3 + 0xbc);
      do {
        if (*piVar11 != 0 || piVar11[1] != 0) {
          uVar12 = 0;
          piVar9 = *(int **)(uVar3 + 0x9c);
          do {
            if ((*piVar11 == piVar9[2]) && (piVar11[1] == piVar9[3])) {
              *(byte *)((int)&param_1 + uVar6) =
                   *(byte *)(piVar11 + 2) & 0x1f | (char)uVar12 << 6 | 0x20;
              break;
            }
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + 2;
          } while (uVar12 < 4);
        }
        uVar6 = uVar6 + 1;
        piVar11 = piVar11 + 0x1c;
      } while (uVar6 < 4);
      local_c[0x36] = param_1;
      *(undefined4 *)(uVar3 + 0x370 + *(int *)(uVar3 + 0x36c) * 4) = *(undefined4 *)(uVar3 + 0x9c);
      *(undefined4 *)(uVar3 + 0x9c) = 0;
      *(int *)(uVar3 + 0x36c) = *(int *)(uVar3 + 0x36c) + 1;
      if (*(int *)(uVar3 + 0x94) == 0) {
        *(undefined4 *)(uVar3 + 0x14) = 0xf;
        in_ECX = local_8;
        goto LAB_00333bee;
      }
      iVar5 = FUN_00333392(*(undefined4 *)(uVar3 + 0x60),uVar3 + 100,*(int *)(uVar3 + 0x94),
                           *(undefined4 *)(uVar3 + 0x40),*(undefined4 *)(uVar3 + 8),uVar3 + 0x98);
      in_ECX = local_8;
      if (-1 < iVar5) goto LAB_00333bee;
LAB_0033414a:
      *(int *)(uVar3 + 0x10) = iVar5;
    }
    else {
      if (uVar6 != 0xf) {
        if (uVar6 != 0x10) {
          if (uVar6 == 0x11) {
            local_14 = 0;
            iVar5 = FUN_00347aa1(0,&local_14);
            if (iVar5 == 1) goto LAB_00334809;
            if ((*(int *)(uVar3 + 0xa4) == 0) ||
               (iVar5 = FUN_00330c3e(*(int *)(uVar3 + 0xa4)), iVar5 == 0)) goto LAB_0033414d;
            FUN_00330c53(*(undefined4 *)(uVar3 + 0xa4));
            *(undefined4 *)(uVar3 + 0xa4) = 0;
            if (-1 < iVar5) {
              *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) & 0x3fffffff | 0x80000000;
              *(uint *)(uVar3 + 0x10) =
                   ((uVar3 != *(uint *)(local_8 + 0xbc)) - 1 & 0xfffffcff) + 0x1513f1;
              goto LAB_003343a9;
            }
            if (iVar5 != -0x7feadffb) {
              *(byte *)(uVar3 + 0x33) = *(byte *)(uVar3 + 0x33) | 0xc0;
              *(int *)(uVar3 + 0x34) = iVar5;
              if (uVar3 == *(uint *)(in_ECX + 0xc0)) {
                puVar10 = (undefined4 *)(uVar3 + 0xac);
                puVar13 = (undefined4 *)(uVar3 + 0x128);
                iVar5 = 4;
                do {
                  *puVar10 = *puVar13;
                  puVar10 = puVar10 + 1;
                  puVar13 = puVar13 + 0x1c;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                *(undefined4 *)(uVar3 + 0x10) = 0x80151300;
                FUN_003476d0();
                goto LAB_0033414d;
              }
              iVar5 = ((iVar5 != -0x7feadfff) - 1 & 0xfffff6f4) + 0x8015190f;
              goto LAB_0033414a;
            }
            FUN_003476d0();
            FUN_00333592();
            if (uVar3 != *(uint *)(in_ECX + 0xbc)) {
              puVar10 = (undefined4 *)(uVar3 + 0xac);
              puVar13 = (undefined4 *)(uVar3 + 0x128);
              iVar5 = 4;
              do {
                *puVar10 = *puVar13;
                puVar10 = puVar10 + 1;
                puVar13 = puVar13 + 0x1c;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              *(byte *)(uVar3 + 0x33) = *(byte *)(uVar3 + 0x33) | 0xc0;
              *(undefined4 *)(uVar3 + 0x34) = 0x80152005;
              goto LAB_003347a4;
            }
            *(byte *)(uVar3 + 0x33) = *(byte *)(uVar3 + 0x33) | 0xc0;
            *(undefined4 *)(uVar3 + 0x34) = 0x80152005;
          }
          else {
            if (((uVar6 != 99) || (uVar3 != *(uint *)(in_ECX + 0xbc))) ||
               (*(int *)(uVar3 + 0x10) < 0)) goto LAB_0033414d;
            local_14 = 0;
            iVar5 = FUN_00347aa1(0,&local_14);
            if (iVar5 != 1) {
              if ((iVar5 == 6) && (*(int *)(uVar3 + 0xa8) == 1)) {
                *(int *)(uVar3 + 0xa8) = 0;
                if ((*(int *)(in_ECX + 0xc0) != 0) &&
                   (iVar5 = *(int *)(*(int *)(in_ECX + 0xc0) + 8), iVar5 != *(int *)(uVar3 + 8))) {
                  XAPILIB__SetEvent(iVar5);
                }
              }
              goto LAB_0033414d;
            }
LAB_00334809:
            if ((local_14 == 2) && (uVar3 == *(uint *)(in_ECX + 0xbc))) {
              FUN_00333592();
              *(undefined4 *)(uVar3 + 0x10) = 0x80151005;
              goto LAB_0033414d;
            }
          }
          *(undefined4 *)(uVar3 + 0x10) = 0x80151004;
          goto LAB_0033414d;
        }
        iVar5 = FUN_00347aa1(0,0);
        if (iVar5 == 1) {
          *(byte *)(uVar3 + 0x33) = *(byte *)(uVar3 + 0x33) | 0x30;
          if (*(int *)(uVar3 + 0x48) != 0) {
            iVar5 = ((uVar3 != *(uint *)(in_ECX + 0xbc)) - 1 & 0x60e) + 0x80151300;
            goto LAB_0033414a;
          }
          *(undefined4 *)(uVar3 + 0x48) = 1;
          FUN_003476d0();
          *(undefined4 *)(uVar3 + 0x40) = 0;
LAB_00333f37:
          *(undefined4 *)(uVar3 + 0x14) = 0xd;
        }
        else {
          if (iVar5 != 6) goto LAB_0033414d;
          *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) & 0xfffffff | 0x60000000;
          *(undefined4 *)(uVar3 + 0x14) = 0x11;
        }
        goto LAB_00333bee;
      }
      if (*(int *)(uVar3 + 0x54) != 0) goto LAB_0033414d;
      local_c = (uint *)(uVar3 + 0xac);
      param_1 = 0;
      puVar7 = (uint *)(uVar3 + 0xc4);
      do {
        local_10 = 0;
        puVar16 = *(uint **)(uVar3 + 0x370);
        do {
          if ((puVar7[-2] == puVar16[2]) && (puVar7[-1] == puVar16[3])) {
            *puVar7 = *puVar7 | (*(uint **)(uVar3 + 0x370))[local_10 + 0x7c];
            uVar6 = *(uint *)(*(int *)(uVar3 + 0x370) + 0x1e0 + local_10 * 4);
            puVar7[0x19] = uVar6;
            if (uVar3 == *(uint *)(in_ECX + 0xc0)) {
              *local_c = uVar6;
            }
            if ((int)puVar7[0x19] < 0) {
              pbVar1 = (byte *)(param_1 + 0x64c + in_ECX);
              *pbVar1 = *pbVar1 | 2;
            }
            break;
          }
          local_10 = local_10 + 1;
          puVar16 = puVar16 + 2;
        } while (local_10 < 4);
        param_1 = param_1 + 1;
        iVar5 = 4;
        local_c = local_c + 1;
        puVar7 = puVar7 + 0x1c;
      } while (param_1 < 4);
      param_1 = 0;
      pcVar8 = (char *)(uVar3 + 0xc5);
      cVar14 = '\0';
      do {
        cVar15 = cVar14;
        if ((*(int *)(pcVar8 + -9) != 0 || *(int *)(pcVar8 + -5) != 0) &&
           (cVar15 = *pcVar8, *(char *)(in_ECX + 0x84) == cVar15)) {
          param_1 = 1;
          cVar15 = cVar14;
        }
        pcVar8 = pcVar8 + 0x70;
        iVar5 = iVar5 + -1;
        cVar14 = cVar15;
      } while (iVar5 != 0);
      if ((param_1 == 0) && (cVar15 != '\0')) {
        *(char *)(in_ECX + 0x84) = cVar15;
        FUN_00330d60();
      }
      uVar6 = *(uint *)(*(int *)(uVar3 + 0x370) + 0x1bc);
      FUN_003476ba(uVar6 & 0xffffff00,uVar6 & 0xff);
      if (uVar3 == *(uint *)(in_ECX + 0xc0)) {
        uVar6 = 0;
        piVar11 = (int *)(uVar3 + 0x288);
        piVar9 = (int *)(in_ECX + 0xd4);
        while ((*piVar9 < 0 || (-1 < *piVar11))) {
          uVar6 = uVar6 + 1;
          piVar9 = piVar9 + 5;
          piVar11 = piVar11 + 5;
          if (0xb < uVar6) {
            FUN_003476e6(1);
            puVar10 = (undefined4 *)(in_ECX + 0xd8);
            puVar13 = (undefined4 *)(uVar3 + 0x28c);
            iVar5 = 0xc;
            do {
              if (puVar10[-1] == 0) {
                *puVar10 = *puVar13;
              }
              puVar13 = puVar13 + 5;
              puVar10 = puVar10 + 5;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            FUN_003476e6(0);
            param_1 = 0;
            if (*(int *)(in_ECX + 0x54c) != 0) {
              puVar10 = (undefined4 *)(in_ECX + 0x550);
              do {
                FUN_0033ea20(*puVar10);
                param_1 = param_1 + 1;
                puVar10 = puVar10 + 1;
              } while (param_1 < *(uint *)(in_ECX + 0x54c));
            }
            iVar4 = local_8;
            iVar5 = *(int *)(uVar3 + 0x36c);
            *(int *)(local_8 + 0x54c) = iVar5;
            puVar10 = (undefined4 *)(uVar3 + 0x370);
            puVar13 = (undefined4 *)(local_8 + 0x550);
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            *(int *)(uVar3 + 0x36c) = 0;
            uVar6 = 0;
            piVar11 = (int *)(uVar3 + 0xbc);
            do {
              if ((*(byte *)(piVar11 + 2) & 3) == 0) {
                iVar5 = *piVar11;
                iVar17 = piVar11[1];
              }
              else {
                iVar5 = 0;
                iVar17 = 0;
              }
              local_50[uVar6 * 2] = iVar5;
              local_50[uVar6 * 2 + 1] = iVar17;
              uVar6 = uVar6 + 1;
              piVar11 = piVar11 + 0x1c;
            } while (uVar6 < 4);
            iVar5 = FUN_0034768e(local_50);
            in_ECX = local_8;
            if (iVar5 == 0) {
              *(undefined4 *)(uVar3 + 0x10) = 0x80151300;
            }
            else {
              *(undefined4 *)(uVar3 + 0xc) = 0x1513f0;
              *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) & 0xdfffffff | 0x10000000;
              *(undefined4 *)(uVar3 + 0x14) = 0x10;
              *(undefined4 *)(*(int *)(iVar4 + 0xbc) + 0xa8) = 1;
            }
            goto LAB_0033414d;
          }
        }
LAB_003347a4:
        *(undefined4 *)(uVar3 + 0x10) = 0x80151300;
        goto LAB_0033414d;
      }
      puVar10 = (undefined4 *)(uVar3 + 0x27c);
      puVar13 = (undefined4 *)(local_8 + 200);
      for (iVar5 = 0x3c; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      uVar6 = 0;
      if (*(int *)(local_8 + 0x54c) != 0) {
        puVar10 = (undefined4 *)(local_8 + 0x550);
        do {
          FUN_0033ea20(*puVar10);
          uVar6 = uVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar6 < *(uint *)(local_8 + 0x54c));
      }
      iVar5 = *(int *)(uVar3 + 0x36c);
      *(int *)(local_8 + 0x54c) = iVar5;
      puVar10 = (undefined4 *)(uVar3 + 0x370);
      puVar13 = (undefined4 *)(local_8 + 0x550);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      uVar6 = 0;
      piVar11 = (int *)(local_8 + 200);
      *(int *)(uVar3 + 0x36c) = 0;
      do {
        if ((*piVar11 != 0) && (piVar11[3] == 0)) {
          iVar5 = FUN_0034517e(piVar11[1],*piVar11,&local_18);
          if (iVar5 != 0) {
            *(undefined4 *)(uVar3 + 0x10) = 0x8015190e;
            in_ECX = local_8;
            goto LAB_0033414d;
          }
          piVar11[1] = local_18;
        }
        uVar6 = uVar6 + 1;
        piVar11 = piVar11 + 5;
      } while (uVar6 < 0xc);
      piVar11 = (int *)(uVar3 + 0xbc);
      uVar6 = 0;
      do {
        if ((*(byte *)(piVar11 + 2) & 3) == 0) {
          iVar5 = *piVar11;
          iVar4 = piVar11[1];
        }
        else {
          iVar5 = 0;
          iVar4 = 0;
        }
        local_50[uVar6 * 2] = iVar5;
        local_50[uVar6 * 2 + 1] = iVar4;
        uVar6 = uVar6 + 1;
        piVar11 = piVar11 + 0x1c;
      } while (uVar6 < 4);
      iVar5 = FUN_00333726(1,local_78);
      if (iVar5 < 0) {
        local_74 = 0;
      }
      FUN_0034790d(local_74,local_50,*(undefined4 *)(uVar3 + 8));
      if (local_74 == 0) {
        *(undefined4 *)(uVar3 + 0x10) = 0x1510f0;
LAB_003343a9:
        puVar10 = (undefined4 *)(uVar3 + 0xbc);
        puVar13 = (undefined4 *)(local_8 + 0x1b8);
        for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        *(undefined4 **)(local_8 + 0xc4) = (undefined4 *)(local_8 + 0x1b8);
        *(undefined4 *)(uVar3 + 0x14) = 99;
        in_ECX = local_8;
        goto LAB_0033414d;
      }
      *(uint *)(uVar3 + 0x30) = *(uint *)(uVar3 + 0x30) & 0xdfffffff | 0x10000000;
      *(undefined4 *)(uVar3 + 0x14) = 0x10;
      in_ECX = local_8;
    }
  }
  else {
    *(undefined4 *)(uVar3 + 0x10) = 0x80151911;
  }
LAB_0033414d:
  uVar6 = *(uint *)(uVar3 + 0x10);
  if (uVar6 != 0) {
    *(uint *)(uVar3 + 0xc) = uVar6;
    if ((uVar6 & 0xffffff00) == 0x80151900) {
      *(undefined4 *)(uVar3 + 0xc) = 0x80151001;
    }
    iVar5 = *(int *)(uVar3 + 0xa4);
    *(undefined4 *)(uVar3 + 0x14) = 99;
    if (iVar5 != 0) {
      FUN_00330c53(iVar5);
      *(int *)(uVar3 + 0xa4) = 0;
    }
    if (*(int *)(uVar3 + 0x4c) != -1) {
      FUN_00345084(*(int *)(uVar3 + 0x4c));
      *(undefined4 *)(uVar3 + 0x4c) = 0xffffffff;
    }
    if (((*(int *)(uVar3 + 0x10) < 0) && (uVar3 == *(uint *)(in_ECX + 0xc0))) &&
       (*(int *)(in_ECX + 0xc4) == in_ECX + 0x378)) {
      *(int *)(in_ECX + 0xc4) = in_ECX + 0x1b8;
    }
  }
  return *(undefined4 *)(uVar3 + 0xc);
LAB_00334022:
  param_1 = param_1 + 1;
  piVar11 = piVar11 + 5;
  if (0xb < param_1) goto LAB_00334062;
  goto LAB_0033400e;
}
