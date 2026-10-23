/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78B5E424C1A56F284A58291F30956D6A764E757C24F269CC4C9B28796F9F92E6
 * Entry: 0x0006ee30, Ghidra index: 1254, label: FUN_0006ee30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ee30(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  
  if (((param_3 < 0.0 == (param_3 == 0.0)) && (param_4 < 0.0 == (param_4 == 0.0))) &&
     (param_4 != param_3)) {
    *in_ECX = 0.0;
    in_ECX[1] = 0.0;
    in_ECX[2] = 0.0;
    in_ECX[3] = 0.0;
    in_ECX[4] = 0.0;
    in_ECX[5] = 0.0;
    in_ECX[6] = 0.0;
    in_ECX[7] = 0.0;
    in_ECX[8] = 0.0;
    in_ECX[9] = 0.0;
    in_ECX[10] = 0.0;
    in_ECX[0xb] = 0.0;
    in_ECX[0xc] = 0.0;
    in_ECX[0xd] = 0.0;
    in_ECX[0xe] = 0.0;
    in_ECX[0xf] = 0.0;
    fVar2 = (float10)fptan((float10)3.1415927 * (float10)0.0055555557 * (float10)param_1);
    in_ECX[0xe] = 1.0;
    fVar1 = 1.0 / (param_4 - param_3);
    *in_ECX = (float)(((float10)1.0 / fVar2) / (float10)param_2);
    in_ECX[5] = (float)((float10)1.0 / fVar2);
    in_ECX[10] = param_4 * fVar1;
    in_ECX[0xb] = -(fVar1 * param_3 * param_4);
  }
  return;
}
