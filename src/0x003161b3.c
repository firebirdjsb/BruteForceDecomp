/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F09DEB3ED29B5BF1C6E8C85AD9B3BD754DE046795FB7325884D2DD88FC02B3D
 * Entry: 0x003161b3, Ghidra index: 12131, label: FUN_003161b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003161b3(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x774) = *(int *)(in_ECX + 0x774) - (uint)*(byte *)(param_1 + 100);
  return;
}
