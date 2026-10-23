/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38ACB4EA3A82E0D74322B4F5AA6E481BE7F3D0742282FB6F20D8247BD136D835
 * Entry: 0x00315930, Ghidra index: 12110, label: FUN_00315930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315930(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = **(int **)(*(int *)(in_ECX + 8) + 0x10);
  puVar3 = (undefined4 *)(iVar1 + 0x800);
  puVar4 = puVar3;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar3 = *(undefined4 *)(param_1 + 0x800);
  *(undefined4 *)(iVar1 + 0x804) = *(undefined4 *)(param_1 + 0x804);
  *(undefined4 *)(iVar1 + 0x808) = *(undefined4 *)(param_1 + 0x808);
  *(undefined4 *)(iVar1 + 0x80c) = *(undefined4 *)(param_1 + 0x80c);
  *(undefined4 *)(iVar1 + 0x814) = *(undefined4 *)(param_1 + 0x814);
  FUN_0031b21f(0x818,param_1 + 0x818,param_2 + -0x818);
  iVar1 = FUN_003156c3(param_1);
  if (-1 < iVar1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(in_ECX + 0x20);
    }
    puVar4 = (undefined4 *)(in_ECX + 0x24);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}
