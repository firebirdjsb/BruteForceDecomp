/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21F27AEFF3C95F0B2E93BE63DF3FC274D39E28AE9DB3C23EA142639FC1C8A71C
 * Entry: 0x001e6d80, Ghidra index: 6804, label: FUN_001e6d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e6d80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  iVar1 = FUN_001e7750(param_1);
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xd;
    puVar2[1] = 0x36;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 4) <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 2;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  puVar3 = (uint *)(iVar1 + 0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x20)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x20) * 4) = puVar2;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 1;
    puVar2[1] = 2;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x20)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x20) * 4) = puVar2;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 4;
    puVar2[1] = 4;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x20)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x20) * 4) = puVar2;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 3;
    puVar2[1] = 3;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x20)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x20) * 4) = puVar2;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x10;
    puVar2[1] = 0x1e;
    puVar2[2] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x14) * 4) = puVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xf;
    puVar2[1] = 0x1f;
    puVar2[2] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x14) * 4) = puVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xe;
    puVar2[1] = 0x30;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 4) <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  *(int *)(param_1 + 0x2e4) = iVar1;
  iVar1 = FUN_001e7750(param_1);
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xd;
    puVar2[1] = 0x2c;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  puVar3 = (uint *)(iVar1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xe;
    puVar2[1] = 0x2d;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 9;
    puVar2[1] = 0x2e;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xc;
    puVar2[1] = 0x2f;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 10;
    puVar2[1] = 0x32;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 5;
    puVar2[1] = 0x34;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 6;
    puVar2[1] = 0x33;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  *(int *)(param_1 + 0x2dc) = iVar1;
  iVar1 = FUN_001e7750(param_1);
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xd;
    puVar2[1] = 0x3b;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  puVar3 = (uint *)(iVar1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xe;
    puVar2[1] = 0x3c;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 9;
    puVar2[1] = 0x37;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 10;
    puVar2[1] = 0x38;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xb;
    puVar2[1] = 0x39;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xc;
    puVar2[1] = 0x3a;
    puVar2[2] = 1;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 8)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = puVar2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(param_1 + 0x2e0) = iVar1;
    return;
  }
  *(int *)(param_1 + 0x2e0) = iVar1;
  return;
}
