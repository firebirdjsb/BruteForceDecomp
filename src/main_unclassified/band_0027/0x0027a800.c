/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 749B2C3B28DA42F41401C57F6F42D35217B13BBA6DC627DE36809411A7C29DE9
 * Entry: 0x0027a800, Ghidra index: 8953, label: FUN_0027a800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027a800(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 2;
    do {
      *param_1 = *in_ECX;
      puVar1[-1] = in_ECX[1];
      *puVar1 = in_ECX[2];
      puVar1[1] = in_ECX[3];
      param_1 = param_1 + 4;
      puVar1 = puVar1 + 4;
    } while (param_1 != param_2);
  }
  return;
}
