/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F5F9D57927C6FD2D5A1B13E8B8920FE69A835DE442B0E038161C99075960057
 * Entry: 0x00260840, Ghidra index: 8624, label: FUN_00260840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392dc4;
void FUN_00260840(void)

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
    piVar1[2] = 0x656ad65;
    *piVar1 = (int)&PTR_LAB_00392dc4;
    piVar2 = piVar1;
  }
  local_4 = 0x656ad65;
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}
