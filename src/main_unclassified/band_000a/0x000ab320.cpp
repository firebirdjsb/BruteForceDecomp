/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 909842F426B88974B570CA3D37C26AD82641218DA827C90A8AE9961CDF7268B9
 * Entry: 0x000ab320, Ghidra index: 2042, label: FUN_000ab320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_003a0098;
void FUN_000ab320(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a0098;
  piVar1 = (int *)in_ECX[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xd] = 0;
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
