/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0FE76F71EDEEBCBD002B7403C3363E57B6B99CBF3C884A8E09C6BA1CC775112
 * Entry: 0x002104d0, Ghidra index: 7419, label: FUN_002104d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394eb0;
void FUN_002104d0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[10] = 0;
  }
  *in_ECX = &PTR_FUN_00394eb0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
