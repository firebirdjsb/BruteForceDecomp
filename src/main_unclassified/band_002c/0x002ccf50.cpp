/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BD4F34B15972E66DFDF5EB705121208372912C172FE6A60076FC7D8FB3893DF
 * Entry: 0x002ccf50, Ghidra index: 10159, label: FUN_002ccf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e57c;
void FUN_002ccf50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038e57c;
  FUN_002b3040();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
