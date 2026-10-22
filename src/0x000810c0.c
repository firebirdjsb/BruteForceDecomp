/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9DD27983BC73B382FD4A2AF70DAC253959AD1D46AC6F50B65F405FA4CEDDA42
 * Entry: 0x000810c0, Ghidra index: 1518, label: FUN_000810c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000810c0(int param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xec))(param_1,param_2);
  (**(code **)(*in_ECX + 0xf0))(param_1,param_2);
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}
