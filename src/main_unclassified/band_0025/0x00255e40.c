/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A722F003322A548AB97BFBEE6FF59EFBBC00F47B1EE7D4AF8C45126816C7C4
 * Entry: 0x00255e40, Ghidra index: 8429, label: FUN_00255e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393840;
undefined4 FUN_00255e40(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x16b42cba;
    local_4 = 0xe94bd346;
    *piVar1 = (int)&PTR_LAB_00393840;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
