/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DD53E67FC9D61FB8C95C156410D9FF2040C54C04ABAA3232091F1FB878F1B18
 * Entry: 0x001fbae0, Ghidra index: 7126, label: FUN_001fbae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003955e0;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fbae0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003955e0;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
