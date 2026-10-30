/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC85EDA43995BECA52979B3704E25EA7519C682F97B08B733D3DE043BA3CDE00
 * Entry: 0x00162f30, Ghidra index: 4662, label: FUN_00162f30
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
void FUN_00162f30(byte param_1)

{
  int in_ECX;
  
  FUN_00162f70();
  *(undefined ***)(in_ECX + 0x1c0) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1c0) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x1bc) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
