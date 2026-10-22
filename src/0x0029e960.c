/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EFB5734F151CBAA18FDFFBE53964FFDA8C7B5D7B29DB94E5831AFD4992FF4BA
 * Entry: 0x0029e960, Ghidra index: 9478, label: FUN_0029e960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029e960(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return 0;
}
