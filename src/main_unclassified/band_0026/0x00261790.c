/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44108DAE691A83CC714DCA20E3FED096FE024FF982CDBB502BD33E20F12F6F8C
 * Entry: 0x00261790, Ghidra index: 8641, label: FUN_00261790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00261790(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 8);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar3 == puVar1) {
      return 1;
    }
    iVar2 = puVar3[2];
    if (*(uint *)(iVar2 + 0x18) < 0x10) {
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
    iVar2 = (**(code **)*param_2)(param_2,-(uint)(param_1 != 4) & param_1,iVar2,0,param_3);
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return 0;
}
