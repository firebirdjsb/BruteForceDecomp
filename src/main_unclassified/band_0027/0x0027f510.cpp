/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F43E2181069638D0591F75EDAF6A11E9850D8F407B9B5B6FAB46998D477EAC1
 * Entry: 0x0027f510, Ghidra index: 9019, label: FUN_0027f510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391b00;
extern uint32_t PTR_LAB_00391b50;
void FUN_0027f510(byte param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[4];
  *in_ECX = PTR_LAB_00391b50;
  if (piVar1 != (int *)0x0) {
    iVar2 = in_ECX[5];
    in_ECX[4] = 0;
    piVar1[7] = piVar1[7] + -1;
    if (iVar2 == *(short *)(*piVar1 + 0x10)) {
      piVar1[8] = 0;
    }
  }
  *in_ECX = PTR_LAB_00391b00;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
