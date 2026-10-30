/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 078717D3798AABE06C686B17F7604D3D9FD39389EB421F03B23A7D01EAD6573F
 * Entry: 0x0006b970, Ghidra index: 1215, label: FUN_0006b970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039af90;
extern uint32_t PTR_LAB_003a277c;
int * FUN_0006b970(void)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EDI;
  
  piVar1 = (int *)FUN_002ea01d(0x48);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_LAB_0039af90;
    piVar1[2] = 0;
    piVar1[1] = -1;
    piVar1[2] = *unaff_EDI;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 1;
    *piVar1 = (int)&PTR_LAB_003a277c;
    piVar1[1] = 0xc;
    piVar2 = piVar1;
  }
  (**(code **)(*piVar2 + 4))();
  return piVar2;
}
