/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD1A154C57A67A3D2203B95C81FB6BBABD1B692F591C8E758AE0090AAD788549
 * Entry: 0x002df730, Ghidra index: 10338, label: FUN_002df730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002df730(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = *(float **)(param_1 + 0x40);
  if (pfVar1[3] == -NAN) {
    return (float10)*pfVar1;
  }
  fVar2 = (param_2 - pfVar1[1]) * *(float *)(param_1 + 0x3c);
  pfVar1 = *(float **)(param_1 + 0x38);
  fVar3 = fVar2 * fVar2;
  fVar4 = fVar3 * fVar3;
  return (float10)(fVar4 * pfVar1[2] + fVar3 * pfVar1[6] + fVar4 * *pfVar1 + fVar3 * pfVar1[4] +
                   fVar4 * pfVar1[3] + fVar3 * pfVar1[7] + fVar4 * pfVar1[1] + fVar3 * pfVar1[5] +
                  fVar2 * pfVar1[9] + pfVar1[8]);
}
