/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43611DE7040A6D9818C9A3FAA46E6197F60B6203114AF21960AB2A1A6470BA28
 * Entry: 0x0025dfc0, Ghidra index: 8585, label: FUN_0025dfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0025dfc0(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  *param_1 = in_EAX;
  param_1[1] = in_ECX;
  param_1[2] = in_EDX;
  param_1[3] = *param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  FUN_0025bf60();
  FUN_0010bc40();
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return param_1;
}
