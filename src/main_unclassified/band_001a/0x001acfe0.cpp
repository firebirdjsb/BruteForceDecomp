/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5667851C58CFBAD53AECCC06853EEF8E563F98B76069C2C0F820D0A139061291
 * Entry: 0x001acfe0, Ghidra index: 5535, label: FUN_001acfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001acfe0(void)

{
  int *in_EAX;
  int in_ECX;
  
  if (in_ECX == 0) {
    FUN_00069fb0(in_EAX);
    return;
  }
  if (*in_EAX == 0) {
    FUN_001b3200();
    FUN_0006a1f0();
  }
  return;
}
