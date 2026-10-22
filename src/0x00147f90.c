/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1436C50B5B7D77E9DEE5F94B8F56BE4DE59B5AFD409A862479CC4FAE9392D347
 * Entry: 0x00147f90, Ghidra index: 4248, label: FUN_00147f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039bca4;
void FUN_00147f90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_0039bca4;
      puVar1[2] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0x3f800000;
      puVar1[6] = 0;
      puVar1[5] = 0;
      *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) & 0xf0;
    }
    if (*(undefined4 **)(param_1 + 0x1b4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1b4))(1);
    }
    *(undefined4 **)(param_1 + 0x1b4) = puVar1;
    if (puVar1[2] != param_1) {
      FUN_0008f6a0(param_1);
    }
  }
  FUN_00147e50(param_2);
  FUN_00147ed0(*(undefined4 *)(*(int *)(param_1 + 8) + 500),param_2);
  FUN_00147dd0();
  return;
}
