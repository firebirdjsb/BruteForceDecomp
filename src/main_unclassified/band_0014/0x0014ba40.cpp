/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92451F2DAB002D7E987DFEDAA4963D3DF095994DC9C08E8F9A52BC9E43335C0F
 * Entry: 0x0014ba40, Ghidra index: 4320, label: FUN_0014ba40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b318;
void FUN_0014ba40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039b318;
  FUN_0014ad00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
