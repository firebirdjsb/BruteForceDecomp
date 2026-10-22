/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3205168229A08B5BD3EF42A8A8CD7F9CDBF119C0110C86F2C7038B4F82E7AC38
 * Entry: 0x0029d5f0, Ghidra index: 9460, label: FUN_0029d5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003911a0;
undefined4 FUN_0029d5f0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x7f5da22;
    local_4 = 0xf80a25de;
    *piVar1 = (int)&PTR_LAB_003911a0;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
