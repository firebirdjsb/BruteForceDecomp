/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FE22B8C92F22853643CA939C444C533F9E78B3D105EA10EE39D7822426DC20F
 * Entry: 0x00262120, Ghidra index: 8652, label: FUN_00262120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392ad4;
undefined4 FUN_00262120(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x8ea53bb;
    local_4 = 0x8ea53bb;
    *piVar1 = (int)&PTR_LAB_00392ad4;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
