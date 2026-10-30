/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B67E99A46F87E286BBC51C1AD625A0238401B8B65AE4C3C093CAA5828A5F388
 * Entry: 0x002f0624, Ghidra index: 10747, label: FUN_002f0624
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f0624(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}
