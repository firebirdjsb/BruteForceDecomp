/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B800D7C01B102EB616F40D222A26B8E336992039CA07E10D56A69B8A31C0886E
 * Entry: 0x001dd2b0, Ghidra index: 6622, label: FUN_001dd2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd2b0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = 0;
    FUN_001b0100();
    if (in_ECX[2] != 0) {
      FUN_001cd7d0(in_ECX[2]);
    }
  }
  return;
}
