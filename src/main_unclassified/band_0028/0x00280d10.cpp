/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEEF86D266E87295B40764620ACF8C068A6E85FAEC8000B8A4E6688C9B03FEB7
 * Entry: 0x00280d10, Ghidra index: 9037, label: FUN_00280d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391800;
void FUN_00280d10(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00391800;
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
