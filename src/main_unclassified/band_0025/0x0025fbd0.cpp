/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F61018BB6020A35CE421A5D3BCA6C13712450549746EF0D7F8C10D798F9D72B
 * Entry: 0x0025fbd0, Ghidra index: 8614, label: FUN_0025fbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392ec0;
void FUN_0025fbd0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xc038bf8;
    local_4 = 0xc038bf8;
    *piVar1 = (int)&PTR_LAB_00392ec0;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
