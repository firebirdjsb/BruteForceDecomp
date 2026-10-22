/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6090F539FFCD8C12A5941362E7E21B737E3CA8DC145AEBB8F2F2A068A75C1C08
 * Entry: 0x002aab10, Ghidra index: 9652, label: FUN_002aab10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f6ac;
undefined4 FUN_002aab10(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xd8a433b;
    local_4 = 0xd8a433b;
    *piVar1 = (int)&PTR_LAB_0038f6ac;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
