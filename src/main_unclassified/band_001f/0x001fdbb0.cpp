/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCF2FF14B62F697384B22EE6F14B70DD56D9E05EB9BBB5A3E7F49A85C855CCEB
 * Entry: 0x001fdbb0, Ghidra index: 7210, label: FUN_001fdbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396388;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fdbb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00396388;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
