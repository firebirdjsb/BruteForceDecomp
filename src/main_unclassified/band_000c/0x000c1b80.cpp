/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 796B682554A8C1AC37FA4001FD4797AC966E4E1965406161598FEAD214C543F5
 * Entry: 0x000c1b80, Ghidra index: 2359, label: FUN_000c1b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f694;
extern uint32_t PTR_FUN_0039f8bc;
void FUN_000c1b80(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039f694;
  if (in_ECX[0x11] != 0) {
    FUN_0008f6e0();
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
