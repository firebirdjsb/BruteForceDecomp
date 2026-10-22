/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE4B409CEDA6769314BC3F73AB679C3702F4CE2B1BE0F6365283B7CC879AF599
 * Entry: 0x0012f440, Ghidra index: 3821, label: FUN_0012f440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_0040cb7c;
extern uint32_t DAT_0040cb84;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
extern uint32_t _DAT_00000000;
extern char s_L_Calf_0040cb74[];
extern char s_L_Clavicle_0040cb50[];
extern char s_L_Hand_0040cb64[];
extern char s_R_Calf_0040cb6c[];
extern char s_R_Clavicle_0040cb44[];
extern char s_R_Hand_0040cb5c[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0012f440(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int *in_ECX;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  int unaff_EBX;
  int *piVar17;
  int iVar18;
  undefined4 uStack_54;
  int *local_50;
  uint uStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int aiStack_34 [3];
  undefined4 uStack_28;
  uint uStack_14;
  
  local_50 = in_ECX;
  piVar6 = (int *)FUN_00154f50(param_1,param_2);
  if (piVar6 == (int *)0x0) {
    (**(code **)(_DAT_00000000 + 0xa0))();
    return 0;
  }
  FUN_00125870(piVar6,in_ECX[0x89]);
  FUN_001258d0(piVar6,in_ECX[0x89]);
  FUN_000200b0();
  FUN_00210060();
  iVar7 = FUN_0023da90(in_ECX + 0x31,piVar6 + 0x6c,piVar6);
  if (iVar7 != 0) {
    piVar6[0x7d] = iVar7;
    local_44 = *(int *)(iVar7 + 0x20);
    (**(code **)(*piVar6 + 0x28))(local_44);
    iVar7 = 0;
    if (0 < *(short *)((int)piVar6 + 0x106)) {
      do {
        iVar8 = (**(code **)(*piVar6 + 0x34))(iVar7);
        if (iVar8 != 0) {
          iVar8 = (**(code **)(*piVar6 + 0x34))(iVar7);
          *(int **)(iVar8 + 0x5c) = piVar6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(short *)((int)piVar6 + 0x106));
    }
    piVar17 = local_50;
    if ((*(byte *)((int)local_50 + 0x1aa) & 1) == 0) {
      iVar7 = local_50[0x62];
      if (iVar7 != local_50[99]) {
        do {
          piVar9 = (int *)FUN_00235d50(iVar7);
          if (((piVar9 != (int *)0x0) && (piVar9 != (int *)0xffffffff)) &&
             (*(int *)(*piVar9 + 0x24) != 0)) {
            *(undefined4 *)(iVar7 + 0xc) =
                 *(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x24) + 4) + 8);
          }
          iVar7 = iVar7 + 0x14;
        } while (iVar7 != piVar17[99]);
      }
      uStack_4c = piVar17[0x62];
      if (uStack_4c != piVar17[99]) {
        do {
          iVar7 = FUN_00235d50(uStack_4c);
          if ((iVar7 != 0) && (iVar7 != -1)) {
            if (*(int *)(iVar7 + 0x10) == 0) {
              piVar17 = (int *)0x0;
            }
            else {
              piVar17 = *(int **)(*(int *)(iVar7 + 0x10) + 100);
            }
            uStack_54 = uStack_54 & 0xffffff;
            piVar9 = local_50;
            do {
              if ((piVar17 == (int *)0x0) || (piVar17 == (int *)0xffffffff)) break;
              piVar16 = (int *)piVar9[0x62];
              bVar3 = false;
              if (piVar16 != (int *)piVar9[99]) {
                do {
                  if (bVar3) break;
                  piVar14 = (int *)piVar17[3];
                  if (piVar14 == (int *)0x0) {
                    piVar14 = &DAT_0046d064;
                  }
                  if (*piVar16 == *piVar14) {
                    bVar3 = true;
                  }
                  piVar16 = piVar16 + 5;
                } while (piVar16 != (int *)piVar9[99]);
              }
              piVar16 = piVar9 + 0x67;
              piVar14 = (int *)piVar9[0x66];
              for (; piVar14 != (int *)*piVar16; piVar14 = piVar14 + 2) {
                if (bVar3) goto LAB_0012f63a;
                piVar9 = (int *)piVar17[3];
                if (piVar9 == (int *)0x0) {
                  piVar9 = &DAT_0046d064;
                }
                if (*piVar14 == *piVar9) {
                  bVar3 = true;
                }
                piVar9 = local_50;
              }
              if (bVar3) {
LAB_0012f63a:
                uStack_54 = CONCAT13(1,(undefined3)uStack_54);
              }
              else {
                puVar10 = (undefined4 *)piVar17[3];
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = &DAT_0046d064;
                }
                uStack_38 = *puVar10;
                if ((*(int *)(*piVar17 + 0x24) != 0) &&
                   (aiStack_34[0] = *(int *)(*(int *)(*(int *)(*piVar17 + 0x24) + 4) + 8),
                   aiStack_34[0] != 0)) {
                  iVar7 = piVar9[0x66];
                  if ((iVar7 == 0) ||
                     ((uint)(piVar9[0x68] - iVar7 >> 3) <= (uint)(piVar9[0x67] - iVar7 >> 3))) {
                    FUN_001bd760(piVar9[0x67],1,&uStack_38);
                  }
                  else {
                    iVar7 = piVar9[0x67];
                    FUN_00144b10(iVar7,1,piVar9 + 0x65,uStack_38);
                    piVar9[0x67] = iVar7 + 8;
                    piVar9 = local_50;
                  }
                }
              }
              if (piVar17[4] == 0) {
                piVar17 = (int *)0x0;
              }
              else {
                piVar17 = *(int **)(piVar17[4] + 100);
              }
            } while (uStack_54._3_1_ == '\0');
          }
          uStack_4c = uStack_4c + 0x14;
        } while (uStack_4c != local_50[99]);
      }
      *(byte *)((int)local_50 + 0x1aa) = *(byte *)((int)local_50 + 0x1aa) | 1;
    }
  }
  if ((*(byte *)(local_50 + 0x6a) & 1) != 0) {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xbc))(piVar6,1);
  }
  piVar17 = local_50;
  pcVar11 = (char *)((int)local_50 + 0x315);
  piVar6[0x7f] = 0;
  iVar7 = piVar6[0xba] + 0x78;
  iVar8 = 9;
  do {
    *(bool *)(iVar7 + -0x44) = pcVar11[-9] != '\0';
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    *(bool *)iVar7 = cVar4 != '\0';
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar7 = FUN_0012e590();
  piVar6[0x169] = iVar7;
  *(int **)(iVar7 + 0x18) = piVar6;
  *(int *)(piVar6[0x169] + 4) = piVar17[0x8b];
  (**(code **)(*piVar6 + 0x50))(&DAT_0046d004);
  piVar6[0x128] = piVar6[0x10d];
  if (piVar17[0xae] != 0) {
    FUN_00150670(piVar6 + 0x80,0,0,0);
  }
  iVar7 = piVar6[0x1b];
  if ((*(uint *)(iVar7 + 0x44) >> 10 & 1) == 0) {
    piVar17 = *(int **)(iVar7 + 0x58);
    if (piVar17 != (int *)0x0) {
      (**(code **)(*piVar17 + 0x14))(piVar17);
      (**(code **)(**(int **)(iVar7 + 0x58) + 0x10))(*(int **)(iVar7 + 0x58),iVar7);
    }
    if (*(int *)(iVar7 + 0x10) != 0) {
      FUN_00234f90(*(int *)(iVar7 + 0x10),iVar7 + 0x14);
    }
    iVar8 = *(int *)(iVar7 + 0x50);
    *(uint *)(iVar7 + 0x44) = *(uint *)(iVar7 + 0x44) & 0xfffffeff;
    for (iVar7 = *(int *)(iVar7 + 0x4c); iVar7 != iVar8; iVar7 = iVar7 + 4) {
      FUN_002368d0(1);
    }
  }
  FUN_00236670(1,auStack_3c,aiStack_34);
  if (*(int *)(uStack_54 + 0x1ac) != 0) {
    iVar7 = FUN_002ea01d(100);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_00143380(*(undefined4 *)(uStack_54 + 0x1ac),piVar6[0x1b]);
    }
    piVar6[0x16e] = iVar7;
    *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(iVar7 + 0x58) = 1;
    FUN_001439b0(piVar6[0x16e],0);
  }
  FUN_001137e0(piVar6);
  (**(code **)(*piVar6 + 0xb8))(0x3f800000);
  FUN_001152a0();
  iVar7 = piVar6[0x1b];
  iVar8 = FUN_0012e870(&DAT_0040cb84);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0xfa] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = piVar6[0xfa];
  if ((iVar8 == 0) || (iVar8 == -1)) {
    iVar8 = FUN_0012e870(&DAT_0040cb7c);
    if (*(uint *)(iVar8 + 0x18) < 0x10) {
      pcVar11 = (char *)(iVar8 + 4);
    }
    else {
      pcVar11 = *(char **)(iVar8 + 4);
    }
    if (pcVar11 == (char *)0x0) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = 0xffffffff;
      cVar4 = *pcVar11;
      while (cVar4 != '\0') {
        uStack_4c = uStack_4c >> 8 ^
                    *(uint *)(&DAT_003bc150 +
                             (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4);
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar4 = *pcVar1;
      }
      uStack_4c = ~uStack_4c;
    }
    iVar8 = FUN_00235d50(&uStack_4c);
    piVar6[0xfb] = iVar8;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_28);
    }
  }
  else if (*(int *)(iVar8 + 0x10) == 0) {
    piVar6[0xfb] = 0;
  }
  else {
    piVar6[0xfb] = *(int *)(*(int *)(iVar8 + 0x10) + 100);
  }
  iVar8 = FUN_0012e870(s_L_Calf_0040cb74);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0xfc] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = FUN_0012e870(s_R_Calf_0040cb6c);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0xfd] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = FUN_0012e870(s_L_Hand_0040cb64);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0xfe] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = FUN_0012e870(s_R_Hand_0040cb5c);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0xff] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = FUN_0012e870(s_L_Clavicle_0040cb50);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0x100] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  iVar8 = FUN_0012e870(s_R_Clavicle_0040cb44);
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    pcVar11 = (char *)(iVar8 + 4);
  }
  else {
    pcVar11 = *(char **)(iVar8 + 4);
  }
  if (pcVar11 == (char *)0x0) {
    uStack_4c = 0;
  }
  else {
    uStack_4c = 0xffffffff;
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      uStack_4c = uStack_4c >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar4] ^ uStack_4c) & 0xff) * 4)
      ;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
    }
    uStack_4c = ~uStack_4c;
  }
  puVar15 = *(uint **)(iVar7 + 0xc);
  iVar8 = 0;
  if (puVar15 == (uint *)0x0) {
    puVar15 = &DAT_0046d064;
  }
  iVar12 = iVar7;
  if (*puVar15 != uStack_4c) {
    iVar2 = *(int *)(iVar7 + 0x50);
    iVar18 = *(int *)(iVar7 + 0x4c);
    while ((iVar12 = iVar8, iVar18 != iVar2 &&
           (iVar8 = FUN_00235d50(&uStack_4c), iVar12 = iVar8, iVar8 == 0))) {
      iVar18 = iVar18 + 4;
    }
  }
  piVar6[0x101] = iVar12;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_28);
  }
  if (*(int *)(unaff_EBX + 0x678) == 0) {
    piVar6[0x102] = 0;
  }
  else {
    iVar8 = FUN_00235d50(unaff_EBX + 0x678);
    piVar6[0x102] = iVar8;
  }
  iVar8 = piVar6[0xfa];
  if ((iVar8 != 0) && (iVar8 != -1)) {
    piVar6[0x123] = (int)(*(float *)(iVar8 + 0x3c) - (float)piVar6[0x10e]);
  }
  uStack_4c = 0xf1b42b39;
  cVar4 = FUN_0015a0d0(piVar6 + 0x10a,&local_50);
  if (cVar4 != '\0') {
    iVar8 = (**(code **)(*piVar6 + 0x34))(local_50);
    piVar6[0x108] = iVar8;
  }
  uStack_4c = 0xfb4be3f1;
  cVar4 = FUN_0015a0d0(piVar6 + 0x10b,&local_50);
  if (cVar4 != '\0') {
    iVar8 = (**(code **)(*piVar6 + 0x34))(local_50);
    piVar6[0x109] = iVar8;
  }
  uStack_4c = 0x191b08f2;
  cVar4 = FUN_0015a0d0(&iStack_48,&local_50);
  uStack_4c = 0x2125948;
  piVar6[0xf8] = (-(uint)(cVar4 != '\0') & 0x20d3c56d) + 0xf8474385;
  cVar4 = FUN_0015a0d0(&iStack_48,&local_50);
  local_50 = piVar6 + 0x1a9;
  uStack_4c = 4;
  piVar6[0xf9] = (-(uint)(cVar4 != '\0') & 0x9cb15c3) + 0xf8474385;
  piVar17 = (int *)(unaff_EBX + 1000);
  do {
    if (*piVar17 != 0) {
      piVar9 = (int *)FUN_002ea01d(0x14);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar16 = *(int **)(iVar7 + 0xc);
        iStack_48 = *piVar17;
        if (piVar16 == (int *)0x0) {
          piVar16 = &DAT_0046d064;
        }
        iVar8 = iVar7;
        if (*piVar16 != iStack_48) {
          local_44 = *(int *)(iVar7 + 0x50);
          iVar12 = *(int *)(iVar7 + 0x4c);
          iVar8 = 0;
          if (iVar12 != local_44) {
            do {
              iVar8 = FUN_00235d50(&iStack_48);
              if (iVar8 != 0) break;
              iVar12 = iVar12 + 4;
            } while (iVar12 != local_44);
          }
        }
        *piVar9 = iVar8;
        piVar16 = *(int **)(iVar7 + 0xc);
        local_44 = piVar17[1];
        if (piVar16 == (int *)0x0) {
          piVar16 = &DAT_0046d064;
        }
        iVar8 = iVar7;
        if (*piVar16 != local_44) {
          iStack_40 = *(int *)(iVar7 + 0x50);
          iVar12 = *(int *)(iVar7 + 0x4c);
          iVar8 = 0;
          if (iVar12 != iStack_40) {
            do {
              iVar8 = FUN_00235d50(&local_44);
              if (iVar8 != 0) break;
              iVar12 = iVar12 + 4;
            } while (iVar12 != iStack_40);
          }
        }
        piVar9[1] = iVar8;
        bVar5 = *(byte *)(piVar9 + 2) ^ (*(byte *)(piVar17 + 2) ^ *(byte *)(piVar9 + 2)) & 1;
        *(byte *)(piVar9 + 2) = bVar5;
        *(byte *)(piVar9 + 2) = (*(char *)((int)piVar17 + 9) << 1 ^ bVar5) & 2 ^ bVar5;
        piVar9[3] = piVar17[3];
        piVar9[4] = piVar17[4];
      }
      *local_50 = (int)piVar9;
    }
    local_50 = local_50 + 1;
    piVar17 = piVar17 + 5;
    uStack_4c = uStack_4c - 1;
    if (uStack_4c == 0) {
      piVar6 = piVar6 + 0x1ad;
      piVar17 = (int *)(unaff_EBX + 0x438);
      iVar8 = 6;
      uStack_4c = 0;
      do {
        if (*piVar17 != 0) {
          iVar12 = FUN_002ea01d(0x60);
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = FUN_00145c00(iVar12,piVar17,iVar7);
          }
          *piVar6 = iVar12;
        }
        piVar6 = piVar6 + 1;
        piVar17 = piVar17 + 0x18;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      FUN_0014cc90();
      uVar13 = FUN_0012b560(param_1);
      return uVar13;
    }
  } while( true );
}
