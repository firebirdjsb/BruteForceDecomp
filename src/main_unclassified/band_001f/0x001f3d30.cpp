/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65E09F334EDEEF2AF17965C3AA971460CB0C49F709BFA020F8BE3FCAE31590E2
 * Entry: 0x001f3d30, Ghidra index: 7030, label: FUN_001f3d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3d30(float *param_1,undefined1 *param_2,float *param_3,float *param_4,int *param_5,
                 float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int local_c;
  int local_8;
  uint32_t guest_texture_address; /* raw Xbox pointer word in [param_1+0x18] */
  const uint8_t *guest_texture;
  
  memcpy(&guest_texture_address, &param_1[6], sizeof guest_texture_address);
  guest_texture = (const uint8_t *)(uintptr_t)guest_texture_address;
  fVar2 = *(const float *)(guest_texture + 8) * 0.5f;
  *param_3 = param_6 - (*param_1 - fVar2);
  *param_4 = param_7 - (param_1[1] - fVar2);
  *param_5 = -1;
  *param_3 = *(const float *)guest_texture * *param_3;
  *param_4 = *(const float *)guest_texture * *param_4;
  local_c = (int)*param_3;
  local_8 = (int)*param_4;
  if (local_c < 0) {
    local_c = 0;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (0xf < local_c) {
    local_c = 0xf;
  }
  if (0xf < local_8) {
    local_8 = 0xf;
  }
  *param_3 = *param_3 - (float)local_c;
  *param_4 = *param_4 - (float)local_8;
  if (*param_3 < 0.0) {
    *param_3 = 0.0;
  }
  if (*param_4 < 0.0) {
    *param_4 = 0.0;
  }
  if (1.0 < *param_3) {
    *param_3 = 1.0;
  }
  if (1.0 < *param_4) {
    *param_4 = 1.0;
  }
  uVar6 = FUN_001f3ca0();
  *param_2 = uVar6;
  uVar6 = FUN_001f3ca0();
  param_2[1] = uVar6;
  uVar6 = FUN_001f3ca0();
  param_2[2] = uVar6;
  uVar6 = FUN_001f3ca0();
  param_2[3] = uVar6;
  fVar3 = *param_1 - fVar2;
  iVar7 = *(const int *)(guest_texture + 0x20);
  fVar2 = param_1[1] - fVar2;
  fVar8 = extraout_ST0 * (float10)*(float *)(iVar7 + 8);
  fVar1 = (float)(fVar8 + (float10)*(float *)(iVar7 + 8));
  fVar4 = (float)local_8 * *(float *)(iVar7 + 8);
  fVar5 = fVar4 + *(float *)(iVar7 + 8);
  fVar8 = fVar8 + (float10)fVar3;
  if ((local_8 + local_c & 1U) == 0) {
    iVar7 = 2;
    fVar9 = (float10)fVar4 + (float10)fVar2;
    fVar10 = (float10)fVar1 + (float10)fVar3;
  }
  else {
    iVar7 = 0;
    fVar9 = (float10)fVar5 + (float10)fVar2;
    fVar10 = (float10)fVar1 + (float10)fVar3;
    fVar5 = fVar4;
  }
  fVar8 = ((float10)param_7 - fVar9) * (fVar10 - fVar8) -
          ((float10)param_6 - fVar8) * (((float10)fVar5 + (float10)fVar2) - fVar9);
  if (fVar8 < (float10)0.0 != (fVar8 == (float10)0.0)) {
    *param_5 = iVar7;
    return;
  }
  *param_5 = iVar7 + 1;
  return;
}
