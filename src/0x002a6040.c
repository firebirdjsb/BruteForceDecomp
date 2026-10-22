/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2984B7F77292BE203E4973A613418B2FE047E75AD84092A52F6AF7195355D6B
 * Entry: 0x002a6040, Ghidra index: 9578, label: FUN_002a6040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039027c;
undefined4 FUN_002a6040(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x705a4e3;
    local_4 = 0x705a4e3;
    *piVar1 = (int)&PTR_LAB_0039027c;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
