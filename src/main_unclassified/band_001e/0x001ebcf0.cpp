/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00C253596F21ED204FA1C4A8F65B8B9350B9936095919FC5A27C3EA720D415FD
 * Entry: 0x001ebcf0, Ghidra index: 6898, label: FUN_001ebcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ebcf0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x2c))(in_ECX + 0x18);
  return param_1[3];
}
