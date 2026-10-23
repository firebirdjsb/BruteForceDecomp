/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CFBF606D0941A66725874DA56BC22145FDC85DE0BE0960280ABE4938B36F672
 * Entry: 0x0029ab40, Ghidra index: 9415, label: FUN_0029ab40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0029ab40(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_448 [274];
  
  FUN_00299fb0(*(undefined4 *)(**(int **)(param_1 + 8) + 0x18));
  *(undefined4 *)(local_448[0] + 0x14) = param_3;
  if (*(int *)(param_1 + 4) != 0x28) {
    FUN_0029a130();
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar1;
  if (param_2 != 0) {
    FUN_00294810();
    FUN_00299880();
  }
  FUN_0029bab0(param_1);
  if (*(int *)(param_1 + 4) != 0x29) {
    FUN_0029a130();
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_0029a580();
  FUN_0029ad50();
  if (*(int *)(param_1 + 4) != 0x108) {
    FUN_0029a240(param_1);
  }
  if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(*(int *)(param_1 + 8) + 0x20))) {
    FUN_00299580(0x3c,*(int *)(param_1 + 0x1c),0);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_0029a0a0();
  FUN_00299ea0(param_1,local_448);
  return;
}
