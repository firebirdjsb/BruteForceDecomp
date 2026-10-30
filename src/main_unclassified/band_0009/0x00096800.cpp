/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 835C97CD4233580A8D16AC68BAFFBA503354DB88A535F9B3BFF945A97BA046DE
 * Entry: 0x00096800, Ghidra index: 1829, label: FUN_00096800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a1490;
void FUN_00096800(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0x15b68988;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x15b68988;
    *piVar1 = (int)&PTR_LAB_003a1490;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
