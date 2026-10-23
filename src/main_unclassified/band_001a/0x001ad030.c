/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAE74FC50071978DFCCBC95B1CB4A4FA299F0C4E44984B94BD1B12F2E5CCC672
 * Entry: 0x001ad030, Ghidra index: 5536, label: FUN_001ad030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ad030(void)

{
  int in_EAX;
  int *in_ECX;
  
  if (in_EAX == 0) {
    if (*in_ECX != 0) {
      FUN_0006a190(1);
    }
    *in_ECX = 0;
    return;
  }
  if (*in_ECX == 0) {
    FUN_001b3240();
  }
  return;
}
