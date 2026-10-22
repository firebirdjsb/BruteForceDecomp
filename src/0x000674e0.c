/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD8312F489058EB2EE43AE4AB9CD6F1DB025C8F6D36CF6844DF02800D8A361C6
 * Entry: 0x000674e0, Ghidra index: 1129, label: FUN_000674e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2c5c;
undefined4 FUN_000674e0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x122f8c71;
    local_4 = 0xedd0738f;
    *piVar1 = (int)&PTR_LAB_003a2c5c;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
