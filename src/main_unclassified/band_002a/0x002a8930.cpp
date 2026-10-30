/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD794359D02C87E97B42EED28D0FB282E547D7FCD692E3EB33746AFB883E2512
 * Entry: 0x002a8930, Ghidra index: 9624, label: FUN_002a8930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a8930(int param_1)

{
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  return;
}
