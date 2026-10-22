/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83A792F038D602FB89F51B737CE195E467B7C5D59184ECB9ED915A485A9B5D17
 * Entry: 0x002b02e0, Ghidra index: 9725, label: FUN_002b02e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002b02e0(void)

{
  int *piVar1;
  int unaff_ESI;
  
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
