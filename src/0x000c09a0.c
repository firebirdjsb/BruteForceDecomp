/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67A7EF7C9C7BDCAEFBC2F495650BA6CC14F6C0F7677AC259FF043ED194B2DBEB
 * Entry: 0x000c09a0, Ghidra index: 2343, label: FUN_000c09a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c09a0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x98) / *(float *)(param_1 + 0x9c);
  fVar3 = fVar3 * fVar3;
  if (fVar3 != 0.0) {
    iVar2 = *(int *)(param_1 + 0x74);
    uVar4 = (undefined1)(int)((1.0 - fVar3) * 175.0 + 80.0);
    *(undefined1 *)(iVar2 + 0x2c) = uVar4;
    *(undefined1 *)(iVar2 + 0x2d) = uVar4;
    *(undefined1 *)(iVar2 + 0x2e) = uVar4;
    *(undefined4 *)(iVar2 + 0x30) = 0x447a0000;
    *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x38) = 0x3a83126f;
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfe;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    fVar5 = 1.0;
    if (fVar3 + fVar3 <= 1.0) {
      fVar5 = fVar3 + fVar3;
    }
    fVar5 = fVar5 * 255.0;
    *(char *)(*(int *)(param_1 + 0x80) + 0x10) = (char)(int)fVar5;
    *(char *)(*(int *)(param_1 + 0x88) + 0x10) = (char)(int)fVar5;
    *(char *)(*(int *)(param_1 + 0x8c) + 0x10) = (char)(int)fVar5;
    *(char *)(*(int *)(param_1 + 0x84) + 0x10) = (char)(int)fVar5;
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  return;
}
