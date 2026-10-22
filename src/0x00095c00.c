/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC90E5FEE11903786003D37164F9BB642CA16D9C7AFA51D05A8E0245D44F484E
 * Entry: 0x00095c00, Ghidra index: 1824, label: FUN_00095c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a1538;
void FUN_00095c00(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xeb77796;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xeb77796;
    *piVar1 = (int)&PTR_LAB_003a1538;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
