/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 379A1C56589B9F05C07C0A469C8B6505E36BDC55C6840A6AA7E072B9F17CD8AE
 * Entry: 0x000c0d90, Ghidra index: 2346, label: FUN_000c0d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c9008;
extern uint32_t DAT_003c900c;
extern uint32_t DAT_003c9024;
extern uint32_t DAT_003c9050;
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469ab0;
extern uint32_t DAT_00469b58;
void FUN_000c0d90(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = *(int *)(param_1 + 0x94);
  if ((iVar5 < 0) || (0x18 < iVar5)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(DAT_00469948 + 0x250 + iVar5 * 4);
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar4 = (**(code **)(*piVar3 + 0x54))(*(undefined4 *)(param_1 + 0x94));
  iVar8 = *(int *)(DAT_00469ab0 + 0x13d8);
  iVar7 = DAT_003c9050;
  if (DAT_003c9050 != 0xb) {
    do {
      if (*(int *)(DAT_00469ab0 + 0x1380 + iVar7 * 8) == 0) {
        iVar8 = 0;
      }
      bVar9 = *(int *)(&DAT_003c9024 + iVar7 * 4) != iVar7;
      iVar7 = *(int *)(&DAT_003c9024 + iVar7 * 4);
    } while (bVar9);
  }
  if (iVar8 == 0) {
    return;
  }
  if (iVar4 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    return;
  }
  if (*(float *)(iVar5 + 0x94) != 0.0) {
    iVar5 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(iVar5 + 0x58) = 0;
    *(undefined1 *)(iVar5 + 0x5c) = 0;
    return;
  }
  iVar7 = 0;
  iVar8 = DAT_003c9008;
  if (DAT_003c9008 == 0x40) {
    return;
  }
  while (*(float *)(iVar5 + 0x30 + iVar8 * 4) == 0.0) {
    iVar8 = (&DAT_003c900c)[iVar7];
    iVar7 = iVar7 + 1;
    if (iVar8 == 0x40) {
      return;
    }
  }
  iVar5 = FUN_000bffb0();
  iVar5 = *(int *)(param_1 + 0xa4 + iVar5 * 4);
  if (iVar5 == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x34);
  if (((2 < *(int *)(iVar5 + 100)) && (*(int *)(iVar5 + 100) < 6)) &&
     (cVar2 = FUN_000c86d0(), cVar2 != '\0')) {
    FUN_000c8620();
    FUN_000c1240();
  }
  iVar7 = *(int *)(iVar8 + 0x4c);
  cVar2 = *(char *)(iVar7 + 0x59) != '\0';
  if (*(char *)(iVar7 + 0x5a) != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (*(char *)(iVar7 + 0x5b) != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (*(char *)(iVar7 + 0x5c) != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 != '\0') {
    if (*(int *)(iVar5 + 100) == 3) {
      iVar8 = *(int *)(iVar8 + 0x44);
      *(byte *)(iVar8 + 0x13) = *(byte *)(iVar8 + 0x13) & 0xfe;
      pbVar1 = (byte *)(*(int *)(iVar8 + 0x98) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_000be240();
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    else {
      uVar6 = 0;
      if (*(int *)(iVar8 + 0x60) != 0) {
        uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x60) + 0x10);
      }
      cVar2 = FUN_000c1280(param_1,*(int *)(iVar5 + 100),uVar6,0,0);
      if (cVar2 == '\0') goto LAB_000c0f58;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar5 + 100);
    FUN_000bb220(0x11d6f86a);
  }
LAB_000c0f58:
  if (((*(byte *)(param_1 + 0xbc) & 1) != 0) &&
     (*(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfb | 8,
     *(char *)(param_1 + 0x7c) == '\0')) {
    FUN_000bb220(0x15262e1b);
  }
  return;
}
