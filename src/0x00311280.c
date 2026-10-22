/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EB911D20E9F016D5496432964D8AFCCC73376CEB68CDD60AF74A2D051B1D4D8
 * Entry: 0x00311280, Ghidra index: 11830, label: FUN_00311280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046d0f8;
void FUN_00311280(void)

{
  undefined4 uVar1;
  undefined1 local_4 [4];
  
  if (DAT_0046d0f8 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *DAT_0046d0f8;
  }
  FUN_001298b0(local_4,uVar1,DAT_0046d0f8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(DAT_0046d0f8);
}
