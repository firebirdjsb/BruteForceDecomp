/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECB5D129E8C5EFB3D488E233677D4DB54F3E01E85FDF9D18B880AF3B7119B10B
 * Entry: 0x00234dc0, Ghidra index: 7813, label: FUN_00234dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234dc0(uint *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *param_1;
  if (uVar1 < 0xe94eb66b) {
    if (uVar1 == 0xe94eb66a) {
LAB_00234e5a:
      fVar2 = ((float *)param_1[0xf])[1];
      fVar3 = *(float *)param_1[0xf];
      fVar4 = *param_2;
      if (*param_2 <= fVar3) {
        fVar4 = fVar3;
      }
      if (fVar2 <= fVar4) {
        fVar4 = fVar2;
      }
      param_1[0x12] = (uint)fVar4;
      return;
    }
    if (uVar1 == 0x1b0dc6c7) {
      param_1[0x15] = (uint)*param_2;
      param_1[0x16] = (uint)param_2[1];
      param_1[0x17] = (uint)param_2[2];
      param_1[0x18] = (uint)param_2[3];
      return;
    }
    if (uVar1 == 0xe3be168e) {
      param_1[0x12] = (uint)*param_2;
      param_1[0x13] = (uint)param_2[1];
      param_1[0x14] = (uint)param_2[2];
      return;
    }
  }
  else if (uVar1 == 0xf35d5b3c) {
    param_1[0x12] = (uint)*param_2;
    param_1[0x13] = (uint)param_2[1];
    param_1[0x14] = (uint)param_2[2];
    param_1[0x15] = (uint)param_2[3];
    param_1[0x16] = (uint)param_2[4];
    param_1[0x17] = (uint)param_2[5];
    param_1[0x18] = (uint)param_2[6];
  }
  else if (uVar1 == 0xfd8f670c) goto LAB_00234e5a;
  return;
}
