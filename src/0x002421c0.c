/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 236A2E60B8731AA0859131981100A8330EEAD7FBAA2B44CD3B18ECF3D6AAED4F
 * Entry: 0x002421c0, Ghidra index: 8026, label: FUN_002421c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002421c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x50;
}
