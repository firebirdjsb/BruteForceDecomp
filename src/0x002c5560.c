/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A70A7BDF6E0AA46D5ACC5983A1B48E40C557F347CFFD4B1DB015772D3E2B4F8F
 * Entry: 0x002c5560, Ghidra index: 10064, label: FUN_002c5560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c5560(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

{
  return ((float10)param_2 -
         (float10)SQRT(ABS(param_2 * param_2 - (param_3 + param_4) * (param_5 + param_5)))) *
         (float10)(1.0 / (param_3 + param_4));
}
