/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D77081421A92E0A73BE9BFE17906EB6BBE1A484E406932D81F5E24A574D32AC
 * Entry: 0x001ec5c0, Ghidra index: 6912, label: FUN_001ec5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_001ec5c0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x1c) != 0;
}
