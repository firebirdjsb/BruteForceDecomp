/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6350EC03586D45341F2CCCD1797BB8ACE784B8BBB42E93D309A6B34467BDE4E7
 * Entry: 0x0023b180, Ghidra index: 7907, label: FUN_0023b180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394078;
undefined4 FUN_0023b180(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xe095d87;
    local_4 = 0xf1f6a279;
    *piVar1 = (int)&PTR_LAB_00394078;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
