/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FE1068FBD3176E88F5F99FE2C35398954C2DC20A1DB3EE2BCD1E920D8FA07DF
 * Entry: 0x002a87a0, Ghidra index: 9622, label: FUN_002a87a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003900b0;
void FUN_002a87a0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_EBX;
  
  FUN_00065140();
  *unaff_EBX = &PTR_FUN_003900b0;
  piVar3 = unaff_EBX + 0x13;
  *piVar3 = 0;
  piVar1 = unaff_EBX + 0x14;
  *piVar1 = 0;
  piVar2 = (int *)*piVar3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar3 = 0;
  }
  FUN_00062710(0,piVar3);
  piVar3 = (int *)*piVar1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
  }
  FUN_00062710(0x3f800000,piVar1);
  return;
}
