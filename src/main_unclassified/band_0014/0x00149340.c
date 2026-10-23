/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BA38CF2F4E9B7C3BECED28718AF2E1D0DE9C886FCF8FA6532D07A923C909521
 * Entry: 0x00149340, Ghidra index: 4270, label: FUN_00149340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039efe4;
void FUN_00149340(byte param_1)

{
  int in_ECX;
  
  FUN_00149380();
  *(undefined ***)(in_ECX + 0x1f8) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1f8) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 500) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
