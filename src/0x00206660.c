/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46378679A19706A542FE72D22F61980C49425E6CA5DDCB0E1423F6C6244902E8
 * Entry: 0x00206660, Ghidra index: 7301, label: FUN_00206660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00206660(void)

{
  int in_EAX;
  
  if ((*(char *)(in_EAX + 0x4c) == '\0') &&
     (*(float *)(in_EAX + 0xa4) < 0.0 != (*(float *)(in_EAX + 0xa4) == 0.0))) {
    return 1;
  }
  return 0;
}
