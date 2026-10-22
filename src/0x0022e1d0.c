/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D8B325C7E0740EF57D97FB9A91049F49AA59E93D51C033F00BAD37A938621B1
 * Entry: 0x0022e1d0, Ghidra index: 7721, label: FUN_0022e1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_0022e1d0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float local_90;
  float fStack_74;
  float fStack_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  local_2c = 0;
  fVar3 = -*param_2;
  local_28 = 0xbf800000;
  local_30 = 0;
  if ((*param_2 == 0.0) && (param_2[2] == 0.0)) {
    fStack_74 = 1.0;
    fStack_5c = 0.0;
  }
  else {
    fStack_74 = param_2[2];
    fStack_5c = fVar3;
  }
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_34 = 0x3f800000;
  local_44 = 0x3f800000;
  local_54 = 0x3f800000;
  fVar4 = *(float *)(*(int *)(param_1 + 0x228) + 0x130) * 0.017444;
  uVar6 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  DAT_0046cfd8 = uVar6 * 0x19660d + 0x3c6ef35f;
  uVar7 = DAT_0046cfd8 >> 9;
  fVar5 = ((float)(uVar6 >> 9 | 0x3f800000) - 1.0) * fVar4;
  FUN_0013e800(&local_54,(fVar5 + fVar5) - fVar4);
  fVar5 = ((float)(uVar7 | 0x3f800000) - 1.0) * fVar4;
  FUN_0001fa20(&local_54,(fVar5 + fVar5) - fVar4);
  FUN_002334b0();
  FUN_0001f9c0();
  *param_2 = local_90;
  param_2[1] = fStack_5c * fVar3 - -fVar1 * fStack_74;
  param_2[2] = -fVar2 * fStack_74 - fVar3 * 0.0;
  return;
}
