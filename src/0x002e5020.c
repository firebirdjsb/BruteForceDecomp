/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2AFD548379419B6D356D71754BE9FF1E3E0BB9A7472D0900E09FD0CC4A90D58
 * Entry: 0x002e5020, Ghidra index: 10465, label: FUN_002e5020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003866f0;
extern uint32_t PTR_LAB_0038670c;
extern uint32_t PTR_LAB_00386718;
void FUN_002e5020(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00386718;
  in_ECX[0x94] = &PTR_LAB_0038670c;
  FUN_002e45a0();
  *in_ECX = &PTR_FUN_003866f0;
  FUN_002e45a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
