/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD701C7E75CC30DBFB912E3DC296795B13FA11CFC00FBB9C72A15CAEDE36189F
 * Entry: 0x001eb8e0, Ghidra index: 6887, label: FUN_001eb8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396bec;
void FUN_001eb8e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00396bec;
  if (in_ECX[8] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[8]);
  }
  FUN_002e8b80();
  if ((param_1 & 1) != 0) {
    FUN_002e8c30();
  }
  return;
}
