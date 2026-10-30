/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86357EDC003BA8AEF050072F7520EA8D3D88CBF21ABC0D488905A4A3E60140E8
 * Entry: 0x0023dba0, Ghidra index: 7966, label: FUN_0023dba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023dba0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x48;
}
