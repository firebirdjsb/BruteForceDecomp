/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0943A8BDE34183C823D3D56721B146D4A99BB0E903CF887D544AF68F9E4EDA83
 * Entry: 0x000d3e40, Ghidra index: 2634, label: FUN_000d3e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d3e40(int param_1,undefined4 param_2)

{
  int in_EAX;
  
  if (0x28 < param_1 - in_EAX >> 2) {
    FUN_000d3f20(param_2);
    FUN_000d3f20(param_2);
    FUN_000d3f20(param_2);
    FUN_000d3f20(param_2);
    return;
  }
  FUN_000d3f20(param_2);
  return;
}
