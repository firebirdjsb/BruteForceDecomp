/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 012929D671FBDA2976A5A2EBB19003CD3D6ADC5FBB56955338D55CB0C595DCD3
 * Entry: 0x002e86a0, Ghidra index: 10536, label: FUN_002e86a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6974;
extern uint32_t DAT_003b6978;
extern uint32_t DAT_0040e89c;
int FUN_002e86a0(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_18;
  uint uStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  int iStack_8;
  char cStack_4;
  
  iVar10 = 0;
  if (DAT_003b6974 != 0) {
    uStack_18 = (**(code **)(in_ECX + 0x38))();
    uStack_14 = uStack_14 & 0xffffff00;
    piStack_10 = (int *)0x3;
    cStack_4 = '\x01';
    uStack_c = 0;
LAB_002e86df:
    iStack_8 = 0;
    uVar7 = DAT_003b6974;
LAB_002e86e4:
    bVar2 = false;
    uVar8 = 0;
    if (uVar7 != 0) goto code_r0x002e86ec;
    goto LAB_002e8761;
  }
  goto LAB_002e8899;
code_r0x002e86ec:
  if (uVar7 == 0) goto LAB_002e874f;
  do {
    piVar1 = *(int **)(DAT_003b6978 + uVar8 * 4);
    if (piVar1 != (int *)0x0) {
      iVar10 = (**(code **)(*piVar1 + 8))(&uStack_18);
      uVar7 = DAT_003b6974;
      if (iVar10 < 0) break;
      if (iStack_8 != 0) {
        bVar2 = true;
        iVar10 = FUN_002e7f50(*(undefined4 *)(iStack_8 + 0x10),iStack_8,uStack_14,piStack_10);
        FUN_002e8b90();
        iStack_8 = 0;
        if (iVar10 < 0) goto LAB_002e86df;
      }
      uVar7 = DAT_003b6974;
      if (cStack_4 == '\0') break;
    }
LAB_002e874f:
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar7);
  if (!bVar2) {
LAB_002e8761:
    if (uVar7 == 0) goto LAB_002e888d;
    uStack_18 = (**(code **)(in_ECX + 0x38))();
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    uStack_14 = 0;
    piStack_10 = (int *)0x0;
    uVar7 = DAT_003b6974;
    goto LAB_002e8784;
  }
  goto LAB_002e86e4;
LAB_002e8784:
  do {
    uVar8 = 0;
    bVar2 = false;
    if (uVar7 == 0) break;
    if (uVar7 == 0) goto LAB_002e8871;
    do {
      uVar6 = 0;
      piVar1 = *(int **)(DAT_003b6978 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        iVar10 = (**(code **)(*piVar1 + 0xc))(&uStack_18);
        uVar7 = DAT_003b6974;
        if (iVar10 < 0) break;
        if (piStack_10 != (int *)0x0) {
          bVar2 = true;
          iVar4 = (**(code **)(*piStack_10 + 0x14))();
          iVar9 = iVar4 * 0x10 + DAT_0040e89c;
          if (*(char *)(iVar4 * 0x10 + 0xc + DAT_0040e89c) != '\0') {
            do {
              iVar10 = (**(code **)**(undefined4 **)(iVar9 + uVar6 * 4))(piStack_10);
              if (iVar10 != 1) goto LAB_002e885a;
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(byte *)(iVar9 + 0xc));
          }
          cVar3 = (**(code **)(*piStack_10 + 0x20))();
          if ((cVar3 == '\0') || (uVar7 = piStack_10[3], *(uint *)(in_ECX + 8) <= uVar7)) {
            FUN_002e8b90();
          }
          else if ((uVar7 == 0xffffffff) || (piStack_10[4] == -1)) {
            iVar10 = -0x7fffbffb;
          }
          else {
            iVar10 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + uVar7 * 4) + 0xc))
                               (piStack_10);
            if (iVar10 < 0) {
              return iVar10;
            }
          }
LAB_002e885a:
          piStack_10 = (int *)0x0;
        }
        uVar7 = DAT_003b6974;
        if ((char)uStack_c == '\0') break;
      }
LAB_002e8871:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  } while (bVar2);
LAB_002e888d:
  if (-1 < iVar10) {
LAB_002e8899:
    uVar7 = 0;
    if ((*(int *)(in_ECX + 0x2c) != 0) &&
       (iVar4 = XAPILIB__GetTickCount(),
       *(uint *)(in_ECX + 0x2c) <= (uint)(iVar4 - *(int *)(in_ECX + 0x34)))) {
      iVar10 = 0;
      if ((*(int *)(in_ECX + 0x14) != 0) && ((*(uint *)(in_ECX + 8) & 0x3fffffff) != 0)) {
        do {
          iVar10 = FUN_002e9c60();
          if (iVar10 < 0) break;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(*(int *)(in_ECX + 8) << 2));
      }
      uVar5 = XAPILIB__GetTickCount();
      *(undefined4 *)(in_ECX + 0x34) = uVar5;
    }
    uVar7 = 0;
    if (((-1 < iVar10) && (*(int *)(in_ECX + 0x30) != 0)) &&
       (uVar8 = (**(code **)(in_ECX + 0x38))(), uVar8 % *(uint *)(in_ECX + 0x30) == 0)) {
      iVar10 = 0;
      if ((*(int *)(in_ECX + 0x14) != 0) && ((*(uint *)(in_ECX + 8) & 0x3fffffff) != 0)) {
        do {
          iVar10 = FUN_002e9c60();
          if (iVar10 < 0) break;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(*(int *)(in_ECX + 8) << 2));
      }
      uVar5 = XAPILIB__GetTickCount();
      *(undefined4 *)(in_ECX + 0x34) = uVar5;
    }
  }
  return iVar10;
}
