/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6AD2718AB3880FBCAEB3CF03513BC3D68B8A4CBE73A568146B9CAAD2C17D3D8
 * Entry: 0x001fe6c0, Ghidra index: 7234, label: FUN_001fe6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fe6c0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  iVar1 = FUN_001fb020();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_001fb020();
    iVar1 = (**(code **)(*piVar2 + 0xfc))();
    if (iVar1 != 0) {
      iStack_4 = 0;
      if (param_1 != 0) {
        FUN_0008f6a0(param_1);
      }
      puVar3 = auStack_8;
      (**(code **)(*piVar2 + 0xfc))(puVar3);
      FUN_000e0950(puVar3);
      if (iStack_4 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  iVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x24);
  }
  if (*(int **)(iVar1 + 0xc) != param_2) {
    FUN_0008f6a0(param_2);
  }
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 0xfc))(), iVar1 != 0)) {
    (**(code **)(*param_2 + 0x100))(param_1);
  }
  return 1;
}
