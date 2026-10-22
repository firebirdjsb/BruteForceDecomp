/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D39474740A0B0961B14BE5BD94F096FD5A0E95555D7200AF88FFDD88BDAC71E
 * Entry: 0x000648e0, Ghidra index: 1096, label: FUN_000648e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a31e0;
void FUN_000648e0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  
  FUN_00065140();
  *unaff_ESI = &PTR_FUN_003a31e0;
  unaff_ESI[0x14] = 0;
  piVar4 = unaff_ESI + 0x14;
  unaff_ESI[0x15] = 0;
  piVar1 = unaff_ESI + 0x15;
  piVar2 = unaff_ESI + 0x16;
  *piVar2 = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00062710(0x40a00000,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00062710(0x40a00000,piVar1);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar2 = 0;
  }
  FUN_00062710(0x40a00000,piVar2);
  piVar4 = (int *)unaff_ESI[0x17];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x17] = 0;
  }
  FUN_00062710(0,unaff_ESI + 0x17);
  piVar4 = (int *)unaff_ESI[0x18];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x18] = 0;
  }
  FUN_00062710(0x41700000,unaff_ESI + 0x18);
  unaff_ESI[0x13] = 0;
  return;
}
