/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9F2587DAD02A52157B00C22721279008410F838DAF804BB82066818DF3E1B3F
 * Entry: 0x0020e210, Ghidra index: 7401, label: FUN_0020e210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394f00;
void FUN_0020e210(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00394f00;
  FUN_001553f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
