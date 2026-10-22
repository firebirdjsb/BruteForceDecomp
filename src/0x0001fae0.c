/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67374267D7376D187EF2F8B25526F597F2F3D1AFCA353A39F879E06C43D911B0
 * Entry: 0x0001fae0, Ghidra index: 154, label: FUN_0001fae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fae0(float param_1)

{
  if (6.2831855 < param_1) {
    do {
      param_1 = param_1 - 6.2831855;
    } while (6.2831855 < param_1);
    return;
  }
  for (; param_1 < 0.0; param_1 = param_1 + 6.2831855) {
  }
  return;
}
