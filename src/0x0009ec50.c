/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA2369668668C3741F85519DB184348ACFD66461F579D7B9C180F68531816217
 * Entry: 0x0009ec50, Ghidra index: 1885, label: FUN_0009ec50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0dc8;
extern uint32_t PTR_LAB_003a0db0;
void FUN_0009ec50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[3];
  param_1[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    param_1[3] = 2;
    piVar2 = (int *)param_1[4];
    *param_1 = &PTR_FUN_003a0dc8;
    param_1[1] = &PTR_LAB_003a0db0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[4] = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
