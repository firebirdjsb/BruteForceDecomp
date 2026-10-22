/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0E1D7E21C98FC4D57C65C25B450470ECBD9445D55E5DBCC72B1A15F0A7D7118
 * Entry: 0x002ae170, Ghidra index: 9704, label: FUN_002ae170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038f458;
extern uint32_t PTR_LAB_0038f5a0;
void FUN_002ae170(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_EAX;
  
  FUN_000620a0();
  piVar1 = in_EAX + 0xc;
  *in_EAX = &PTR_FUN_0038f458;
  *piVar1 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  FUN_00062710(0x411ccccd,piVar1);
  *in_EAX = &PTR_LAB_0038f5a0;
  in_EAX[0xd] = 1;
  return;
}
