/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B404181BE93011ADB77BD8FFD8FD6346B8AC143C0FA7022ACF745249F0828296
 * Entry: 0x000823b0, Ghidra index: 1531, label: FUN_000823b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401f68;
extern uint32_t DAT_00401f6c;
extern uint32_t DAT_00401f74;
void FUN_000823b0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int iVar10;
  int unaff_EDI;
  uint uVar11;
  undefined4 uStack_70;
  int *piStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  int *piStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  int *piStack_c;
  undefined4 uStack_8;
  int *piStack_4;
  
  iVar4 = (**(code **)(*param_1 + 0x18))();
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*param_1 + 0xe4))(), iVar4 != 0)) {
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    piStack_5c = (int *)0x0;
    piStack_58 = (int *)0x0;
    uStack_54 = 0;
    puStack_2c = (undefined4 *)0x0;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    piStack_c = (int *)0x0;
    uStack_8 = 0;
    piStack_4 = (int *)0x0;
    piStack_1c = (int *)0x0;
    piStack_18 = (int *)0x0;
    uStack_14 = 0;
    piStack_6c = (int *)0x0;
    uStack_70 = 0;
    (**(code **)(*param_1 + 0xec))(&iStack_50,auStack_30);
    (**(code **)(*piStack_4 + 0xf0))(&piStack_68,&uStack_38);
    FUN_0010bc40();
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      pbVar5 = (byte *)(**(code **)(*piStack_c + 0x130))(iVar4);
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 1) != 0)) {
        unaff_EBP = unaff_EBP + 1;
        if (piStack_5c != piStack_58) {
          piVar8 = piStack_5c;
          do {
            if (*piVar8 == *(int *)(pbVar5 + 0x10)) {
              FUN_00085410(piVar8);
              unaff_ESI = unaff_ESI + 1;
              goto LAB_000824e7;
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piStack_58);
        }
        if (piStack_6c != piStack_68) {
          piVar8 = piStack_6c;
          do {
            if (*piVar8 == *(int *)(pbVar5 + 0x10)) {
              FUN_00085410(piVar8);
              unaff_EDI = unaff_EDI + 1;
              goto LAB_000824e7;
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piStack_68);
        }
        pbVar5[0x10] = 0;
        pbVar5[0x11] = 0;
        pbVar5[0x12] = 0;
        pbVar5[0x13] = 0;
        *pbVar5 = *pbVar5 & 0xfb;
      }
LAB_000824e7:
    } while (iVar4 < 8);
    if (unaff_EDI + unaff_ESI < unaff_EBP) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        pbVar5 = (byte *)(**(code **)(*piStack_c + 0x130))(iVar4);
        if (((pbVar5 != (byte *)0x0) && (bVar1 = *pbVar5, (bVar1 & 1) != 0)) &&
           (*(int *)(pbVar5 + 0x10) == 0)) {
          if ((piStack_5c == (int *)0x0) || ((int)piStack_58 - (int)piStack_5c >> 2 == 0)) {
            if ((piStack_6c == (int *)0x0) || ((int)piStack_68 - (int)piStack_6c >> 2 == 0)) {
              (**(code **)(*piStack_c + 0x128))(pbVar5);
            }
            else {
              iVar10 = *piStack_6c;
              pbVar5[1] = 1;
              *(int *)(pbVar5 + 0x10) = iVar10;
              *pbVar5 = bVar1 | 4;
              FUN_00085410(piStack_6c);
            }
          }
          else {
            iVar10 = *piStack_5c;
            pbVar5[1] = 1;
            *(int *)(pbVar5 + 0x10) = iVar10;
            *pbVar5 = bVar1 | 4;
            FUN_00085410(piStack_5c);
          }
        }
      } while (iVar4 < 8);
    }
    piVar8 = piStack_58;
    if (((piStack_5c != (int *)0x0) && ((int)piStack_58 - (int)piStack_5c >> 2 != 0)) &&
       (piVar6 = piStack_5c, piStack_5c != piStack_58)) {
      do {
        uStack_48 = 0;
        iStack_50 = DAT_00401f68;
        uStack_44 = 0;
        uStack_4c = DAT_00401f6c;
        cVar3 = FUN_00083d10(piStack_c,*piVar6,&uStack_48);
        if (cVar3 != '\0') {
          uStack_44 = DAT_00401f74;
          iVar4 = (**(code **)(*piStack_c + 0x210))();
          uVar11 = 0;
          iVar10 = 0;
          while( true ) {
            if ((*(int *)(iVar4 + 0x14) == 0) ||
               ((uint)(*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 4) <= uVar11))
            goto LAB_0008270b;
            if (*(int *)(iVar10 + *(int *)(iVar4 + 0x14)) == iStack_50) break;
            uVar11 = uVar11 + 1;
            iVar10 = iVar10 + 0x10;
          }
          iVar4 = FUN_00077da0(3);
          if (iVar4 != 0) {
            iVar10 = *(int *)(iVar4 + 0xc);
            if (iVar10 == 1) {
              iVar4 = (int)*(float *)(iVar4 + 4);
LAB_000826fe:
              cVar3 = iVar4 != 0;
            }
            else {
              if (iVar10 == 2) {
                iVar4 = *(int *)(iVar4 + 4);
                goto LAB_000826fe;
              }
              if (iVar10 != 3) goto LAB_0008271e;
              cVar3 = *(char *)(iVar4 + 4);
            }
            if (cVar3 == '\0') goto LAB_0008271e;
          }
        }
LAB_0008270b:
        FUN_00074fb0();
LAB_0008271e:
        puVar2 = puStack_2c;
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar8);
      if ((puStack_2c != (undefined4 *)0x0) && ((int)puStack_28 - (int)puStack_2c >> 2 != 0)) {
        iVar4 = 0;
        puVar9 = puStack_28;
        do {
          if ((int)puVar9 - (int)puVar2 >> 2 == 0) break;
          iVar4 = iVar4 + 1;
          pbVar5 = (byte *)(**(code **)(*piStack_c + 0x130))(iVar4);
          piVar8 = piStack_68;
          if (((pbVar5 != (byte *)0x0) && ((*pbVar5 & 1) != 0)) && (piStack_1c != piStack_18)) {
            piVar6 = piStack_1c;
LAB_000827a0:
            if (*(int *)(pbVar5 + 0x10) != *piVar6) goto code_r0x000827a4;
            if ((piStack_6c == (int *)0x0) ||
               ((uint)(iStack_64 - (int)piStack_6c >> 2) <=
                (uint)((int)piStack_68 - (int)piStack_6c >> 2))) {
              FUN_00075780(piStack_68,1,&stack0xffffff84);
            }
            else {
              FUN_0003efa0(piStack_68,1,&uStack_70,0);
              piStack_68 = piVar8 + 1;
            }
            puVar7 = puVar2 + 1;
            *(undefined4 *)(pbVar5 + 0x10) = *puVar2;
            *pbVar5 = *pbVar5 | 4;
            pbVar5[1] = 1;
            if (puVar7 != puVar9) {
              iVar10 = (int)puVar2 - (int)puVar7;
              do {
                *(undefined4 *)(iVar10 + (int)puVar7) = *puVar7;
                puVar7 = puVar7 + 1;
              } while (puVar7 != puVar9);
            }
            puVar9 = puVar9 + -1;
          }
LAB_00082843:
        } while (iVar4 < 8);
      }
    }
    if (iStack_3c != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iStack_3c);
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (puStack_2c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puStack_2c);
    }
    if (piStack_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_1c);
    }
    if (piStack_6c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_6c);
    }
    piStack_6c = (int *)0x0;
    piStack_68 = (int *)0x0;
    iStack_64 = 0;
    if (piStack_5c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_5c);
    }
  }
  return;
code_r0x000827a4:
  piVar6 = piVar6 + 1;
  if (piVar6 == piStack_18) goto LAB_00082843;
  goto LAB_000827a0;
}
