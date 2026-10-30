/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24EC03474497ECC2536D24EA4B1C559D3359B49CA69D6638423F9A9A07CF7F0B
 * Entry: 0x000740b0, Ghidra index: 1315, label: FUN_000740b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a2610;
void FUN_000740b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a2610;
  if (in_ECX[1] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[1]);
  }
  if (in_ECX[2] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[2]);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
