/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A967C90F9E15BC067E253D8A4D73C948B2175758C9A5DB9744DB94D173B5E89E
 * Entry: 0x000647f0, Ghidra index: 1093, label: FUN_000647f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_000647f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a35a8;
  in_ECX[2] = PTR_FUN_003a35a4;
  if ((in_ECX[3] != 0) && (in_ECX[4] != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[4]);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
