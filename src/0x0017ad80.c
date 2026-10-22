/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBBF4984B828800AA94A9CFFC04BC8916D62DEB01EA9A5E67AC18BE44B04B479
 * Entry: 0x0017ad80, Ghidra index: 5025, label: FUN_0017ad80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017ad80(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x148) = *in_EAX;
  *(undefined4 *)(in_ECX + 0x14c) = in_EAX[1];
  *(undefined4 *)(in_ECX + 0x150) = in_EAX[2];
  *(undefined4 *)(in_ECX + 0x154) = in_EAX[3];
  *(undefined4 *)(in_ECX + 0x158) = in_EAX[4];
  return;
}
