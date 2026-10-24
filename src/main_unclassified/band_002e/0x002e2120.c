/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6EB90856AF7E999546C14E21326D8C715DCECD748CDE4A36FB4054986B6D2FA
 * Entry: 0x002e2120, Ghidra index: 10378, label: FUN_002e2120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_002e2313_switchD[];
int FUN_002e2120(void)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int *in_ECX;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  longlong lVar16;
  undefined4 uStack_a0;
  char cStack_9c;
  int *local_98;
  int iStack_94;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  int local_88;
  uint uStack_84;
  undefined4 local_80;
  char cStack_7c;
  undefined1 uStack_7b;
  byte bStack_7a;
  byte abStack_79 [4];
  byte bStack_75;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_65;
  int local_64;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  char cStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 local_38 [16];
  undefined4 uStack_28;
  undefined1 local_10 [16];
  
  local_98 = in_ECX;
  do {
    piVar2 = local_98;
    local_88 = local_98[0x3c];
    iVar5 = FUN_002e31f0(local_98[0x3f],&local_88,local_10);
    if (iVar5 < 0) {
      return iVar5;
    }
    if (local_88 == 0) {
      return 0;
    }
    bVar1 = false;
    FUN_002e3540(local_10);
    ((uint8_t *)&local_80)[2] = 0;
    puVar14 = &local_80;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    FUN_002e43e0(piVar2[0x3f],local_88,(char)piVar2[0x18c] != '\0');
    iVar5 = FUN_002e0890(local_38,&local_64);
    if (iVar5 < 0) {
      return iVar5;
    }
    if (local_64 == 0) {
      if (((((uint8_t *)&local_80)[3] & 0xe) == 0) && (((uint8_t *)&local_80)[3] >> 4 == 4)) {
        iVar5 = FUN_002e14b0(local_38,&local_64);
        if (iVar5 < 0) {
          return iVar5;
        }
        if (local_64 != 0) goto LAB_002e2224;
      }
    }
    else {
LAB_002e2224:
      iVar5 = local_64;
      piVar2 = local_98;
      if (((uint)local_98[0xc] < *(uint *)(local_64 + 0x268)) && (uVar13 = 0, local_98[0x1f] != 0))
      {
        piVar12 = local_98 + 0x20;
        do {
          (**(code **)(*(int *)*piVar12 + 4))(iVar5,0);
          uVar13 = uVar13 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar13 < (uint)piVar2[0x1f]);
      }
      FUN_002e3f50();
      *(undefined4 *)(iVar5 + 0x268) = 0;
      lVar16 = FUN_002e3ec0();
      if ((-1 < lVar16) && ((0xffffffff < lVar16 || ((uint)piVar2[0xe] < (uint)lVar16)))) {
        ((uint8_t *)&uStack_50)[2] = 0;
        puVar14 = &uStack_50;
        for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        bVar1 = true;
        ((uint8_t *)&uStack_50)[3] = 0x10;
        uStack_4c = (undefined2)local_80;
        FUN_002e3f50();
        iVar11 = FUN_002e0960(&uStack_50,iVar5);
        if (iVar11 < 0) {
          return iVar11;
        }
      }
      if ((((uint8_t *)&local_80)[3] & 1) != 0) {
        FUN_002e1150(iVar5,uStack_6c,uStack_70);
      }
      FUN_002e35d0(((uint32_t)(uint8_t)uStack_7b << 24 | (uint32_t)(uint8_t)cStack_7c << 16 | (uint32_t)((uint8_t *)&local_80)[3] << 8 | (uint32_t)((uint8_t *)&local_80)[2]));
      cVar10 = cStack_7c;
      if ((((uint8_t *)&local_80)[3] & 0xe) == 0) {
        bVar4 = ((uint8_t *)&local_80)[3] >> 4;
        if (bVar4 < 8) goto switchD_002e2313_switchD;
      }
      else {
        bVar4 = 7;
switchD_002e2313_switchD:
        switch(bVar4) {
        case 0:
          if ((!bVar1) && (iVar11 = FUN_002e1310(iVar5,&local_80), iVar11 < 0)) {
            return iVar11;
          }
          if (*(int *)(iVar5 + 0x28c) != 0) {
            FUN_002e13a0(iVar5);
          }
          break;
        case 1:
          iVar5 = FUN_002e3ec0();
          FUN_002e2d40(iVar5 - CONCAT13(abStack_79[0],
                                        CONCAT12(bStack_7a,CONCAT11(uStack_7b,cStack_7c))));
          break;
        case 2:
          FUN_002e1800(&local_80,iVar5);
          break;
        case 3:
          break;
        case 4:
          ((uint8_t *)&uStack_28)[2] = 0;
          puVar14 = &uStack_28;
          for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          ((uint8_t *)&uStack_28)[3] = 0x50;
          FUN_002e3f50();
          FUN_002e0960(&uStack_28,iVar5);
          break;
        case 5:
          *(undefined1 *)(iVar5 + 0x2c4) = 1;
          break;
        case 6:
          (**(code **)(*piVar2 + 8))(iVar5);
          break;
        default:
          iStack_94 = iStack_74;
          cVar3 = *(char *)(iVar5 + 0x1c4) + '\x01';
          ((uint8_t *)&uStack_8c)[0] = cVar3;
          if (cVar3 == '\0') {
            ((uint8_t *)&uStack_8c)[0] = '\x01';
          }
          uVar13 = 0;
          uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | (uint8_t)cStack_7c);
          cStack_9c = '\0';
          bVar1 = false;
          cVar3 = '\0';
          if (cStack_7c == '\0') {
LAB_002e241d:
            uStack_84 = (uint)((uint8_t *)&local_80)[3];
            uVar13 = 0;
            if ((((uint8_t *)&local_80)[3] >> 1 & 7) != 0) {
              bVar4 = 0;
              while ((cVar3 != '\0' && (cVar3 != (char)uStack_8c))) {
                iStack_94 = iStack_94 +
                            ((bStack_7a >> (bVar4 & 0x1f) & 3) << 8 | (uint)abStack_79[uVar13]);
                if ((UINT32_C(1) << ((byte)uVar13 & 0x1f) & (uint)(((uint8_t *)&local_80)[3] >> 4)) != 0) {
                  cVar10 = (char)uStack_a0 + '\x01';
                  uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | (uint8_t)cVar10);
                  if (cVar10 == '\0') {
                    uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | UINT32_C(1));
                  }
                }
                uVar13 = uVar13 + 1;
                bVar4 = bVar4 + 2;
                if ((((uint8_t *)&local_80)[3] >> 1 & 7) <= uVar13) break;
                cVar3 = (char)uStack_a0;
              }
            }
          }
          else {
            cVar3 = FUN_002e00f0(&uStack_8c);
            if (cVar3 == '\0') {
              cVar3 = (char)uStack_a0;
              goto LAB_002e241d;
            }
            cStack_5c = cVar10;
            if (*(int *)(iVar5 + 0x2b4) != 0) {
              uVar6 = FUN_002e3850(&uStack_65);
              cVar3 = FUN_002e00f0(uVar6);
              if (cVar3 != '\0') {
                pcVar7 = (char *)FUN_002e3850(&uStack_5d);
                cVar10 = *pcVar7;
              }
            }
            uVar8 = FUN_002e0120(&uStack_8c);
            if ((uint)local_98[0x4b] <= uVar8) {
              (**(code **)(*local_98 + 8))(iVar5);
              goto LAB_002e28a2;
            }
            FUN_002e1790(iVar5,uStack_8c,cVar10 - (char)uStack_8c);
            pcVar7 = (char *)FUN_002e3890(&uStack_5f);
            if (*pcVar7 == '\0') {
              cStack_9c = (char)uStack_a0;
LAB_002e2412:
              bVar1 = true;
            }
            else {
              cStack_9c = *pcVar7 + '\x01';
              if (cStack_9c != '\0') goto LAB_002e2412;
              cStack_9c = '\x01';
              bVar1 = true;
            }
          }
          if (uVar13 < (((uint8_t *)&local_80)[3] >> 1 & 7)) {
            iVar11 = uVar13 * 2;
            do {
              if (*(int *)(iVar5 + 0x28) == 0) break;
              bVar15 = (UINT32_C(1) << ((byte)uVar13 & 0x1f) & (uint)(((uint8_t *)&local_80)[3] >> 4)) != 0;
              uStack_84 = (uint)bVar15;
              uVar8 = (uint)bVar15;
              uStack_54 = uVar8;
              bVar4 = (byte)iVar11;
              if ((bVar15) && (bVar1)) {
                if (cStack_9c == (char)uStack_a0) {
                  iVar9 = FUN_002e3d50(iStack_94,
                                       (bStack_7a >> (bVar4 & 0x1f) & 3) << 8 |
                                       (uint)abStack_79[uVar13],1,&uStack_a0,
                                       bStack_75 >> (bVar4 & 0x1f) & 3);
                  if (iVar9 < 0) {
                    return iVar9;
                  }
                  cStack_9c = cStack_9c + '\x01';
                  if (cStack_9c == '\0') {
                    cStack_9c = '\x01';
                  }
                }
              }
              else {
                FUN_002e2c20(5,1);
                FUN_002e2c20(5,1);
                uVar8 = uStack_84;
                switch(bStack_75 >> (bVar4 & 0x1f) & 3) {
                case 0:
                  uVar6 = 0xfffffffb;
                  break;
                case 1:
                  uVar6 = 0xfffffffd;
                  break;
                case 2:
                  uVar6 = 0xffffffff;
                  break;
                case 3:
                  uVar6 = 0xfffffffe;
                  break;
                default:
                  uVar6 = 0;
                }
                uStack_84 = (uint)bStack_7a;
                FUN_002e1fe0(iVar5,uVar6,iStack_94,
                             (bStack_7a >> (bVar4 & 0x1f) & 3) << 8 | (uint)abStack_79[uVar13],uVar8
                            );
                uVar8 = uStack_54;
              }
              iStack_94 = iStack_94 +
                          ((bStack_7a >> (bVar4 & 0x1f) & 3) << 8 | (uint)abStack_79[uVar13]);
              if (uVar8 != 0) {
                cVar10 = (char)uStack_a0 + '\x01';
                uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | (uint8_t)cVar10);
                if (cVar10 == '\0') {
                  uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | UINT32_C(1));
                }
              }
              uVar13 = uVar13 + 1;
              iVar11 = iVar11 + 2;
            } while (uVar13 < (((uint8_t *)&local_80)[3] >> 1 & 7));
          }
          if ((bVar1) || (*(int *)(iVar5 + 0x2b4) == 0)) {
            cVar10 = (char)uStack_a0;
          }
          else {
            while( true ) {
              pcVar7 = (char *)FUN_002e3850(&uStack_5e);
              cVar10 = *pcVar7;
              if (((char)uStack_a0 == cVar10) ||
                 (((cVar10 != '\0' &&
                   (((byte)(cVar10 - (char)uStack_a0) < (byte)((char)uStack_a0 - cVar10) ||
                    ((char)uStack_a0 == '\0')))) || (*(int *)(iVar5 + 0x2b4) == 0)))) break;
              FUN_002e3940();
            }
            pcVar7 = (char *)FUN_002e3850(&uStack_8e);
            cVar10 = (char)uStack_a0;
            if ((char)uStack_a0 == *pcVar7) {
              do {
                cVar10 = (char)uStack_a0;
                if (*(int *)(iVar5 + 0x28) == 0) break;
                iVar11 = FUN_002e38d0(&iStack_94,&uStack_58,&uStack_8d);
                if (iVar11 < 0) {
                  return iVar11;
                }
                FUN_002e2c20(5,1);
                FUN_002e2c20(5,1);
                switch(uStack_8d) {
                case 0:
                  uVar6 = 0xfffffffb;
                  break;
                case 1:
                  uVar6 = 0xfffffffd;
                  break;
                case 2:
                  uVar6 = 0xffffffff;
                  break;
                case 3:
                  uVar6 = 0xfffffffe;
                  break;
                default:
                  uVar6 = 0;
                }
                FUN_002e1fe0(iVar5,uVar6,iStack_94,uStack_58,1);
                FUN_002e35d0(uStack_a0);
                cVar10 = (char)uStack_a0 + '\x01';
                ((uint8_t *)&uStack_a0)[0] = cVar10;
                if (cVar10 == '\0') {
                  ((uint8_t *)&uStack_a0)[0] = '\x01';
                }
                pcVar7 = (char *)FUN_002e3850(&uStack_8e);
                cVar10 = (char)uStack_a0;
              } while ((char)uStack_a0 == *pcVar7);
            }
          }
          if ((cVar10 != '\0') && (!bVar1)) {
            cVar10 = cVar10 + -1;
            if (cVar10 == '\0') {
              cVar10 = -1;
            }
            uStack_a0 = ((uStack_a0 & UINT32_C(0xffffff00)) | (uint8_t)cVar10);
            cVar3 = *(char *)(iVar5 + 0x1c4);
            if ((cVar10 != cVar3) &&
               ((cVar3 == '\0' ||
                (((byte)(cVar10 - cVar3) <= (byte)(cVar3 - cVar10) && (cVar10 != '\0')))))) {
              *(char *)(iVar5 + 0x1c4) = cVar10;
            }
          }
        }
      }
      FUN_002e2c20(3,1);
      FUN_002e2c20(1,local_88);
      FUN_002e2c20(3,1);
      FUN_002e2c20(1,local_88);
    }
LAB_002e28a2:
    if (local_88 == 0) {
      return 0;
    }
  } while( true );
}
