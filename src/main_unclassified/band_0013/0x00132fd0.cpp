/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED91F89605B449B98F6399B73D94D55BA9B4A549D0B7EA89AEF24E99232C5467
 * Entry: 0x00132fd0, Ghidra index: 3867, label: FUN_00132fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_0039db74;
void FUN_00132fd0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  piVar2 = (int *)unaff_EDI[0x29];
  *unaff_EDI = &PTR_LAB_0039db74;
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    if ((0 < iVar3) && (iVar3 < 9)) {
      piVar1 = (int *)(DAT_00469948 + 0x10 + iVar3 * 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_001e7880();
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  FUN_0008f720();
  if (unaff_EDI[0x19] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_EDI[0x17] != 0) {
    FUN_0008f6e0();
  }
  *unaff_EDI = &PTR_FUN_003a402c;
  if (unaff_EDI[4] != 0) {
    FUN_0008f6e0();
    if (unaff_EDI[4] != 0) {
      FUN_0008f6e0();
      return;
    }
  }
  return;
}
