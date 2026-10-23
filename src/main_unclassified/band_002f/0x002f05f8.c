/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DCE0BC1EC224128643A743B9A3CAB6795651B19324AE7B387A872B7D615AB3B
 * Entry: 0x002f05f8, Ghidra index: 10745, label: FUN_002f05f8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
unkbyte10 FUN_002f05f8(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}
