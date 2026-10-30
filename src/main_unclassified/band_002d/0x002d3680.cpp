/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E95F0752238D2041DC3E5A5BAE8A414CB23C4F5986D41D61A6249414F82FCAD3
 * Entry: 0x002d3680, Ghidra index: 10201, label: FUN_002d3680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d3680(int param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  undefined4 extraout_ECX;
  float10 fVar4;
  unkbyte10 Var5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  float local_8;
  
  local_14 = 0;
  param_2 = -param_2;
  uVar1 = *(undefined8 *)(*(float **)(param_1 + 0x108) + 1);
  local_20 = *(float *)(param_1 + 0xb4) + **(float **)(param_1 + 0x108) * param_2;
  local_1c = (float)*(undefined8 *)(param_1 + 0xb8) + (float)uVar1 * param_2;
  fStack_18 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) +
              (float)((ulonglong)uVar1 >> 0x20) * param_2;
  fVar4 = (float10)FUN_002b6500(&local_20);
  fVar2 = ABS(local_20 * *(float *)(param_1 + 0xdc) +
              fStack_18 * *(float *)(param_1 + 0xe4) + local_1c * *(float *)(param_1 + 0xe0));
  Var5 = FUN_002b7160(fVar2);
  fVar6 = (float10)fcos(Var5);
  fVar6 = (float10)*(float *)(param_1 + 0xd8) * (float10)*(float *)(param_1 + 0xd8) * (float10)fVar2
          * (float10)fVar2 +
          (float10)*(float *)(param_1 + 0x104) * (float10)*(float *)(param_1 + 0x104) * fVar6 *
          fVar6;
  if (fVar6 < (float10)(float)fVar4 * (float10)(float)fVar4) {
    Var5 = FUN_002b7160(SQRT((float)fVar6));
    fVar4 = (float10)fcos(Var5);
    pfVar3 = *(float **)(param_1 + 0x108);
    fVar4 = -fVar4;
    fVar2 = pfVar3[1];
    local_8 = (float)(fVar4 * (float10)pfVar3[2]);
    *(float *)(param_1 + 0xb4) = (float)(fVar4 * (float10)*pfVar3);
    *(float *)(param_1 + 0xbc) = local_8;
    *(float *)(param_1 + 0xb8) = (float)(fVar4 * (float10)fVar2);
    FUN_002b8d10(param_1 + 0xb4,&local_20,extraout_ECX);
    return;
  }
  return;
}
