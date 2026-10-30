/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5514DE0D6532293CC02E17E5891BDB9CD5FF6A6A1E6B43CFB5D640A7FDB65575
 * Entry: 0x00122870, Ghidra index: 3662, label: FUN_00122870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_00122870(int param_1)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  *(undefined1 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  FUN_0012eab0(0);
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_000c4e70();
  FUN_000c4ec0();
  local_14 = &PTR_LAB_003a3fb4;
  local_4 = 0xffffffff;
  local_10 = 0x30;
  local_8 = param_1;
  local_c = 0;
  FUN_001fe3d0(&local_14);
  return;
}
