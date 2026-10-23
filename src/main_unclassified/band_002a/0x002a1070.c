/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99C1A0BE3B627C4EB1DE7F142F2AE1A03D17730023568BEB67A3104C0369F60C
 * Entry: 0x002a1070, Ghidra index: 9514, label: FUN_002a1070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a1070(void)

{
  int *piVar1;
  int unaff_EBX;
  
  FUN_002389c0();
  FUN_0029f3a0();
  piVar1 = *(int **)(unaff_EBX + 0xc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EBX + 0xc4) = 0;
  }
  piVar1 = *(int **)(unaff_EBX + 0xc0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EBX + 0xc0) = 0;
  }
  piVar1 = *(int **)(unaff_EBX + 0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(unaff_EBX + 0xb8) = 0;
  }
  FUN_00060dc0();
  return;
}
