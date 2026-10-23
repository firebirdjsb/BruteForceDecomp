/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B03B957AD7618D968EE473913DC04BE6C32E05683D310B579DC1540A44C36F02
 * Entry: 0x00204ec0, Ghidra index: 7286, label: FUN_00204ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00204ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  if ((((*(byte *)(unaff_EBX + 0x3d) & 1) != 0) && (*(int *)(unaff_EBX + 0x40) != DAT_0046d064)) &&
     (iVar1 = FUN_001744f0(), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x90) != *(int *)(param_1 + 0xc)) {
      FUN_0008f6a0(*(int *)(param_1 + 0xc));
    }
    if ((*(byte *)(unaff_EBX + 0x44) & 1) != 0) {
      iVar2 = FUN_001fb020();
      if (iVar2 != 0) {
        FUN_001fba00();
        FUN_001fb020();
        FUN_001fba60();
      }
    }
    switch(*(undefined4 *)(param_2 + 0x1c)) {
    case 0:
      (**(code **)(**(int **)(iVar1 + 0x74) + 0x50))(0);
      *(undefined1 *)(iVar1 + 0xa4) = 1;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
      *(undefined4 *)(iVar1 + 0xac) = 0x3f800000;
      (**(code **)(**(int **)(iVar1 + 0x74) + 0x50))(0);
      return;
    case 1:
      (**(code **)(**(int **)(iVar1 + 0x74) + 0x50))(1);
      *(undefined1 *)(iVar1 + 0xa4) = 1;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
      *(undefined4 *)(iVar1 + 0xac) = 0x3f800000;
      (**(code **)(**(int **)(iVar1 + 0x74) + 0x50))(1);
      return;
    case 2:
      *(undefined1 *)(iVar1 + 0x7c) = 1;
      return;
    case 3:
      FUN_00174c10();
      break;
    case 4:
      FUN_00174bd0();
      return;
    }
  }
  return;
}
