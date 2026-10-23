/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEA26E5EF4F67939AD52D303B22F43C5D9A4A165293CAE320617FA91568B7F4D
 * Entry: 0x0027a5b0, Ghidra index: 8946, label: FUN_0027a5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391da0;
void FUN_0027a5b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00391da0;
  if (in_ECX[10] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[10]);
  }
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  FUN_002780c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
