/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3D43690B26C4FDDADFCAC3E62CF00D6F0AE510D39929237F8AEDC3EF294EC6A
 * Entry: 0x00257800, Ghidra index: 8457, label: FUN_00257800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039368c;
undefined4 FUN_00257800(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x1c1d6094;
    local_4 = 0x1c1d6094;
    *piVar1 = (int)&PTR_LAB_0039368c;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
