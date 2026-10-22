/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D7A422076D0F3AF2E880ABB5AAD1B3243636CBE1E5913828164D4B8A91F4A1E
 * Entry: 0x002bcea0, Ghidra index: 9935, label: FUN_002bcea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bcea0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + -1;
  iVar2 = FUN_002bc920();
  if (iVar2 == 0) {
    iVar2 = FUN_002bc920();
    if (iVar2 == 0) {
      if (param_1 == *(int *)(unaff_ESI + 0x10)) {
        iVar2 = FUN_002bcd30();
        *(int *)(unaff_ESI + 0x10) = iVar2;
        if (param_1 == iVar2) {
          *(undefined4 *)(unaff_ESI + 0x10) = 0;
        }
      }
      piVar1 = *(int **)(*(int *)(unaff_ESI + 4) + 0x2c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(param_1);
      }
      return;
    }
    FUN_002bc8b0(*(undefined4 *)(unaff_ESI + 0xc));
    if (*(short *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 8) != 0) {
        (*(code *)PTR_FUN_003bc654)(*(int *)(iVar2 + 8));
        return;
      }
      *(undefined2 *)(iVar2 + 4) = 0;
      *(undefined2 *)(iVar2 + 0xc) = 0;
    }
    *(undefined2 *)(iVar2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  FUN_002bc8b0(*(undefined4 *)(unaff_ESI + 8));
  if (*(short *)(iVar2 + 0xc) != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(iVar2 + 8));
      return;
    }
    *(undefined2 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 0xc) = 0;
  }
  *(undefined2 *)(iVar2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
