/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65B4628918E5361443665A0347CF3E311F0D6D74565C8A9693B508101D88B561
 * Entry: 0x002331f0, Ghidra index: 7780, label: FUN_002331f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002331f0(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = ABS(param_1) * 0.63661975 + 1.0;
  uVar1 = (uint)fVar2;
  fVar2 = fVar2 - (float)(int)uVar1;
  if ((uVar1 & 1) != 0) {
    fVar2 = 1.0 - fVar2;
  }
  fVar3 = fVar2 * fVar2;
  return (float10)((((fVar3 * -0.004681754 + 0.079692625) * fVar3 + -0.6459641) * fVar3 + 1.5707964)
                  * (float)((uint)fVar2 | (uVar1 & 2) << 0x1e));
}
