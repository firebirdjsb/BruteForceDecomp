/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F33554BB0EC0B17CB1785345C292D64D38D1BD2F4790E99DD513DF0DB3A727D8
 * Entry: 0x00234bc0, Ghidra index: 7808, label: FUN_00234bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),param_2,param_3);
  return;
}
