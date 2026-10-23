/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C26CB1BFC8D2D8D159610F15BD069A15693DA9AAE4EDA3E3D8D3D848134582DF
 * Entry: 0x000ecb10, Ghidra index: 2939, label: FUN_000ecb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ecb10(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  *(undefined1 *)(in_ECX + 0x38) = *(undefined1 *)(param_1 + 0x38);
  return;
}
