/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 092BF5EB2B58631F7ADB6A21A72D13460476BCF82FD2AF837BEC14E032D89807
 * Entry: 0x000238e0, Ghidra index: 233, label: FUN_000238e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000238e0(int param_1)

{
  return (int)((*(float *)(param_1 + 0x54) * 100.0) / *(float *)(param_1 + 0x50));
}
