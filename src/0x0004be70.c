/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8D3D4F418251B93BEA6F8A1ED289CF7C608ACEDC1B7D2A2BB87AEFC2F297AAB
 * Entry: 0x0004be70, Ghidra index: 626, label: FUN_0004be70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0004be70(float param_1)

{
  float *in_EAX;
  
  if (in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX < param_1 * param_1) {
    return 1;
  }
  return 0;
}
