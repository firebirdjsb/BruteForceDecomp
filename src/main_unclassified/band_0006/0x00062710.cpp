/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C92D2F4093DAD7E02362038F24E819DB1ABFC417C32B2F573592CA09402ECD71
 * Entry: 0x00062710, Ghidra index: 1060, label: FUN_00062710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);

extern uint32_t PTR_LAB_003a3750;
extern uint32_t PTR_LAB_003a37f0;
void FUN_00062710(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  
  piVar1 = (int *)FUN_002ea01d(0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 4;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *piVar1 = (int)&PTR_LAB_003a37f0;
    piVar1[6] = 1;
  }
  piVar2 = (int *)FUN_002ea01d(0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[3] = 1;
    piVar2[1] = 0x3f800000;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_003a3750;
  }
  (**(code **)(*piVar2 + 0x18))(piVar2,param_1);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,piVar2);
  *unaff_EDI = piVar1;
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}
