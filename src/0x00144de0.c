/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB5C3E09BB112C06869F3CD6CCFFE01061ACC5CF616E6CFFA98D087E7CDD9B6A
 * Entry: 0x00144de0, Ghidra index: 4178, label: FUN_00144de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144de0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = param_1[3];
    uVar2 = param_1[2];
    uVar3 = param_1[1];
    *in_EAX = *param_1;
    in_EAX[1] = uVar3;
    in_EAX[2] = uVar2;
    in_EAX[3] = uVar1;
    in_EAX = in_EAX + 4;
  }
  return;
}
