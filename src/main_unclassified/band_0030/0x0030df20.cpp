/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBB561938D3F98923A2C3659AA3F4422718FA667422BB8C754526634175E8B54
 * Entry: 0x0030df20, Ghidra index: 11114, label: FUN_0030df20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040219c;
extern uint32_t DAT_004021a4;
extern uint32_t PTR_DAT_004021a0;
void FUN_0030df20(void)

{
  if (DAT_004021a4 != '\0') {
    if (PTR_DAT_004021a0 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(PTR_DAT_004021a0);
    }
    DAT_0040219c = 0;
  }
  return;
}
