/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6B3921AEBE6A36C37990DB461E2A990DE367EADFCC2AC9764C5864849C2AAFD
 * Entry: 0x000fded0, Ghidra index: 3181, label: FUN_000fded0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fded0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    for (; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
      if ((undefined4 *)puVar5[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar5[2])(1);
      }
    }
    puVar1 = *(undefined4 **)(iVar2 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    FUN_001298b0(&param_1,uVar4,puVar1);
    cVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
    if (cVar3 != '\0') {
      FUN_000fe7d0(iVar2);
      return;
    }
    FUN_000fe6a0();
  }
  return;
}
