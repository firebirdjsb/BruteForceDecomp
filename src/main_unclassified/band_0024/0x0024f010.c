/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60AEC727A5A72F16EEFD4E76682C45D99C4920AB396B0E1090FE02899C907D44
 * Entry: 0x0024f010, Ghidra index: 8310, label: FUN_0024f010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393a94;
void FUN_0024f010(void)

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
    piVar1[2] = -0x11876c9e;
    local_4 = 0xee789362;
    *piVar1 = (int)&PTR_LAB_00393a94;
    FUN_00237ff0(&local_4);
    piVar2 = piVar1;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}
