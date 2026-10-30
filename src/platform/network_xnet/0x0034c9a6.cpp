/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F198086551F9542897053677E1ACA9E5ED4AF6A2ECF237CD80FCC453DB894DA
 * Entry: 0x0034c9a6, Ghidra index: 12977, label: FUN_0034c9a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c9a6(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    in_ECX[1] = param_1[1];
  }
  *(undefined4 *)(param_1[1] + 0xc) = *in_ECX;
  *in_ECX = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
