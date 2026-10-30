/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA6B5FD17F50A6E49E81A8B885F624B67269BC702712378680B5013A5EF06CBC
 * Entry: 0x0005ee50, Ghidra index: 1001, label: FUN_0005ee50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3e80;
undefined4 FUN_0005ee50(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x1f55f13e;
    local_4 = 0x1f55f13e;
    *piVar1 = (int)&PTR_LAB_003a3e80;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
