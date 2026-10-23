/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38D4402C4DF214698BB98E916D65D685C9CDDDEFDB2DC9B57CE22BBAB0C1DB29
 * Entry: 0x0014b600, Ghidra index: 4318, label: FUN_0014b600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014b600(int param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x30))();
  if (param_1 != 0) {
    (**(code **)(*in_ECX + 0x28))(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}
