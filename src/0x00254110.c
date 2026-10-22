/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55E2CC3503877BD311C2072ED93DE6EA486567ECE857709E999E446CAB83C77B
 * Entry: 0x00254110, Ghidra index: 8406, label: FUN_00254110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393960;
void FUN_00254110(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[6];
  *unaff_ESI = &PTR_FUN_00393960;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
    piVar1 = (int *)unaff_ESI[6];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[6] = 0;
    }
  }
  piVar1 = (int *)unaff_ESI[7];
  if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[7] = 0;
  }
  piVar1 = (int *)unaff_ESI[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[7] = 0;
  }
  piVar1 = (int *)unaff_ESI[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[6] = 0;
  }
  return;
}
