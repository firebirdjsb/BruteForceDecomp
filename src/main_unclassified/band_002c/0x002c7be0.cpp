/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3737A41F5EEBFA634519AB738E97815B2B36D52543824BD57A5BD92C9BFA879D
 * Entry: 0x002c7be0, Ghidra index: 10111, label: FUN_002c7be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002c7be0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x7c))();
  iVar2 = (**(code **)**(undefined4 **)(param_2 + 0x7c))();
  if ((iVar1 == 0) || (iVar2 == 0)) {
    iVar1 = FUN_002ea01d(0x44);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_002dd270(param_1,param_2);
    }
    goto LAB_002c7caa;
  }
  if (((*(byte *)(iVar1 + 8) & 3) == 0) && ((*(byte *)(iVar2 + 8) & 3) == 0)) {
    iVar2 = FUN_002ea01d(0x80);
    if (iVar2 == 0) {
LAB_002c7c6b:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_002bf300();
    }
  }
  else {
    iVar2 = FUN_002ea01d(0x94);
    if (iVar2 == 0) goto LAB_002c7c6b;
    uVar3 = FUN_002d61e0();
  }
  FUN_002bf4b0(param_1,param_2,iVar1 + 0x14);
LAB_002c7caa:
  FUN_002c1080();
  FUN_002c1080();
  return uVar3;
}
