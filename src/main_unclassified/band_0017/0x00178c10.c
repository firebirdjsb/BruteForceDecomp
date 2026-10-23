/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A443817013AB5252DE5D0A83F0856A431EA0F38E12A605D25263F8198FB91F0
 * Entry: 0x00178c10, Ghidra index: 4977, label: FUN_00178c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469994;
undefined4 FUN_00178c10(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uStack_50;
  int aiStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_00469940 == (int *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(*DAT_00469940 + 0x10))();
  if (cVar3 == '\0') {
    return 0;
  }
  if (DAT_00469994 == '\0') {
    return 0;
  }
  if (in_EAX != 0) {
    uVar8 = 0;
    iVar4 = FUN_00072bd0();
    if (iVar4 != 0) {
      do {
        if (3 < uVar8) break;
        aiStack_40[uVar8] = iVar4;
        uVar8 = uVar8 + 1;
        iVar4 = FUN_00072c00();
      } while (iVar4 != 0);
      if (uVar8 != 0) {
        if (((int)uVar8 < 1) || (4 < (int)uVar8)) {
          *(undefined1 *)(DAT_00469940 + 1) = 1;
        }
        else {
          *(char *)(DAT_00469940 + 1) = (char)uVar8;
        }
        uStack_50 = 0;
        if (uVar8 != 0) {
          iVar4 = 0;
          do {
            piVar1 = (int *)aiStack_40[uStack_50];
            if (piVar1 != (int *)0x0) {
              if (((piVar1[0x15] == 1) && (piVar2 = (int *)piVar1[0x52], piVar2 != (int *)0x0)) &&
                 (*(int *)(piVar2[3] + 4) == 3)) {
                iVar5 = (**(code **)(*piVar2 + 0x40))();
                iVar6 = (**(code **)(*piVar1 + 0x40))();
                FUN_0003d6c0(&uStack_30,iVar6,iVar6 + 0x24);
                piVar1 = DAT_00469940;
                uStack_4 = *(undefined4 *)(iVar5 + 0x2c);
                uStack_8 = *(undefined4 *)(iVar5 + 0x28);
                uStack_c = *(undefined4 *)(iVar5 + 0x24);
                FUN_0017e4e0(DAT_00469940);
                if ((-1 < iVar4) && (iVar4 < 0xc0)) {
                  *(byte *)((int)piVar1 + uStack_50 + 200) = *(byte *)(piVar2 + 0x10f) & 1;
                }
              }
              else {
                uVar7 = (**(code **)(*piVar1 + 0x40))();
                if ((-1 < iVar4) && (iVar4 < 0xc0)) {
                  FUN_0003d730(iVar4 + 8 + (int)DAT_00469940,uVar7);
                }
              }
            }
            uStack_50 = uStack_50 + 1;
            iVar4 = iVar4 + 0x30;
          } while (uStack_50 < uVar8);
          FUN_00178850();
          FUN_00178ae0();
          return 1;
        }
        goto LAB_00178e32;
      }
    }
  }
  piVar1 = DAT_00469940;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_10 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  *(undefined1 *)(DAT_00469940 + 1) = 1;
  FUN_0003d730(piVar1 + 2,&uStack_30);
LAB_00178e32:
  FUN_00178850();
  FUN_00178ae0();
  return 1;
}
