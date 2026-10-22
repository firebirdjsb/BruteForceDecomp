/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D2C361ABB426F107282B6D3C2297623634FB536B7EED3FD27D0BB734F8702EC
 * Entry: 0x001e5fc0, Ghidra index: 6802, label: FUN_001e5fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e5fc0(int param_1)

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
    *puVar2 = 5;
    puVar2[1] = 0x10;
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
    *puVar2 = 7;
    puVar2[1] = 0xd;
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
    *puVar2 = 8;
    puVar2[1] = 0xf;
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
    puVar2[1] = 0xe;
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
    *puVar2 = 2;
    puVar2[1] = 0x13;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 0x1c) <= *(uint *)(iVar1 + 0x20)) {
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
    puVar2[1] = 0x12;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(iVar1 + 0x1c) <= *(uint *)(iVar1 + 0x20)) {
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
    *puVar2 = 0x10;
    puVar2[1] = 0x1b;
    puVar2[2] = 1;
    puVar2[3] = 0x3f000000;
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
    *puVar2 = 0xf;
    puVar2[1] = 0x1c;
    puVar2[2] = 1;
    puVar2[3] = 0x3f000000;
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
    puVar2[1] = 0x25;
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
    puVar2[1] = 0x26;
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
    puVar2[1] = 0x27;
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
    puVar2[1] = 0x28;
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
    *puVar2 = 0xe;
    puVar2[1] = 0x3f;
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
    *puVar2 = 0xd;
    puVar2[1] = 9;
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
    puVar2[1] = 0x14;
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
    puVar2[1] = 0x17;
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
    puVar2[1] = 0x1a;
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
    puVar2[1] = 0x15;
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
    puVar2[1] = 0x16;
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
    *puVar2 = 0x14;
    puVar2[1] = 0x35;
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
    *puVar2 = 0x14;
    puVar2[1] = 0x19;
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
    *puVar2 = 0x13;
    puVar2[1] = 0x18;
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
    *puVar2 = 0x14;
    puVar2[1] = 0x19;
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
    *puVar2 = 7;
    puVar2[1] = 0x13;
    puVar2[2] = 0;
    puVar2[3] = 0xbf800000;
  }
  puVar3 = (uint *)(iVar1 + 0x28);
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x2c)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x2c) * 4) = puVar2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 8;
    puVar2[1] = 0x13;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x2c)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x2c) * 4) = puVar2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 5;
    puVar2[1] = 0x12;
    puVar2[2] = 0;
    puVar2[3] = 0xbf800000;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x2c)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x2c) * 4) = puVar2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 6;
    puVar2[1] = 0x12;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (*puVar3 <= *(uint *)(iVar1 + 0x2c)) {
      FUN_0005dc80();
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x2c) * 4) = puVar2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2d4) = iVar1;
    return;
  }
  *(int *)(param_1 + 0x2d4) = iVar1;
  return;
}
