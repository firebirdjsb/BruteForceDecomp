/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7567896B74CAECC93A8134FCCB9B02EB92A1E48AEE27320722188182029F9BC5
 * Entry: 0x002aa570, Ghidra index: 9647, label: FUN_002aa570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038f958;
void FUN_002aa570(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  
  FUN_000620a0();
  *in_EAX = &PTR_FUN_0038f958;
  piVar3 = in_EAX + 0xc;
  *piVar3 = 0;
  piVar1 = in_EAX + 0xd;
  *piVar1 = 0;
  piVar2 = (int *)*piVar3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar3 = 0;
  }
  FUN_00062710(0x3f800000,piVar3);
  piVar3 = (int *)*piVar1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
  }
  FUN_00062710(0x3f800000,piVar1);
  return;
}
