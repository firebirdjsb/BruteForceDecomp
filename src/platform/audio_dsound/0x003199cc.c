/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CEA458B600BC41477C7A102FC4882C347956621081B0A7D35E2A47723E81D26
 * Entry: 0x003199cc, Ghidra index: 12238, label: FUN_003199cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003199cc(int param_1)

{
  int in_ECX;
  
  if ((param_1 == 0) && ((*(byte *)(*(int *)(in_ECX + 0x88) + 10) & 4) != 0)) {
    FUN_00319896();
  }
  else {
    FUN_00318e15();
  }
  *(undefined4 *)(in_ECX + 0x150) = 0;
  return 0;
}
