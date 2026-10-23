/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B699D77C20BDD7B8E52DC0ABA8573C423E6082468B8C9D61171AC4A02480B34
 * Entry: 0x0035f280, Ghidra index: 13216, label: FUN_0035f280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0035f280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_retaddr;
  
  iVar1 = param_1;
  if (*(code **)(param_1 + 0xec) != (code *)0x0) {
    (**(code **)(param_1 + 0xec))(param_1);
  }
  iVar2 = param_2;
  if ((param_2 != -1) && (*(int *)(iVar1 + 0x50) != param_2)) {
    XAPILIB__SetFilePointer(*(undefined4 *)(iVar1 + 0x4c),*(int *)(iVar1 + 0x74) + param_2,0,0);
    *(int *)(iVar1 + 0x50) = iVar2;
  }
  XAPILIB__ReadFile(*(undefined4 *)(iVar1 + 0x4c),param_3,param_4,&param_1,0);
  *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + param_1;
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x50);
  uVar3 = *(int *)(iVar1 + 0x78) - *(int *)(iVar1 + 0x54);
  if (*(uint *)(iVar1 + 0x3c) <= uVar3) {
    uVar3 = *(uint *)(iVar1 + 0x3c);
  }
  *(uint *)(iVar1 + 0x44) = uVar3;
  if (*(code **)(iVar1 + 0xf4) != (code *)0x0) {
    (**(code **)(iVar1 + 0xf4))(iVar1);
    param_1 = unaff_retaddr;
  }
  return param_1;
}
