/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CCA304332E73D13F03B9C86CE129D36BC1B6EA066418B7BDC6BF2D067C8F66B
 * Entry: 0x002a8740, Ghidra index: 9621, label: FUN_002a8740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003900a0;
undefined4 FUN_002a8740(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x6bf080d;
    local_4 = 0xf940f7f3;
    *piVar1 = (int)&PTR_LAB_003900a0;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
