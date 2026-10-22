/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0945ACF8DD954F26E9480B89A8D393774F8FE53849BBF13AD60AD4506943473D
 * Entry: 0x002a5ba0, Ghidra index: 9574, label: FUN_002a5ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a5ba0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xb0))();
  *(undefined4 *)(param_1[0x1f] + 4) = *(undefined4 *)(param_2 + 4);
  return 0;
}
