/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 790C4DBD20A261CC07817C687ED0994AB66FC127CF53D7C50A23A7040E50D4F8
 * Entry: 0x002e11d0, Ghidra index: 10364, label: FUN_002e11d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e11d0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == (undefined4 *)0xfffffffb) {
    puVar4 = (undefined4 *)((int)in_ECX + 0x9e);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  if (param_1 == (undefined4 *)0xffffffff) {
    uVar2 = (**(code **)(*in_ECX + 0x54))(in_ECX[0x18e],param_2);
    return uVar2;
  }
  cVar1 = FUN_002e0920(param_1);
  if (cVar1 != '\0') {
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 0x80040004;
}
