/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18E4F93035A7AE0A8E3E24542D3592F86E1336C7D40E4E5EFCC22D66C4B5843B
 * Entry: 0x0002aac0, Ghidra index: 285, label: FUN_0002aac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002aac0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00049ca0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = (**(code **)(*in_ECX + 0x180))(param_1);
  uVar5 = 0;
  uVar4 = 0x41c80000;
  uVar3 = FUN_00049ca0(0x41c80000,0);
  FUN_00024f80(in_ECX + -0x10,uVar3,uVar4,uVar5);
  return uVar2;
}
