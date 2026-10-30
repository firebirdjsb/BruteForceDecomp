/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6B89883256BCAAFB766FD8A30C0A8C2CE2EB23111D3FA18C3BBFD632890A07F
 * Entry: 0x000cb730, Ghidra index: 2519, label: FUN_000cb730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000bbe50(void);

extern uint32_t DAT_00469ab0;
void FUN_000cb730(int *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  
  if (param_1[10] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[10] + -0x2c;
  }
  iVar7 = FUN_000b9120(DAT_00469ab0);
  if (iVar7 != 0) {
    if (iVar6 + 0x2c != 0) {
      FUN_000b25a0(iVar6 + 0x2c,iVar7);
    }
    *(byte *)(iVar7 + 0x13) = *(byte *)(iVar7 + 0x13) & 0xfb;
  }
  param_1[0xe] = iVar7;
  iVar6 = *(int *)(iVar7 + 0x2c);
  if ((iVar6 != 0) &&
     (((piVar5 = *(int **)(iVar6 + 0x24), piVar5 == (int *)0x0 || (*piVar5 != 0xc626fd5)) ||
      (piVar5[1] != 0xe)))) {
    uVar8 = FUN_000cd9c0();
    *(undefined4 *)(iVar6 + 0x24) = uVar8;
  }
  iVar6 = *(int *)(param_1[0xe] + 0x2c);
  iVar7 = FUN_000bbe50(param_1);
  uVar2 = *(undefined1 *)(iVar7 + 2);
  iVar7 = FUN_000bbe50(param_1);
  uVar3 = *(undefined1 *)(iVar7 + 1);
  puVar9 = (undefined1 *)FUN_000bbe50(param_1);
  *(undefined1 *)(iVar6 + 0x38) = *puVar9;
  *(undefined1 *)(iVar6 + 0x3a) = uVar3;
  *(undefined1 *)(iVar6 + 0x39) = uVar2;
  pbVar1 = (byte *)(*(int *)(param_1[0xe] + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  *(byte *)(param_1[0xe] + 0x48) = *(byte *)(param_1[0xe] + 0x48) | 4;
  *(byte *)(param_1[0xe] + 0x48) = *(byte *)(param_1[0xe] + 0x48) & 0xfc;
  if (param_1[10] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[10] + -0x2c;
  }
  iVar7 = FUN_000b9120(DAT_00469ab0);
  if (iVar7 != 0) {
    if (iVar6 + 0x2c != 0) {
      FUN_000b25a0(iVar6 + 0x2c,iVar7);
    }
    *(byte *)(iVar7 + 0x13) = *(byte *)(iVar7 + 0x13) & 0xfb;
  }
  param_1[0xf] = iVar7;
  iVar6 = *(int *)(iVar7 + 0x2c);
  if ((iVar6 != 0) &&
     (((piVar5 = *(int **)(iVar6 + 0x24), piVar5 == (int *)0x0 || (*piVar5 != 0xc626fd5)) ||
      (piVar5[1] != 0xe)))) {
    uVar8 = FUN_000cd9c0();
    *(undefined4 *)(iVar6 + 0x24) = uVar8;
  }
  iVar6 = *(int *)(param_1[0xf] + 0x2c);
  iVar7 = FUN_000bbe50(param_1);
  uVar2 = *(undefined1 *)(iVar7 + 2);
  iVar7 = FUN_000bbe50(param_1);
  uVar3 = *(undefined1 *)(iVar7 + 1);
  puVar9 = (undefined1 *)FUN_000bbe50(param_1);
  uVar4 = *puVar9;
  *(undefined1 *)(iVar6 + 0x39) = uVar2;
  *(undefined1 *)(iVar6 + 0x38) = uVar4;
  *(undefined1 *)(iVar6 + 0x3a) = uVar3;
  pbVar1 = (byte *)(*(int *)(param_1[0xf] + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  *(byte *)(param_1[0xf] + 0x48) = *(byte *)(param_1[0xf] + 0x48) | 4;
  *(byte *)(param_1[0xf] + 0x48) = *(byte *)(param_1[0xf] + 0x48) & 0xfc;
  iVar6 = *(int *)(param_1[10] + 8);
  if (*(short *)(iVar6 + 0x20) < 600) {
    if (*(short *)(iVar6 + 0x22) < 400) {
      (**(code **)(*param_1 + 0x38))(2);
      return;
    }
  }
  else if (399 < *(short *)(iVar6 + 0x22)) {
    (**(code **)(*param_1 + 0x38))(0);
    return;
  }
  (**(code **)(*param_1 + 0x38))(1);
  return;
}
