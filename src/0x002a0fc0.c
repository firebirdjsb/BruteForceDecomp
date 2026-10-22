/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CD269A5BFC4EC62627D4562940441C3A41DA1A7B54D9B7A32154EA2DAC30C3F
 * Entry: 0x002a0fc0, Ghidra index: 9513, label: FUN_002a0fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046987c;
extern uint32_t DAT_0046b020;
extern uint32_t PTR_FUN_00390b60;
void FUN_002a0fc0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_EDI;
  
  FUN_00060d40();
  piVar1 = unaff_EDI + 0x2e;
  *unaff_EDI = &PTR_FUN_00390b60;
  *piVar1 = 0;
  unaff_EDI[0x2f] = 0;
  unaff_EDI[0x30] = 0;
  unaff_EDI[0x31] = 0;
  piVar2 = (int *)unaff_EDI[0x30];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_EDI[0x30] = 0;
  }
  piVar2 = (int *)unaff_EDI[0x31];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_EDI[0x31] = 0;
  }
  FUN_0029f3a0();
  piVar3 = DAT_0046987c;
  unaff_EDI[0x3a] = 0;
  unaff_EDI[0x3b] = 0;
  unaff_EDI[0x3c] = 0;
  unaff_EDI[0x39] = 0;
  unaff_EDI[0x3c] = &DAT_0046b020;
  FUN_0029f3a0();
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar3) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    *piVar1 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  *(byte *)(unaff_EDI + 0x3e) = *(byte *)(unaff_EDI + 0x3e) | 1;
  return;
}
