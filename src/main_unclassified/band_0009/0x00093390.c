/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E02BE882F111B2411D5B349EB04DF7E95296C8727456B6FD83EBBA65B3AADCB
 * Entry: 0x00093390, Ghidra index: 1806, label: FUN_00093390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a189c;
void FUN_00093390(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xf8904b9;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xf8904b9;
    *piVar1 = (int)&PTR_LAB_003a189c;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
