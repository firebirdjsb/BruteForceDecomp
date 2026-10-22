/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7654B053F241FD837DE4D60728B79C8C7987CEA8469F0DDA32B618ADD8166B26
 * Entry: 0x002e3540, Ghidra index: 10404, label: FUN_002e3540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3540(int param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = 2;
  *(undefined4 *)(in_ECX + 2) = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined2 *)(param_1 + 2);
  return;
}
