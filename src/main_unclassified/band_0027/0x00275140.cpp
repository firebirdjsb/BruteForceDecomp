/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F4A925114AF51FC306483CA61305326BE53D3534BA3BEC623917ACA888D4E68
 * Entry: 0x00275140, Ghidra index: 8884, label: FUN_00275140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392520;
extern uint32_t PTR_LAB_00392618;
void FUN_00275140(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x11];
  *in_ECX = &PTR_FUN_00392520;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *in_ECX = &PTR_LAB_00392618;
  in_ECX[1] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
