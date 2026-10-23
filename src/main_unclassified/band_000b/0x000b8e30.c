/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA0CA1BED8DE340D0C94D383FA48D5D85480668AE2E465B5B2F72FDAADC0936F
 * Entry: 0x000b8e30, Ghidra index: 2235, label: FUN_000b8e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b8e30(int *param_1,float param_2,byte param_3)

{
  int iVar1;
  float fVar2;
  
  FUN_000ba270(param_1);
  iVar1 = *(int *)(*(int *)(*param_1 + 0xbf0) + 0x38);
  if (*(int *)(param_1[0x4d7] + 0x10) != iVar1) {
    FUN_0008f6a0(iVar1);
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ (*(byte *)(param_1 + 1) ^ param_3) & 1;
  iVar1 = 0;
  do {
    fVar2 = *(float *)(iVar1 + 0x1384 + (int)param_1);
    if (*(float *)(iVar1 + 0x1384 + (int)param_1) <= param_2) {
      if (fVar2 != 0.0) {
        *(undefined4 *)(iVar1 + 0x1384 + (int)param_1) = 0;
      }
    }
    else {
      *(float *)(iVar1 + 0x1384 + (int)param_1) = fVar2 - param_2;
    }
    fVar2 = *(float *)(iVar1 + 0x138c + (int)param_1);
    if (*(float *)(iVar1 + 0x138c + (int)param_1) <= param_2) {
      if (fVar2 != 0.0) {
        *(undefined4 *)(iVar1 + 0x138c + (int)param_1) = 0;
      }
    }
    else {
      *(float *)(iVar1 + 0x138c + (int)param_1) = fVar2 - param_2;
    }
    fVar2 = *(float *)(iVar1 + 0x1394 + (int)param_1);
    if (*(float *)(iVar1 + 0x1394 + (int)param_1) <= param_2) {
      if (fVar2 != 0.0) {
        *(undefined4 *)(iVar1 + 0x1394 + (int)param_1) = 0;
      }
    }
    else {
      *(float *)(iVar1 + 0x1394 + (int)param_1) = fVar2 - param_2;
    }
    fVar2 = *(float *)(iVar1 + 0x139c + (int)param_1);
    if (*(float *)(iVar1 + 0x139c + (int)param_1) <= param_2) {
      if (fVar2 != 0.0) {
        *(undefined4 *)(iVar1 + 0x139c + (int)param_1) = 0;
      }
    }
    else {
      *(float *)(iVar1 + 0x139c + (int)param_1) = fVar2 - param_2;
    }
    fVar2 = *(float *)(iVar1 + 0x13a4 + (int)param_1);
    if (*(float *)(iVar1 + 0x13a4 + (int)param_1) <= param_2) {
      if (fVar2 != 0.0) {
        *(undefined4 *)(iVar1 + 0x13a4 + (int)param_1) = 0;
      }
    }
    else {
      *(float *)(iVar1 + 0x13a4 + (int)param_1) = fVar2 - param_2;
    }
    iVar1 = iVar1 + 0x28;
  } while (iVar1 < 0x78);
  FUN_000b9040(param_2);
  param_1[0x4db] = 0;
  fVar2 = *(float *)(*(int *)(*param_1 + 0xbf0) + 0x78);
  fVar2 = 1.0 - (fVar2 + fVar2);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  param_1[0x4fe] = (int)fVar2;
  return;
}
