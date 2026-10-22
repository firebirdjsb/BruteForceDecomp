/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD58D5EA3A85F8C21EDC391332F55B51DBE0DC552E78D1F9AC2D8B960BFCB305
 * Entry: 0x000661e0, Ghidra index: 1116, label: FUN_000661e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a31d0;
undefined4 FUN_000661e0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x27b6cd9;
    local_4 = 0x27b6cd9;
    *piVar1 = (int)&PTR_LAB_003a31d0;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
