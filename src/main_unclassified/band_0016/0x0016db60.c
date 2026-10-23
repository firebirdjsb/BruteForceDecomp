/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0927C19969EDC2A8AB967AD73D844BEB753855475A5D408211B0C34B5E0B1319
 * Entry: 0x0016db60, Ghidra index: 4801, label: FUN_0016db60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016db60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    uVar1 = in_ECX[3];
    uVar2 = in_ECX[2];
    uVar3 = in_ECX[1];
    *param_1 = *in_ECX;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    param_1[4] = in_ECX[4];
  }
  return;
}
