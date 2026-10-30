/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5D62891D8F9526194AAA3BE060BE6163B535EBC38E0D621A18923FE9541F01D
 * Entry: 0x001f7510, Ghidra index: 7047, label: FUN_001f7510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001f7510(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x30;
}
