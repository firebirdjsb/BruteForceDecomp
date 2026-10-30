/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DD2D4655D97D890B133145CFF56319584063B2F28B399F7C7BB6D3312D9E57F
 * Entry: 0x001e57d0, Ghidra index: 6801, label: FUN_001e57d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
undefined4 FUN_001e57d0(undefined4 param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  puVar1 = (uint *)(in_EAX + 4);
  FUN_001e7ef0();
  FUN_001e7ef0();
  puVar2 = (uint *)(in_EAX + 0x1c);
  FUN_001e7ef0();
  FUN_001e7ef0();
  *(undefined4 *)(in_EAX + 0x34) = *(undefined4 *)param_2;
  *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_EAX + 0x3c) = *(undefined4 *)(param_2 + 8);
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 9;
    puVar4[1] = 0x14;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 10;
    puVar4[1] = 0x17;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0xb;
    puVar4[1] = 0x1a;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x13;
    puVar4[1] = 0x11;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x14;
    puVar4[1] = 0x19;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x14;
    puVar4[1] = 0x3e;
    puVar4[2] = 1;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  if ((*param_2 & 8) == 0) {
    iVar5 = (**(code **)(*DAT_00469b54 + 0x48))();
    piVar6 = (int *)(iVar5 + 0x1cc);
  }
  else {
    iVar5 = (**(code **)(*DAT_00469b54 + 0x48))();
    piVar6 = (int *)(iVar5 + 0x1ec);
  }
  iVar5 = piVar6[2];
  iVar9 = *piVar6;
  iStack_c = piVar6[6];
  iStack_8 = piVar6[4];
  if ((*param_2 & 2) != 0) {
    iVar5 = piVar6[6];
    iVar9 = piVar6[4];
    iStack_c = piVar6[2];
    iStack_8 = *piVar6;
  }
  if (iVar5 != 0x40) {
    puVar4 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 2;
      puVar4[1] = iVar5;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      if (*puVar2 <= *(uint *)(in_EAX + 0x20)) {
        FUN_0005dc80();
      }
      *(undefined4 **)(*(int *)(in_EAX + 0x24) + *(int *)(in_EAX + 0x20) * 4) = puVar4;
      *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + 1;
    }
  }
  if (iVar9 != 0x40) {
    puVar4 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = iVar9;
      *puVar4 = 1;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      if (*puVar2 <= *(uint *)(in_EAX + 0x20)) {
        FUN_0005dc80();
      }
      *(undefined4 **)(*(int *)(in_EAX + 0x24) + *(int *)(in_EAX + 0x20) * 4) = puVar4;
      *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + 1;
    }
  }
  if (iStack_c != 0x40) {
    puVar4 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = iStack_c;
      *puVar4 = 4;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      if (*puVar2 <= *(uint *)(in_EAX + 0x20)) {
        FUN_0005dc80();
      }
      *(undefined4 **)(*(int *)(in_EAX + 0x24) + *(int *)(in_EAX + 0x20) * 4) = puVar4;
      *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + 1;
    }
  }
  if (iStack_8 != 0x40) {
    puVar4 = (undefined4 *)FUN_002ea01d(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = iStack_8;
      *puVar4 = 3;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      if (*puVar2 <= *(uint *)(in_EAX + 0x20)) {
        FUN_0005dc80();
      }
      *(undefined4 **)(*(int *)(in_EAX + 0x24) + *(int *)(in_EAX + 0x20) * 4) = puVar4;
      *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + 1;
    }
  }
  iVar5 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar6 = (int *)FUN_002ea01d(0xc);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    bVar3 = *param_2;
    piVar6[1] = *(int *)(iVar5 + 0x244);
    piVar6[2] = 0;
    *piVar6 = 0x10 - (uint)((bVar3 & 4) != 0);
  }
  if (piVar6 != (int *)0x0) {
    if (*(uint *)(in_EAX + 0x10) <= *(uint *)(in_EAX + 0x14)) {
      FUN_0005dc80();
    }
    *(int **)(*(int *)(in_EAX + 0x18) + *(int *)(in_EAX + 0x14) * 4) = piVar6;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  }
  piVar6 = (int *)FUN_002ea01d(0x10);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    bVar3 = *param_2;
    iVar9 = *(int *)(iVar5 + 0x240);
    piVar6[1] = *(int *)(iVar5 + 0x23c);
    piVar6[2] = iVar9;
    piVar6[3] = 0x3f000000;
    *piVar6 = ((bVar3 & 4) != 0) + 0xf;
  }
  if (piVar6 != (int *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(int **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = piVar6;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x210);
    uVar7 = *(undefined4 *)(iVar5 + 0x20c);
    *puVar4 = 9;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x218);
    uVar7 = *(undefined4 *)(iVar5 + 0x214);
    *puVar4 = 10;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x220);
    uVar7 = *(undefined4 *)(iVar5 + 0x21c);
    *puVar4 = 0xb;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x228);
    uVar7 = *(undefined4 *)(iVar5 + 0x224);
    *puVar4 = 0xc;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x230);
    uVar7 = *(undefined4 *)(iVar5 + 0x22c);
    *puVar4 = 0xe;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x238);
    uVar7 = *(undefined4 *)(iVar5 + 0x234);
    *puVar4 = 0xd;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = 0x3e800000;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  uVar7 = *(undefined4 *)(iVar5 + 0x250);
  uVar8 = *(undefined4 *)(iVar5 + 0x24c);
  iStack_8 = *(undefined4 *)(iVar5 + 0x254);
  uStack_4 = *(undefined4 *)(iVar5 + 600);
  if ((*param_2 & 2) != 0) {
    uVar8 = *(undefined4 *)(iVar5 + 0x254);
    uVar7 = *(undefined4 *)(iVar5 + 600);
    iStack_8 = *(undefined4 *)(iVar5 + 0x24c);
    uStack_4 = *(undefined4 *)(iVar5 + 0x250);
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = uVar7;
    *puVar4 = 0x11;
    puVar4[1] = uVar8;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x12;
    puVar4[1] = iStack_8;
    puVar4[2] = uStack_4;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 5;
    puVar4[1] = 0x10;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 7;
    puVar4[1] = 0xd;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 8;
    puVar4[1] = 0xf;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 6;
    puVar4[1] = 0xe;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*puVar1 <= *(uint *)(in_EAX + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 8) * 4) = puVar4;
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
  }
  return 1;
}
