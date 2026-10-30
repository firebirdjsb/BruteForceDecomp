/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3708B3B60E3B4AB2882A29F41F319BC47C906B0F927EA82606627B878A19FB23
 * Entry: 0x000b2970, Ghidra index: 2154, label: FUN_000b2970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b28e0(int param_1);
extern float10 FUN_000b2870(int param_1);
extern float10 FUN_000b2770(int param_1);
extern float10 FUN_000b2800(int param_1);

int * FUN_000b2970(undefined4 param_1,int *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)FUN_000b28e0(param_1);
  fVar2 = (float10)FUN_000b2870(param_1);
  fVar3 = (float10)FUN_000b2870(param_1);
  fVar4 = (float10)FUN_000b2770(param_1);
  fVar5 = (float10)FUN_000b2800(param_1);
  fVar6 = (float10)FUN_000b2800(param_1);
  *param_2 = (int)(fVar3 + (float10)(float)(((float10)(float)fVar1 - fVar2) * (float10)0.5));
  param_2[1] = (int)(fVar6 + (float10)(float)(((float10)(float)fVar4 - fVar5) * (float10)0.5));
  return param_2;
}
