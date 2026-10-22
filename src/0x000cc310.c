/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9B0BA985A7B7393C8ACB21AB3A85B04860D901965CD319507300EE948017E81
 * Entry: 0x000cc310, Ghidra index: 2525, label: FUN_000cc310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cc310(int param_1,int param_2,float param_3,float param_4,undefined4 param_5,
                 float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_2 + 0x44) != 2) {
    if (*(int *)(param_2 + 0x44) == 1) {
      if (*(int *)(param_1 + 0x6c) == param_2) {
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      if (*(int *)(param_1 + 0x6c) != 0) {
        param_3 = (ABS(*(float *)(param_1 + 0x94) - 0.5) + 0.5) * param_3;
      }
      fVar2 = param_6 * 5.0 + (float)*(byte *)(param_2 + 0x10) * 0.003921569;
      fVar3 = param_3;
      if (fVar2 <= param_3) {
        fVar3 = fVar2;
      }
      *(char *)(param_2 + 0x10) = (char)(int)(fVar3 * 255.0);
      fVar2 = param_6 * 5.0 + (float)*(byte *)(param_2 + 0x10) * 0.003921569;
      if (fVar2 <= param_3) {
        param_3 = fVar2;
      }
      *(char *)(*(int *)(param_2 + 0x38) + 0x10) = (char)(int)(param_3 * 255.0);
      *(undefined4 *)(param_2 + 0x58) = 0;
      fVar2 = param_6 * 5.0 + (float)*(byte *)(param_2 + 0x10) * 0.003921569;
      fVar3 = 1.0;
      if (fVar2 <= 1.0) {
        fVar3 = fVar2;
      }
      *(float *)(param_2 + 0x50) = fVar3;
      return;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xe0) + 0xc) + 0x15c);
    if ((iVar1 != 0) && (iVar1 != 4)) {
      fVar2 = param_3;
      if (param_2 == *(int *)(param_1 + 0x6c)) {
        fVar2 = 1.0;
      }
      FUN_000a9280(param_2,fVar2);
      *(char *)(*(int *)(param_2 + 0x38) + 0x10) = (char)(int)(param_3 * 255.0);
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x10) = 0xff;
  fVar2 = 0.5;
  if (*(float *)(param_1 + 0x74) <= 0.5) {
    fVar2 = *(float *)(param_1 + 0x74);
  }
  fVar2 = (fVar2 + fVar2) * (fVar2 + fVar2);
  if (param_3 <= fVar2) {
    param_3 = fVar2;
  }
  *(char *)(*(int *)(param_2 + 0x38) + 0x10) = (char)(int)(param_3 * 255.0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x28) + 8);
  if (*(short *)(iVar1 + 0x20) < 600) {
    if (*(short *)(iVar1 + 0x22) < 400) {
      iVar1 = 2;
      goto LAB_000cc3d6;
    }
  }
  else if (399 < *(short *)(iVar1 + 0x22)) {
    iVar1 = 0;
    goto LAB_000cc3d6;
  }
  iVar1 = 1;
LAB_000cc3d6:
  if ((iVar1 == 1) || (iVar1 != 2)) {
    *(float *)(param_2 + 0x58) = (1.0 - fVar2) * *(float *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    *(float *)(param_2 + 0x58) = (1.0 - fVar2) * (param_4 * 27.0 + *(float *)(param_1 + 0x78) + 4.0)
    ;
    *(float *)(param_2 + 0x50) = fVar2;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  *(int *)(param_1 + 0x6c) = param_2;
  FUN_000cc640(param_1,0);
  return;
}
