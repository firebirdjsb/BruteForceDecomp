/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B3738B72513AA24C4B3111C288599BC272CA64B05A0266A4D3F5F10590B1DA9
 * Entry: 0x00256380, Ghidra index: 8437, label: FUN_00256380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256380(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
  }
  return;
}
