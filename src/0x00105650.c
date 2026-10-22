/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07F8D1C86696E5A7EC27CB22E5C19F4A8F66F6B8F45799961CB2BA6CD0D85854
 * Entry: 0x00105650, Ghidra index: 3341, label: FUN_00105650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699fc;
void FUN_00105650(void)

{
  byte bVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    iVar2 = (**(code **)(*unaff_ESI + 4))();
    if (iVar2 == 1) {
      bVar1 = *(byte *)(unaff_ESI + 10);
      if (DAT_004699fc == '\0') {
        if ((bVar1 & 4) != 0) {
          *(byte *)(unaff_ESI + 10) = bVar1 & 0xfb;
                    /* WARNING: Could not recover jumptable at 0x0010569d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_ESI + 0x28))();
          return;
        }
      }
      else {
        if ((bVar1 & 4) == 0) {
          *(byte *)(unaff_ESI + 10) = bVar1 | 4;
          (**(code **)(*unaff_ESI + 0x28))();
        }
        FUN_00105550();
      }
    }
  }
  return;
}
