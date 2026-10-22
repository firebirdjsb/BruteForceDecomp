/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F9DF8E28E5998A51020753EEFFA2B874465CBC24EBC3F2B1ED8F4F29E05F109
 * Entry: 0x002b12c0, Ghidra index: 9737, label: FUN_002b12c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e9e0;
void FUN_002b12c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  
  FUN_00065140();
  *unaff_ESI = &PTR_FUN_0038e9e0;
  unaff_ESI[0x13] = 0;
  piVar4 = unaff_ESI + 0x13;
  unaff_ESI[0x14] = 0;
  piVar1 = unaff_ESI + 0x14;
  piVar2 = unaff_ESI + 0x15;
  *piVar2 = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
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
  piVar4 = (int *)unaff_ESI[0x16];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x16] = 0;
  }
  FUN_00062710(0,unaff_ESI + 0x16);
  piVar4 = (int *)unaff_ESI[0x17];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x17] = 0;
  }
  FUN_00062710(0x41700000,unaff_ESI + 0x17);
  return;
}
