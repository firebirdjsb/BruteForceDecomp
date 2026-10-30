/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E5E6B3E51D8B6A3130D60FEAFC9216575471A5DE9F053E61F61F890AFD9DA24
 * Entry: 0x002dd0c0, Ghidra index: 10315, label: FUN_002dd0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e4c4;
void FUN_002dd0c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_0038e4c4;
  FUN_002d5de0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
