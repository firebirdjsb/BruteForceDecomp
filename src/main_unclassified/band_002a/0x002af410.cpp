/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 118DC65E370E4A598D50DE7A029D2D02D00100EF105786FCA22F402C5326F2BF
 * Entry: 0x002af410, Ghidra index: 9715, label: FUN_002af410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038ef88;
void FUN_002af410(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_EAX;
  
  FUN_000620a0();
  *in_EAX = &PTR_FUN_0038ef88;
  piVar4 = in_EAX + 0xc;
  *piVar4 = 0;
  piVar1 = in_EAX + 0xd;
  *piVar1 = 0;
  piVar2 = in_EAX + 0xe;
  *piVar2 = 0;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00062710(0x3f333333,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00062710(0x41200000,piVar1);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar2 = 0;
  }
  FUN_00062710(0x41200000,piVar2);
  return;
}
