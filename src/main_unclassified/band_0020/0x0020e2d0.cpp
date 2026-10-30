/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50E98E11E88F37D43F4ADF78987D21F74BF4E5FCC32C63FA69E211F32B9B9BFD
 * Entry: 0x0020e2d0, Ghidra index: 7404, label: FUN_0020e2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395148;
extern uint32_t PTR_LAB_0039af90;
int * FUN_0020e2d0(void)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EDI;
  
  piVar1 = (int *)FUN_002ea01d(100);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_LAB_0039af90;
    piVar1[2] = 0;
    piVar1[1] = -1;
    piVar1[2] = *unaff_EDI;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 1;
    *piVar1 = (int)&PTR_FUN_00395148;
    piVar1[9] = 0;
    piVar1[1] = 9;
    piVar2 = piVar1;
  }
  (**(code **)(*piVar2 + 4))();
  return piVar2;
}
