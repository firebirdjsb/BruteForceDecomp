/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 284A6729A164266DF5F7380EA610005AAE6456B51DA1F245701CCC581B1FA067
 * Entry: 0x0015f150, Ghidra index: 4570, label: FUN_0015f150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039ac0c;
void FUN_0015f150(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &LAB_0039ac10;
  in_ECX[6] = &PTR_LAB_0039ac0c;
  FUN_00154e50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
