/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C373C1C96E18F60E7B13320C8AE0D45822A61CA4069B124B6F6A1606C1796A0
 * Entry: 0x001fbe60, Ghidra index: 7136, label: FUN_001fbe60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395370;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fbe60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00395370;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
