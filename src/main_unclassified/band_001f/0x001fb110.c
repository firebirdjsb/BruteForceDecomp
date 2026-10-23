/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BD89F78280AF323C20AEF5DCD606EEEE194E9F4EF9CFE5C73359C804E3DF51C
 * Entry: 0x001fb110, Ghidra index: 7110, label: FUN_001fb110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fb110(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = param_2;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*puVar1;
  }
  if (puVar5 != puVar1) {
    do {
      param_2 = (**(code **)(*(int *)puVar5[2] + 0xc))();
      iVar2 = *(int *)(iVar3 + 4);
      iVar4 = FUN_000ff730(iVar3,iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
      FUN_000b2a50();
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != *(undefined4 **)(param_1 + 4));
  }
  return;
}
