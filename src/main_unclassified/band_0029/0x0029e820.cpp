/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DD566F3A86B06F209C81CC549EDDB68BDCB360413AB4758F6CEFFE9D430E6A5
 * Entry: 0x0029e820, Ghidra index: 9477, label: FUN_0029e820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391040;
undefined4 FUN_0029e820(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xef648b3;
    local_4 = 0xef648b3;
    *piVar1 = (int)&PTR_LAB_00391040;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
