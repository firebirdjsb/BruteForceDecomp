/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6AAD855259E2A617FDAF968D1E4EE5CE59213E7670D0C482C03737641116B1B
 * Entry: 0x002adc60, Ghidra index: 9699, label: FUN_002adc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002adc60(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
  }
  return;
}
