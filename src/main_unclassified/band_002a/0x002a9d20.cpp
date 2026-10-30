/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B261116ED5A7A1E25AFB3490AC685E1D414ACDEB7A634C0D726365EEB521DB6
 * Entry: 0x002a9d20, Ghidra index: 9640, label: FUN_002a9d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038faa0;
void FUN_002a9d20(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  
  FUN_00065140();
  *unaff_ESI = &PTR_FUN_0038faa0;
  piVar4 = unaff_ESI + 0x13;
  *piVar4 = 0;
  piVar1 = unaff_ESI + 0x14;
  *piVar1 = 0;
  piVar2 = unaff_ESI + 0x15;
  *piVar2 = 0;
  unaff_ESI[0x16] = 0;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00062710(0,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00062710(0x3f800000,piVar1);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar2 = 0;
  }
  FUN_00062710(0,piVar2);
  piVar4 = (int *)unaff_ESI[0x16];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x16] = 0;
  }
  FUN_00062710(0,unaff_ESI + 0x16);
  return;
}
