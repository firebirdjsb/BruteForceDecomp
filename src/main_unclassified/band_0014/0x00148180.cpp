/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AD7F1C1609C81FE5A2D1AC14851271F77368D8F4E538C9ED9236E206DFA4767
 * Entry: 0x00148180, Ghidra index: 4252, label: FUN_00148180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039b838;
void FUN_00148180(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[2] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039b838;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
