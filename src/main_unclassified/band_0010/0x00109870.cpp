/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2804A7C81AAC6B20D8EAF7CC2AB939A1FEA653B7BCB0DF031BAF38EFAF3E158A
 * Entry: 0x00109870, Ghidra index: 3409, label: FUN_00109870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e140;
void FUN_00109870(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039e140;
  FUN_000ff870();
  FUN_00109490();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
