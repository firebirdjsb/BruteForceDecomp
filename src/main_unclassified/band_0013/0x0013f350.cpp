/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B8B96CA4ECBD837C6BC9452BC59DB5E3073DDED98B3DB9F20E9AFF5DE1580E1
 * Entry: 0x0013f350, Ghidra index: 4048, label: FUN_0013f350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c308;
void FUN_0013f350(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039c308;
  DAT_0041f2e0 = DAT_0041f2e0 + -1;
  if (in_ECX[6] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
