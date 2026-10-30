/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAFE41C41AB432942644BA32AC8DE5797425E1032814BF967EF5F287AEA37A3F
 * Entry: 0x002aabd0, Ghidra index: 9654, label: FUN_002aabd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f764;
undefined4 FUN_002aabd0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x152fd3a1;
    local_4 = 0x152fd3a1;
    *piVar1 = (int)&PTR_LAB_0038f764;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
