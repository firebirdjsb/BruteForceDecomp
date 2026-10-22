/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6290C5842CC48931E28E7092430560A7EF508885B88B9FF5C47B88DCA056BCB
 * Entry: 0x0014aa70, Ghidra index: 4300, label: FUN_0014aa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0014aa70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039b2b0;
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039afd4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
