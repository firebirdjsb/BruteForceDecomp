/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6550E44CFB64E9B6FA0C8C41E5D2CBD6F296CE331533865ACB5F6BCEAB539AAB
 * Entry: 0x002a0860, Ghidra index: 9512, label: FUN_002a0860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002a0860(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x98);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x98) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x94) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x88);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x88) = 0;
  }
  *(undefined ***)(unaff_ESI + 0x68) = &PTR_FUN_003a35a8;
  *(undefined ***)(unaff_ESI + 0x70) = &PTR_FUN_003a35a4;
  if ((*(int *)(unaff_ESI + 0x74) != 0) && (*(int *)(unaff_ESI + 0x78) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x78));
  }
  piVar1 = *(int **)(unaff_ESI + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x60) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x54) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x50) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  }
  FUN_00060c00();
  return;
}
