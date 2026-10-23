/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 883507FCDF787162B943050F4F7020BD75F9F67AABAEC233B70E1A41DF2CE874
 * Entry: 0x0004beb0, Ghidra index: 627, label: FUN_0004beb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0004beb0(float param_1)

{
  float *in_EAX;
  
  if (param_1 * param_1 < in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX) {
    return 1;
  }
  return 0;
}
