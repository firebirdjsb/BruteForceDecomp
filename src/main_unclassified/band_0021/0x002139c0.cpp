/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A39208A7E829A604A4D47F99C4A09AA51C5D0BFEE84F7AE86BE5A8019C8A3D6D
 * Entry: 0x002139c0, Ghidra index: 7448, label: FUN_002139c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039af90;
void FUN_002139c0(void)

{
  int *piVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = unaff_EBX + 0x13;
  iVar3 = 3;
  do {
    piVar1 = (int *)puVar2[-1];
    puVar2 = puVar2 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *unaff_EBX = &PTR_LAB_0039af90;
  return;
}
