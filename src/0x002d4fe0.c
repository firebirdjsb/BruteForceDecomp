/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA36AB4D53D4B441D2F9DC5B49C85D4441665C818CABC53F20A773A12632CBD0
 * Entry: 0x002d4fe0, Ghidra index: 10217, label: FUN_002d4fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d4fe0(float *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  unkbyte10 Var3;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  undefined1 local_110 [212];
  undefined4 local_3c;
  float local_24;
  float local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  float local_10;
  float local_c;
  float *local_8;
  float *local_4;
  
  FUN_002d51b0();
  local_118 = 0;
  if (param_1[0x1b] == 0.0) {
    local_24 = *(float *)((int)param_1[0xd] + 0x90);
    local_20 = param_1[0x1a];
    local_1c = param_1 + 0x28;
    local_18 = param_1 + 0x24;
    local_120 = -param_1[1];
    local_8 = &local_124;
    local_11c = -param_1[2];
    local_124 = -*param_1;
  }
  else {
    local_24 = param_1[0x1a];
    if (param_1[0x1a] == 0.0) {
      local_24 = *(float *)((int)param_1[0xc] + 0x90);
    }
    local_20 = param_1[0x1b];
    local_1c = param_1 + 0x24;
    local_18 = param_1 + 0x28;
    local_8 = param_1;
  }
  local_4 = param_1 + 4;
  local_14 = param_1[0x16];
  local_3c = 0;
  if ((*(int *)((int)local_24 + 0x10) == 0) && (*(int *)((int)local_20 + 0x10) == 0)) {
    local_114 = param_1[0x16];
    fVar1 = ((float10)SQRT(local_114) + (float10)1.0) * (float10)*(float *)(param_4 + 0x44);
    Var3 = fpatan(fVar1,(float10)1);
    fVar2 = (float10)fcos(Var3);
    local_10 = (float)fVar2;
    local_c = (float)(fVar2 * fVar1);
    if (*(char *)(param_4 + 0x34) != '\0') {
      FUN_002d56e0(local_110,param_4);
    }
  }
  else {
    fVar1 = ((float10)SQRT(param_1[0x16]) + (float10)1.0) * (float10)0.0;
    Var3 = fpatan(fVar1,(float10)1);
    fVar2 = (float10)fcos(Var3);
    local_10 = (float)fVar2;
    local_c = (float)(fVar2 * fVar1);
  }
  FUN_002d3ea0(local_110,param_2,1,(int)*(short *)((int)param_1 + 0x4a),param_3);
  return;
}
