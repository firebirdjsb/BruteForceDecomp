/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE073B215CB4FD04C84A9C321F7B98081121893315223925BE8F47F4F8DC0099
 * Entry: 0x0029e3b0, Ghidra index: 9473, label: FUN_0029e3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391050;
undefined4 FUN_0029e3b0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x310b18c;
    local_4 = 0xfcef4e74;
    *piVar1 = (int)&PTR_LAB_00391050;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
