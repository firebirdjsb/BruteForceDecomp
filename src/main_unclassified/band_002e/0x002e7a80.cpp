/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8699AAF42159DFD4A54896FCDB9AFC88CB0427F5224C940554DE6D97114DA9ED
 * Entry: 0x002e7a80, Ghidra index: 10525, label: FUN_002e7a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7a80(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x44) + 0x54))
            (*(undefined4 *)(*(int *)(in_ECX + 0x24) + param_1 * 4),param_2);
  return;
}
