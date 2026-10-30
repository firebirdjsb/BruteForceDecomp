/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A15D30A2BA5EDE84E25843183B6E4D23636947459C335D3E6E9339937E38F26
 * Entry: 0x002e4980, Ghidra index: 10457, label: FUN_002e4980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e4980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  iVar1 = FUN_002e4550(param_1);
  if (iVar1 != 0) {
    iVar2 = (**(code **)*in_ECX)();
    uVar3 = FUN_002e4770(iVar1 - iVar2 >> 4,param_2,param_3);
    return uVar3;
  }
  return 0x80004005;
}
