/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36E0434827189D0FE4AF8A60A40D9F3B189CEBE5B6F2B6ECBDEB4472883A4652
 * Entry: 0x001056a0, Ghidra index: 3342, label: FUN_001056a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699fc;
void FUN_001056a0(void)

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
                    /* WARNING: Could not recover jumptable at 0x001056ed. Too many branches */
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
