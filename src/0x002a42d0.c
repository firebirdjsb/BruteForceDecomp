/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63AA968F7C369C3E05FAD1A6D7A525546D1D8DE1844F709A684031DBB281847A
 * Entry: 0x002a42d0, Ghidra index: 9546, label: FUN_002a42d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390498;
undefined4 FUN_002a42d0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x19f5a1a0;
    local_4 = 0x19f5a1a0;
    *piVar1 = (int)&PTR_LAB_00390498;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
