/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FA6D2C50D7B525484D2D1D4A5A51BA5FCF4A266D5DEB88FD24EF46D994F81D5
 * Entry: 0x0034b32f, Ghidra index: 12944, label: FUN_0034b32f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034b32f(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  byte *pbVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_0034cc6e();
  if ((iVar1 != 0) && (param_1 != *(int *)(in_ECX + 0x268))) {
    KeRaiseIrqlToDpcLevel();
    if (*(int *)(in_ECX + 0xae0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_0033378c(param_2);
    }
    if (iVar1 == 0) {
      uVar3 = 0x2726;
    }
    else {
      pbVar2 = (byte *)FUN_003483fd(param_1,param_2,iVar1);
      if ((pbVar2 == (byte *)0x0) &&
         (pbVar2 = (byte *)FUN_0034a953(param_1,param_2), pbVar2 == (byte *)0x0)) {
        uVar3 = 0x2776;
      }
      else {
        *pbVar2 = *pbVar2 | 0x10;
        *param_3 = *(undefined4 *)(pbVar2 + 4);
        uVar3 = 0;
      }
    }
    KfLowerIrql();
    return uVar3;
  }
  return 0x2726;
}
