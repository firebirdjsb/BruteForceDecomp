/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 352B716021FABA1355E03457E3C3E0812D1AA421C3112344D4BA774D2060D9D9
 * Entry: 0x00206880, Ghidra index: 7302, label: FUN_00206880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
float10 FUN_00206880(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float local_1c;
  undefined1 local_c [12];
  
  uVar4 = (uint)*(byte *)(DAT_00469940 + 4);
  iVar5 = 0;
  iVar3 = 0;
  local_1c = 0.0;
  if (uVar4 != 0) {
    do {
      if (*(char *)(DAT_00469940 + 200 + iVar3) != '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      local_1c = (float)iVar5;
    } while (iVar3 < (int)uVar4);
  }
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0xa8)) {
    fVar1 = *(float *)(param_1 + 0xa8) * 0.01;
  }
  fVar2 = 0.0;
  if (0.0 < (float)uVar4) {
    fVar2 = (float)(int)local_1c / (float)uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  local_1c = 1.0;
  if ((((iVar3 == 3) || (iVar3 == 4)) || (fVar2 = 1.0 - fVar2, iVar3 == 2)) || (iVar3 == 5)) {
    local_1c = fVar2 * (1.0 - fVar1) + fVar1;
  }
  if (((*(byte *)(param_1 + 0x8d) & 2) != 0) && ((*(byte *)(param_1 + 0x8d) & 1) != 0)) {
    if (*(float *)(param_1 + 0x98) < 0.0 == (*(float *)(param_1 + 0x98) == 0.0)) {
      fVar1 = *(float *)(param_1 + 0x98);
    }
    else {
      iVar3 = FUN_0017beb0(param_1 + 0x40);
      fVar1 = *(float *)(iVar3 + 0xc);
    }
    if (0.0 < fVar1) {
      FUN_00205fb0(local_c,0);
      fVar6 = (float10)FUN_0017e5e0(DAT_00469940,local_c);
      if ((float10)fVar1 < fVar6) {
        local_1c = 0.0;
      }
    }
  }
  if (local_1c <= 0.0) {
    local_1c = 0.0;
  }
  if (1.0 <= local_1c) {
    local_1c = 1.0;
  }
  return (float10)local_1c;
}
