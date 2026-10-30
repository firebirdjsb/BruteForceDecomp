/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 934751129333F132B18C8987A15494AAA7E1583C5C7823778DCD42420436017B
 * Entry: 0x000c9840, Ghidra index: 2492, label: FUN_000c9840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f1e4;
void FUN_000c9840(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039f1e4;
  if (7 < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 7;
  *(undefined2 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
