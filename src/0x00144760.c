/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92CAF2E404AD15488C7F9E53AF0AD236D6D8FF36874A66B4A733AFEB48D55298
 * Entry: 0x00144760, Ghidra index: 4159, label: FUN_00144760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144760(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = in_ECX[3];
    uVar3 = *in_ECX;
    uVar2 = in_ECX[2];
    param_1[1] = in_ECX[1];
    *param_1 = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return;
}
