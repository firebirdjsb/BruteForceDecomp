/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58C05710215987B48952EBB9E4CB640DBA1BD8EAE6CF6078AAE113BA0AC810ED
 * Entry: 0x00064100, Ghidra index: 1084, label: FUN_00064100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a35c8;
void FUN_00064100(void)

{
  int *piVar1;
  undefined4 unaff_ESI;
  int *piVar2;
  
  piVar1 = (int *)FUN_002ea01d(0x28);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 4;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *piVar1 = (int)&PTR_LAB_003a35c8;
    piVar1[9] = 1;
  }
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 0x38))(piVar1,4);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,unaff_ESI);
  *piVar2 = (int)piVar1;
  return;
}
