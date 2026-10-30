/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 173A08E027B2B78AA186B9665E65D55499EBCFD3100D56D919EC08F64C4923FD
 * Entry: 0x00222fc0, Ghidra index: 7597, label: FUN_00222fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039efe4;
undefined4 * FUN_00222fc0(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00223000();
  in_ECX[1] = &PTR_FUN_0039efd0;
  in_ECX[1] = &PTR_FUN_0039efec;
  *in_ECX = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX + -9);
  }
  return in_ECX + -9;
}
