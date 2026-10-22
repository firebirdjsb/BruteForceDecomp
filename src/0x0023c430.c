/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DE6996FCDD33D6BDD509979904F282BE0A10A0F25E4AA3B3EAB81571D92F282
 * Entry: 0x0023c430, Ghidra index: 7927, label: FUN_0023c430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023c430(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    for (piVar2 = *(int **)(param_1 + 8); piVar2 != *(int **)(param_1 + 0xc); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x1c) != 0) {
          FUN_0023c540(iVar1 + 0x18);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x1c));
        }
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        piVar2 = *(int **)(iVar1 + 0xc);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar1);
      }
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}
