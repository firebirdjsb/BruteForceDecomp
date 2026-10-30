/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D33C50ED3A534240724E01C208BE1496E9B5779E49BD7DC20001439C9AA1D00
 * Entry: 0x00275d30, Ghidra index: 8891, label: FUN_00275d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392470;
extern uint32_t PTR_LAB_00392618;
void FUN_00275d30(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x11];
  *in_ECX = &PTR_FUN_00392470;
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
