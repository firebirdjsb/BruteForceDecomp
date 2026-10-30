/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D99442127598B8C3EA67F6299A46A8A1B143ACC7EF98025A6AE9B94BF36E391B
 * Entry: 0x001eb920, Ghidra index: 6888, label: FUN_001eb920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb920(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x1c);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  return param_1[3];
}
