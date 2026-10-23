/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7852B4C395DF2F18036F550215B05358EC877C27491C0C65C12BF7D342358030
 * Entry: 0x00232e80, Ghidra index: 7776, label: FUN_00232e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00232e80(float param_1)

{
  float10 fVar1;
  
  if (param_1 < -0.5) {
    fVar1 = (float10)FUN_00232d40(SQRT((param_1 + 1.0) * 0.5));
    return (float10)3.1415927 - (fVar1 + fVar1);
  }
  if (0.5 < param_1) {
    fVar1 = (float10)FUN_00232d40(SQRT((1.0 - param_1) * 0.5));
    return fVar1 + fVar1;
  }
  fVar1 = (float10)FUN_00232d40(param_1);
  return (float10)1.5707964 - fVar1;
}
