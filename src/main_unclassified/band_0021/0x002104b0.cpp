/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CDA55DE41445BF46C58DDD1385D8975A1DAAC93ED63C606075971CC789AA43B
 * Entry: 0x002104b0, Ghidra index: 7418, label: FUN_002104b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394eb0;
void FUN_002104b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394eb0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
