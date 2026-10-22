/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99C954B130AEEBF395F5823788066BD483C9F5C14F46882B0400DD744813B8DC
 * Entry: 0x000efab0, Ghidra index: 2983, label: FUN_000efab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000efab0(void)

{
  uint uVar1;
  uint *in_EAX;
  
  uVar1 = *in_EAX;
  if (uVar1 < 0x1b6990e8) {
    if (uVar1 == 0x1b6990e7) {
      return 2;
    }
    if (uVar1 == 0x3688869) {
      return 3;
    }
    if (uVar1 == 0x685b609) {
      return 0;
    }
  }
  else if (uVar1 == 0xf50671e3) {
    return 1;
  }
  return 4;
}
