/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64404FC57E45A15E7A64AD60D6375FCE1163BB1DBF437BB14CE91B9C13D4BAD1
 * Entry: 0x0014b590, Ghidra index: 4316, label: FUN_0014b590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b2b0;
extern uint32_t PTR_FUN_0039b408;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0014b590(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039b408;
  FUN_0014b620();
  *in_ECX = &PTR_FUN_0039b2b0;
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039afd4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
