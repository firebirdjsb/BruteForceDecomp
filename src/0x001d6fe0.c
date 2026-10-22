/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AEDC33AA14AF1EE7545641DF90C1F3046F8828CF7149C89C87AD38B4EC7A16C
 * Entry: 0x001d6fe0, Ghidra index: 6386, label: FUN_001d6fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d6fe0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x134) {
    FUN_001d1c60(param_1);
    in_EAX = in_EAX + 0x134;
  }
  return in_EAX;
}
