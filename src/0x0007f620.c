/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9ED503C957F94A3C947F0DE62042B2A5C1F7827877B8C23B29FE949CD046494
 * Entry: 0x0007f620, Ghidra index: 1503, label: FUN_0007f620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b5c;
extern uint32_t _DAT_0046999c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f620(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x5c0) != 0) {
    FUN_000d6b30(*(int *)(unaff_EDI + 0x5c0));
    iVar1 = *(int *)(unaff_EDI + 0x5c0);
    if (iVar1 != 0) {
      FUN_000d4bf0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x5c0) = 0;
    _DAT_0046999c = 0;
    DAT_00469b5c = 0;
  }
  return;
}
