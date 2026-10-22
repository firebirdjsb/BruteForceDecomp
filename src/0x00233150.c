/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1766A887C36D56E928CAE5AE5B510AE831035818E02349681EF194A245BB93AB
 * Entry: 0x00233150, Ghidra index: 7779, label: FUN_00233150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00233150(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (uint)(ABS(param_1) * 0.63661975);
  fVar2 = ABS(param_1) * 0.63661975 - (float)(int)uVar1;
  if ((uVar1 & 1) != 0) {
    fVar2 = 1.0 - fVar2;
  }
  fVar3 = fVar2 * fVar2;
  return (float10)((((fVar3 * -0.004681754 + 0.079692625) * fVar3 + -0.6459641) * fVar3 + 1.5707964)
                  * (float)((uint)fVar2 | (uint)param_1 & 0x80000000 ^ (uVar1 & 2) << 0x1e));
}
