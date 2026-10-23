/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0286FA59E6794926416AB83A4FA37B5A032E714929C7EEAD61741284DC3DF231
 * Entry: 0x00277d10, Ghidra index: 8914, label: FUN_00277d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00277d10(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  float *in_ECX;
  
  in_ECX[2] = param_7 * (param_6 - param_3) + param_3;
  in_ECX[1] = param_7 * (param_5 - param_2) + param_2;
  *in_ECX = param_7 * (param_4 - param_1) + param_1;
  return;
}
