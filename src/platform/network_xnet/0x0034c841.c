/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF7C5950A7E46C4401F310ADB82C98E2CCCCD2194FCB2FA84BA406F8E7CF16ED
 * Entry: 0x0034c841, Ghidra index: 12971, label: FUN_0034c841
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034c841(void)

{
  int *in_ECX;
  
  return *in_ECX + ((uint)in_ECX[2] >> 0x13 & 1) * -8 + -0xe;
}
