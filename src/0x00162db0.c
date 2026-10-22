/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7B41C22A1837B0DF52B0750C244C23E3AFC3562A200E756D053C77BB1A214DC
 * Entry: 0x00162db0, Ghidra index: 4659, label: FUN_00162db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aa40;
extern uint32_t PTR_LAB_0039aa3c;
void FUN_00162db0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039aa40;
  in_ECX[6] = &PTR_LAB_0039aa3c;
  FUN_00154e50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
