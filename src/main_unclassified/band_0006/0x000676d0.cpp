/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60A9ACA2AE21258A6F6D21AAA15411FF7C0315243F48119EF5552DA2725711CF
 * Entry: 0x000676d0, Ghidra index: 1131, label: FUN_000676d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_000676d0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x84);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x84) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x80);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x80) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x7c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x74) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x70) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  }
  *(undefined ***)(unaff_ESI + 0x44) = &PTR_FUN_003a35a8;
  *(undefined ***)(unaff_ESI + 0x4c) = &PTR_FUN_003a35a4;
  if ((*(int *)(unaff_ESI + 0x50) != 0) && (*(int *)(unaff_ESI + 0x54) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x54));
  }
  FUN_00060c00();
  return;
}
