/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB147249E2754CDD4072AF7BBA41657D22A0D416BAA9114204E66454CD044D9E
 * Entry: 0x000a9910, Ghidra index: 2026, label: FUN_000a9910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
undefined4 FUN_000a9910(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  char cStack_4;
  
  iVar5 = (**(code **)(**(int **)(*(int *)(in_EAX[0x2a] + 8) + 0xbec) + 0xc))(in_EAX[0x2a]);
  if (iVar5 != 0) {
    if ((*(int *)(iVar5 + 0x30) != 0) &&
       (iVar5 = *(int *)(*(int *)(iVar5 + 0x30) + 0x34), iVar5 != 0)) {
      if ((*(byte *)(iVar5 + 0xbc) & 1) != 0) {
        return 0;
      }
      if (*(char *)(iVar5 + 0x7c) != '\0') {
        return 0;
      }
    }
    if (*(int *)(in_EAX[0x2a] + 0x7a8) != 0) {
      return 0;
    }
  }
  if (*(int *)(in_EAX[0x2a] + 0x640) != 0) {
    return 0;
  }
  iVar5 = (**(code **)(*in_EAX + 0x30))();
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = (**(code **)(*in_EAX + 0x30))();
  iVar5 = DAT_00469aac;
  if (*(int *)(*(int *)(iVar6 + 0xc) + 4) != 0x14) {
    iVar5 = (**(code **)(*in_EAX + 0x30))();
    if (*(char *)(iVar5 + 0x79) == '\x06') {
      (**(code **)(*in_EAX + 0x30))();
      (**(code **)(*in_EAX + 0x30))();
      cVar4 = FUN_00121f10();
      if (cVar4 == '\0') {
        iVar5 = in_EAX[0x2a];
        uVar7 = (**(code **)(*in_EAX + 0x30))();
        iVar5 = FUN_00121f40(iVar5,uVar7);
        if (iVar5 == 0) {
          FUN_000bb200();
          return 0;
        }
        iVar5 = *(int *)(iVar5 + 0x640);
        iVar6 = (**(code **)(*in_EAX + 0x30))();
        if (iVar5 == iVar6) {
          FUN_000bb200();
          return 0;
        }
        cVar4 = FUN_00112800();
        if (cVar4 != '\0') {
          FUN_000bb200();
          return 0;
        }
      }
    }
    return 1;
  }
  FUN_00023b80();
  puVar2 = *(undefined4 **)(iVar5 + 0x74);
  puVar3 = *(undefined4 **)(iVar5 + 0x68);
  while ((((puStack_14 != puVar3 || (puStack_10 != puVar3)) || (puStack_c != puVar2)) ||
         (puStack_8 != puVar2))) {
    if (puStack_14 == puStack_10) {
      iVar5 = puStack_c[3];
    }
    else {
      iVar5 = puStack_14[3];
    }
    if (((*(int *)(*(int *)(iVar5 + 0xc) + 4) == 3) && (iVar5 != in_EAX[0x2a])) &&
       (iVar5 = *(int *)(iVar5 + 0x640), iVar6 = (**(code **)(*in_EAX + 0x30))(), iVar5 == iVar6)) {
      return 0;
    }
    if (puStack_14 == puStack_10) {
      puStack_c = (undefined4 *)*puStack_c;
    }
    else {
      puStack_14 = (undefined4 *)*puStack_14;
    }
  }
  iVar5 = (**(code **)(*in_EAX + 0x30))();
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  piVar8 = *(int **)(in_EAX[0x2a] + 0x2e8);
  cVar4 = (**(code **)(*piVar8 + 0x4c))(uVar7);
  if (cVar4 == '\0') {
    piVar1 = piVar8 + 0x11;
    piVar8 = piVar8 + 0x11;
    cVar4 = (**(code **)(*piVar1 + 0x4c))(uVar7);
    if (cVar4 == '\0') goto LAB_000a9a70;
  }
  if (piVar8 != (int *)0x0) {
    return 1;
  }
LAB_000a9a70:
  if (*(short *)(*(int *)(in_EAX[10] + 8) + 0x24) == 6) {
    *(undefined4 *)(*(int *)(in_EAX[10] + 8) + 0xe4) = 0x60c5d70;
  }
  if (cStack_4 == '\0') {
    return 0;
  }
  FUN_00140a60(*(undefined4 *)(*(int *)(in_EAX[0x2a] + 8) + 0xbe8),in_EAX[0x2a],0xf2ce8278,0);
  return 0;
}
