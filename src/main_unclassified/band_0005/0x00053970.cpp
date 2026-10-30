/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDAB9F80CCBE44E34174978C026437E870FE91CF5F7EA29038581BA6ABEB2947
 * Entry: 0x00053970, Ghidra index: 769, label: FUN_00053970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    uVar1 = in_ECX[2];
    uVar2 = in_ECX[1];
    *param_1 = *in_ECX;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
  }
  return;
}
