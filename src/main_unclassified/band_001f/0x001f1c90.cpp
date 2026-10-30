/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2952358EEFF2261DBA0A5CCA25E6635CC04173C2B32AA1E5062230EB9366DBB7
 * Entry: 0x001f1c90, Ghidra index: 6997, label: FUN_001f1c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc760;
void FUN_001f1c90(void)

{
  int *piVar1;
  byte bVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  do {
    if (*(char *)(in_EAX + 0x27c) == '\0') {
      iVar8 = *(int *)(in_EAX + 0x284);
      piVar1 = (int *)(in_EAX + 0x284);
      if (iVar8 == 0) {
        uVar3 = FUN_001f2020(piVar1);
        *(undefined4 *)(in_EAX + 0x280) = uVar3;
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *(undefined1 *)(in_EAX + 0x27c) = 1;
          uVar5 = 0xffffffff;
          goto LAB_001f1cf2;
        }
      }
      *piVar1 = iVar8 + -1;
      uVar5 = (uint)**(byte **)(in_EAX + 0x280);
      *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
    }
    else {
      uVar5 = 0xffffffff;
    }
LAB_001f1cf2:
    if (uVar5 != *(uint *)((int)&DAT_003bc760 + uVar7)) {
      *(undefined4 *)(in_EAX + 0x2c0) = 0xfffffffd;
      return;
    }
    uVar7 = uVar7 + 4;
  } while (uVar7 < 8);
  if (*(char *)(in_EAX + 0x27c) == '\0') {
    iVar8 = *(int *)(in_EAX + 0x284);
    piVar1 = (int *)(in_EAX + 0x284);
    if (iVar8 == 0) {
      uVar3 = FUN_001f2020(piVar1);
      *(undefined4 *)(in_EAX + 0x280) = uVar3;
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *(undefined1 *)(in_EAX + 0x27c) = 1;
        uVar7 = 0xffffffff;
        goto LAB_001f1d62;
      }
    }
    *piVar1 = iVar8 + -1;
    uVar7 = (uint)**(byte **)(in_EAX + 0x280);
    *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
  }
  else {
    uVar7 = 0xffffffff;
  }
LAB_001f1d62:
  if (*(char *)(in_EAX + 0x27c) == '\0') {
    iVar8 = *(int *)(in_EAX + 0x284);
    piVar1 = (int *)(in_EAX + 0x284);
    if (iVar8 == 0) {
      uVar3 = FUN_001f2020(piVar1);
      *(undefined4 *)(in_EAX + 0x280) = uVar3;
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *(undefined1 *)(in_EAX + 0x27c) = 1;
        bVar6 = 0xff;
        goto LAB_001f1db5;
      }
    }
    *piVar1 = iVar8 + -1;
    bVar6 = **(byte **)(in_EAX + 0x280);
    *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
  }
  else {
    bVar6 = 0xff;
  }
LAB_001f1db5:
  if ((uVar7 != 8) || ((bVar6 & 0xe0) != 0)) {
    *(undefined4 *)(in_EAX + 0x2c0) = 0xfffffffd;
    return;
  }
  iVar8 = 6;
  do {
    if (*(char *)(in_EAX + 0x27c) == '\0') {
      iVar4 = *(int *)(in_EAX + 0x284);
      piVar1 = (int *)(in_EAX + 0x284);
      if (iVar4 == 0) {
        uVar3 = FUN_001f2020(piVar1);
        *(undefined4 *)(in_EAX + 0x280) = uVar3;
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *(undefined1 *)(in_EAX + 0x27c) = 1;
          goto LAB_001f1e10;
        }
      }
      *piVar1 = iVar4 + -1;
      *(int *)(in_EAX + 0x280) = *(int *)(in_EAX + 0x280) + 1;
    }
LAB_001f1e10:
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((bVar6 & 4) != 0) {
    iVar8 = FUN_001f1fc0();
    iVar4 = FUN_001f1fc0();
    iVar8 = iVar8 + iVar4 * 0x100;
    do {
      if ((iVar8 == 0) || (*(char *)(in_EAX + 0x27c) != '\0')) break;
      iVar4 = *(int *)(in_EAX + 0x284);
      piVar1 = (int *)(in_EAX + 0x284);
      if (iVar4 == 0) {
        uVar3 = FUN_001f2020(piVar1);
        *(undefined4 *)(in_EAX + 0x280) = uVar3;
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *(undefined1 *)(in_EAX + 0x27c) = 1;
          break;
        }
      }
      *piVar1 = iVar4 + -1;
      bVar2 = **(byte **)(in_EAX + 0x280);
      *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
      iVar8 = iVar8 + -1;
    } while (bVar2 != 0xffffffff);
  }
  if ((bVar6 & 8) != 0) {
    while (*(char *)(in_EAX + 0x27c) == '\0') {
      iVar8 = *(int *)(in_EAX + 0x284);
      piVar1 = (int *)(in_EAX + 0x284);
      if (iVar8 == 0) {
        uVar3 = FUN_001f2020(piVar1);
        *(undefined4 *)(in_EAX + 0x280) = uVar3;
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *(undefined1 *)(in_EAX + 0x27c) = 1;
          break;
        }
      }
      *piVar1 = iVar8 + -1;
      uVar7 = (uint)**(byte **)(in_EAX + 0x280);
      *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
      if ((uVar7 == 0) || (uVar7 == 0xffffffff)) break;
    }
  }
  if ((bVar6 & 0x10) != 0) {
    while (*(char *)(in_EAX + 0x27c) == '\0') {
      iVar8 = *(int *)(in_EAX + 0x284);
      piVar1 = (int *)(in_EAX + 0x284);
      if (iVar8 == 0) {
        uVar3 = FUN_001f2020(piVar1);
        *(undefined4 *)(in_EAX + 0x280) = uVar3;
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *(undefined1 *)(in_EAX + 0x27c) = 1;
          break;
        }
      }
      *piVar1 = iVar8 + -1;
      uVar7 = (uint)**(byte **)(in_EAX + 0x280);
      *(byte **)(in_EAX + 0x280) = *(byte **)(in_EAX + 0x280) + 1;
      if ((uVar7 == 0) || (uVar7 == 0xffffffff)) break;
    }
  }
  if ((bVar6 & 2) != 0) {
    iVar8 = 2;
    do {
      if (*(char *)(in_EAX + 0x27c) == '\0') {
        iVar4 = *(int *)(in_EAX + 0x284);
        piVar1 = (int *)(in_EAX + 0x284);
        if (iVar4 == 0) {
          uVar3 = FUN_001f2020(piVar1);
          *(undefined4 *)(in_EAX + 0x280) = uVar3;
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            *(undefined1 *)(in_EAX + 0x27c) = 1;
            goto LAB_001f1f90;
          }
        }
        *piVar1 = iVar4 + -1;
        *(int *)(in_EAX + 0x280) = *(int *)(in_EAX + 0x280) + 1;
      }
LAB_001f1f90:
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(uint *)(in_EAX + 0x2c0) = -(uint)(*(char *)(in_EAX + 0x27c) != '\0') & 0xfffffffd;
  return;
}
