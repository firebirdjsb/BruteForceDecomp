/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A8AACD8BA3F7B148FFBA35BADEC7FD4055FDC8421C5CDF7E8F6B332ED2C77D1
 * Entry: 0x002a97a0, Ghidra index: 9636, label: FUN_002a97a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038fd5c;
undefined4 FUN_002a97a0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xabd33a0;
    local_4 = 0xf542cc60;
    *piVar1 = (int)&PTR_LAB_0038fd5c;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
