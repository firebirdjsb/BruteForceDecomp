/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6D08543F7942B5A6701F0139860357F41B8E8FEC9A9EAB97B3B754D142A78E0
 * Entry: 0x0008c040, Ghidra index: 1695, label: FUN_0008c040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008c040(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x3c))();
  if ((undefined4 *)in_ECX[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x13])(1);
    in_ECX[0x13] = 0;
  }
  return;
}
