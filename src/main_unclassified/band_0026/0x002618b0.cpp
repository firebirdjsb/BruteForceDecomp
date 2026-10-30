/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AFB36AF9594B6ECD6B8F4ED77B4E8CB99C2A54545F7F2C19EE56E9AEFFFD820
 * Entry: 0x002618b0, Ghidra index: 8642, label: FUN_002618b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392cf4;
void FUN_002618b0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x6af2e3;
    *piVar1 = (int)&PTR_LAB_00392cf4;
    piVar2 = piVar1;
  }
  local_4 = 0xff950d1d;
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}
