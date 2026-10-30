/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53613CE59DC8A6C7B130D54F936F155B91D01792CC9118C8E54F941E875515B4
 * Entry: 0x000c8e80, Ghidra index: 2480, label: FUN_000c8e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c8e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x60);
  if (iVar1 != 0) {
    FUN_0008a720(iVar1,*(undefined4 *)(param_1 + 0x70));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0xf4))();
    if ((*(int *)(iVar1 + 0x58) == 5) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0xf4))(), *(int *)(iVar1 + 0x58) != 3)) {
      FUN_0004e8f0();
      *(undefined4 *)(iVar1 + 0x58) = 3;
      FUN_00018000();
      FUN_00039f00(iVar1);
      FUN_00055b50();
      FUN_00015fe0();
      FUN_0001a4e0();
      iVar1 = FUN_000120f0();
      if ((iVar1 != 0) && (iVar1 = FUN_000120f0(), *(int *)(iVar1 + 0x59c) != 0)) {
        FUN_000120f0();
        uVar3 = 1;
        uVar2 = FUN_000120f0(1);
        FUN_0005e8b0(uVar2,uVar3);
      }
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return;
}
