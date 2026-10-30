/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7243A69D4D8DA359F24289E02B399EF813E2F3328500E269F3599DABD9C5FA74
 * Entry: 0x002e4ff0, Ghidra index: 10464, label: FUN_002e4ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003866f0;
void FUN_002e4ff0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003866f0;
  FUN_002e45a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
