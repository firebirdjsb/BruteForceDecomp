/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E4D960EE7D9FAB14D472A34BA73CC2F5104E8550C493252DCBCB0AB739B019E
 * Entry: 0x0007fdb0, Ghidra index: 1509, label: FUN_0007fdb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0007fdb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x58))();
  iVar1 = *piVar2;
  if (iVar1 == 0x17506391) {
    uVar3 = FUN_0007fba0(param_1,param_2);
    return uVar3;
  }
  if (iVar1 == 0x120785ef) {
    uVar3 = (**(code **)(*in_ECX + 0x154))(param_2);
    return uVar3;
  }
  if (iVar1 == -0x104e72d8) {
    uVar3 = FUN_0007fa90(in_ECX);
    return uVar3;
  }
  return 0;
}
