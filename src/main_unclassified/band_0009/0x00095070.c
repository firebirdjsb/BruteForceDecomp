/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDA388C575B57AF53F0B5F0D5E0DC34705773284991EE5D4609A96642AEBBFDC
 * Entry: 0x00095070, Ghidra index: 1819, label: FUN_00095070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e038;
extern uint32_t DAT_00469b0c;
extern uint32_t *DAT_00469b54;
/* XBE 0x95088/0x950f2 load [0x003f7dfc] as f32. */
extern float _DAT_003f7dfc;
/* XBE 0x950be/0x9511c load [0x003f7e00] as f32. */
extern float _DAT_003f7e00;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095070(int param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int *in_ECX;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float local_60 [5];
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  fVar3 = (float)in_ECX[2];
  if (in_ECX[2] < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_60[0] = _DAT_003f7dfc * fVar3 * *(float *)(DAT_00469b0c + 4);
  fVar4 = (float)in_ECX[3];
  if (in_ECX[3] < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  local_30 = *in_ECX;
  local_60[3] = 0.0;
  local_60[1] = -(fVar4 * *(float *)(DAT_00469b0c + 8) * _DAT_003f7e00);
  local_60[2] = 16777215.0 / (float)in_ECX[5];
  fVar5 = (float)local_30;
  if (local_30 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  local_2c = (float)in_ECX[1];
  local_60[4] = (fVar5 + fVar3 * *(float *)(DAT_00469b0c + 4) + *(float *)(DAT_00469b0c + 0xc)) *
                _DAT_003f7dfc;
  fVar3 = (float)(int)local_2c;
  if ((int)local_2c < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_24 = (float)((int)local_2c + in_ECX[3]);
  local_4c = (fVar3 + fVar4 * *(float *)(DAT_00469b0c + 8) + *(float *)(DAT_00469b0c + 0x10)) *
             _DAT_003f7e00;
  local_48 = 0;
  local_44 = 0;
  local_28 = local_30 + in_ECX[2];
  local_20 = local_2c;
  cVar1 = (**(code **)(*DAT_00469b54 + 0x30))();
  if (cVar1 == '\0') {
    D3D8LTCG__D3DDevice_SetScissors(1,0,&local_30);
  }
  else {
    pfVar2 = (float *)(**(code **)(*DAT_00469b54 + 0x38))();
    local_40 = 1.0 - *pfVar2;
    local_38 = pfVar2[2];
    local_34 = pfVar2[3];
    local_3c = 1.0 - pfVar2[1];
    local_10 = 1.0 / (local_34 - local_38);
    local_14 = 1.0 / (local_3c - local_40);
    (**(code **)(*DAT_00469b54 + 0x1c))(&local_8,&local_c);
    fVar3 = (float)FUN_002ebf10();
    fVar4 = (float)FUN_002ebf10();
    fVar5 = (float)FUN_002ebf10();
    local_24 = (float)FUN_002ebf10();
    local_1c = (float)(int)((float)local_8 * local_10 * local_38);
    local_18 = (float)(int)((float)local_c * local_14 * local_40);
    local_10 = (float)((int)((float)local_8 * local_10 * local_34) + -1);
    local_14 = (float)((int)((float)local_c * local_14 * local_3c) + -1);
    if (((((int)local_10 < (int)fVar3) || ((int)local_14 < (int)fVar4)) ||
        ((int)fVar5 < (int)local_1c)) || ((int)local_24 < (int)local_18)) {
      local_2c = 0.0;
      local_30 = 0;
      local_28 = local_8;
      uVar6 = 1;
    }
    else {
      local_20 = fVar3;
      if ((int)local_10 < (int)fVar3) {
        pfVar2 = &local_10;
      }
      else {
        pfVar2 = &local_1c;
        if ((int)local_1c <= (int)fVar3) {
          pfVar2 = &local_20;
        }
      }
      local_20 = fVar4;
      if ((int)local_14 < (int)fVar4) {
        pfVar10 = &local_14;
      }
      else {
        pfVar10 = &local_18;
        if ((int)local_18 <= (int)fVar4) {
          pfVar10 = &local_20;
        }
      }
      local_20 = fVar5;
      pfVar7 = &local_10;
      if ((int)fVar5 <= (int)local_10) {
        pfVar7 = &local_20;
      }
      local_20 = local_24;
      pfVar8 = &local_14;
      if ((int)local_24 <= (int)local_14) {
        pfVar8 = &local_20;
      }
      local_30 = (int)*pfVar2 % local_8;
      local_2c = (float)((int)*pfVar10 % local_c);
      local_28 = (int)*pfVar7 % local_8 + 1;
      local_c = (int)*pfVar8 % local_c + 1;
      uVar6 = 0;
    }
    local_24 = (float)local_c;
    D3D8LTCG__D3DDevice_SetScissors(1,uVar6,&local_30);
  }
  if (((byte)DAT_0037bd48 & 0x10) == 0) {
    pfVar2 = local_60;
    pfVar10 = (float *)(&DAT_0037e038 + (param_1 + 0x60) * 0x10);
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar10 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar10 = pfVar10 + 1;
    }
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
  return;
}
