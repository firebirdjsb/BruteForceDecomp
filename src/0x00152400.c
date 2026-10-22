/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44DBC48CA4E45228C9E0D2EF70A9BCFADE821F4A2449E859AF56BE917F157A6C
 * Entry: 0x00152400, Ghidra index: 4420, label: FUN_00152400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00152400(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x7c) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x80) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x84) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x8c) = 0xc7c35000;
  *(undefined4 *)(param_1 + 0x90) = 0xc7c35000;
  *(undefined4 *)(param_1 + 0x94) = 0xc7c35000;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = 0;
    do {
      fVar1 = *(float *)(iVar2 + *(int *)(param_1 + 0x3c));
      fVar4 = *(float *)(param_1 + 0x7c);
      if (fVar1 <= *(float *)(param_1 + 0x7c)) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x7c) = fVar4;
      fVar1 = *(float *)(iVar2 + *(int *)(param_1 + 0x3c));
      fVar4 = *(float *)(param_1 + 0x8c);
      if (*(float *)(param_1 + 0x8c) <= fVar1) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x8c) = fVar4;
      fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 4 + iVar2);
      fVar4 = *(float *)(param_1 + 0x80);
      if (fVar1 <= *(float *)(param_1 + 0x80)) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x80) = fVar4;
      fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 4 + iVar2);
      fVar4 = *(float *)(param_1 + 0x90);
      if (*(float *)(param_1 + 0x90) <= fVar1) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x90) = fVar4;
      fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 8 + iVar2);
      fVar4 = *(float *)(param_1 + 0x84);
      if (fVar1 <= *(float *)(param_1 + 0x84)) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x84) = fVar4;
      fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 8 + iVar2);
      fVar4 = *(float *)(param_1 + 0x94);
      if (*(float *)(param_1 + 0x94) <= fVar1) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x94) = fVar4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x94);
  return;
}
