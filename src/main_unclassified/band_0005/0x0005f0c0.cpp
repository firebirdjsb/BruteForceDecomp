/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A0EDB167A98FFF9A71EFCF1CB5DF47AC07A275831697D29098B324E123DE063
 * Entry: 0x0005f0c0, Ghidra index: 1004, label: FUN_0005f0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_0005f0c0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x88);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x88) = 0;
  }
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
  *(undefined ***)(unaff_ESI + 0x44) = &PTR_FUN_003a35a8;
  *(undefined ***)(unaff_ESI + 0x4c) = &PTR_FUN_003a35a4;
  if ((*(int *)(unaff_ESI + 0x50) != 0) && (*(int *)(unaff_ESI + 0x54) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x54));
  }
  FUN_00060c00();
  return;
}
