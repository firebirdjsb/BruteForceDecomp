/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA906B5FD93D637B7D14F3B3923A5B7FCE282CFFDA02C48310211D60AB2A21E3
 * Entry: 0x00141180, Ghidra index: 4099, label: FUN_00141180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00141180(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (*param_1 != DAT_0046d064) {
    piVar2 = (int *)0x0;
    if (*(undefined4 **)(unaff_EDI + 0x20) != (undefined4 *)0x0) {
      piVar2 = (int *)**(undefined4 **)(unaff_EDI + 0x20);
    }
    while (piVar1 = piVar2, piVar1 != *(int **)(unaff_EDI + 0x20)) {
      if (piVar1[2] == *param_1) {
        piVar2 = (int *)*piVar1;
        if (piVar1 != *(int **)(unaff_EDI + 0x20)) {
          *(int **)piVar1[1] = (int *)*piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar1);
        }
      }
      else {
        piVar2 = (int *)*piVar1;
      }
    }
  }
  return;
}
