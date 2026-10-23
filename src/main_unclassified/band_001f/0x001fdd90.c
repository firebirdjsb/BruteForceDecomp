/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3524C15043072F55F98C8DFDB3CC011D9413788872168476C99C9C8B27AD724
 * Entry: 0x001fdd90, Ghidra index: 7216, label: FUN_001fdd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395780;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fdd90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00395780;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
