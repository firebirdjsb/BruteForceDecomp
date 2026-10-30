/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AA50771B419F026A9F59CB6A537629795A9338C90B602C3B60FBB5B6B68A6FA
 * Entry: 0x00091330, Ghidra index: 1783, label: FUN_00091330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a1b48;
void FUN_00091330(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xec4edf0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xec4edf0;
    *piVar1 = (int)&PTR_LAB_003a1b48;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
