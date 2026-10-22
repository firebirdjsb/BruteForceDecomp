/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0291E4EA5B6DF164A2F5431E4FFBF89B55766ABCEAD2648CAF0CCFA97DDF0964
 * Entry: 0x00053a10, Ghidra index: 772, label: FUN_00053a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053a10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      *param_1 = *in_ECX;
      uVar1 = in_ECX[3];
      uVar2 = in_ECX[2];
      puVar3[-2] = in_ECX[1];
      puVar3[-1] = uVar2;
      *puVar3 = uVar1;
      puVar3[1] = in_ECX[4];
      param_1 = param_1 + 5;
      puVar3 = puVar3 + 5;
    } while (param_1 != param_2);
  }
  return;
}
