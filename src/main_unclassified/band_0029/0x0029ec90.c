/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4EB3EE64F98D2A99877718FBB849AD72466BBB2D4D6ACC9C3C86C1B2B02556A
 * Entry: 0x0029ec90, Ghidra index: 9479, label: FUN_0029ec90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390ff8;
undefined4 FUN_0029ec90(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xfcdeb8b;
    local_4 = 0xfcdeb8b;
    *piVar1 = (int)&PTR_LAB_00390ff8;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
