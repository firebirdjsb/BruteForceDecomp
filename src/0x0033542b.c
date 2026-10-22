/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE6F3C205C57D314AB10238D1639CFF27971BF738BCB8BECA04746B499A66CFE
 * Entry: 0x0033542b, Ghidra index: 12426, label: FUN_0033542b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033542b(int param_1)

{
  int in_ECX;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_0033d39c(*(undefined4 *)(in_ECX + 0x15bc),*(undefined4 *)(in_ECX + 0x15c0));
    *(undefined4 *)(in_ECX + 0x15bc) = 0;
  }
  return;
}
