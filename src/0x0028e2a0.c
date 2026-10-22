/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B27CCDF870C3A6C7B5D99F23B325E7BD2B21EA76BF073BC353931B93D73F7396
 * Entry: 0x0028e2a0, Ghidra index: 9204, label: FUN_0028e2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028e2a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = in_ECX[3];
    uVar2 = in_ECX[2];
    uVar3 = in_ECX[1];
    *param_1 = *in_ECX;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return;
}
