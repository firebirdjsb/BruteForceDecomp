/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 004075E1D8CAD27850DDECFC3B2AB8E29450F0E48051E0E28E916F6BE2425352
 * Entry: 0x000eb800, Ghidra index: 2898, label: FUN_000eb800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000eb800(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  return;
}
