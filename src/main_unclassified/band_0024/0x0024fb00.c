/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7985ADF68692AC9128620CEBD3E80C7B13FD0CCC76B434D90EC397F176404CCB
 * Entry: 0x0024fb00, Ghidra index: 8324, label: FUN_0024fb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393ae0;
extern uint32_t PTR_LAB_00393aa4;
extern uint32_t PTR_LAB_00393ac0;
extern uint32_t PTR_LAB_00393c94;
void FUN_0024fb00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  FUN_0024c950();
  *in_EAX = &PTR_FUN_00393ae0;
  in_EAX[1] = &PTR_LAB_00393ac0;
  in_EAX[2] = &PTR_LAB_00393aa4;
  puVar1 = in_EAX + 0x2e;
  *puVar1 = &PTR_LAB_00393c94;
  in_EAX[0x2f] = 1;
  in_EAX[0x30] = in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x2d] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x2d] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
