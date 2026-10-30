/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CAEE790103DE4AC856DDB154C8D0E62ECC77CDC7C6408E2860A269FFF80A2BB
 * Entry: 0x002c88d0, Ghidra index: 10126, label: FUN_002c88d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002c88d0(void)

{
  int *in_EAX;
  byte in_CL;
  int *in_EDX;
  
  if (*in_EAX + 2 <= *in_EDX << (in_CL & 0x1f)) {
    return false;
  }
  if (in_EDX[1] << (in_CL & 0x1f) < in_EAX[1] + 2) {
    if (((in_EDX[2] << (in_CL & 0x1f) < in_EAX[2] + 2) && (*in_EAX < *in_EDX + 2 << (in_CL & 0x1f)))
       && (in_EAX[1] < in_EDX[1] + 2 << (in_CL & 0x1f))) {
      return in_EAX[2] < in_EDX[2] + 2 << (in_CL & 0x1f);
    }
  }
  return false;
}
