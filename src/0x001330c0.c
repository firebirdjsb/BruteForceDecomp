/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA33D23ACC994557D5604C41DD9AA85F093F8ADC335EF24D3C2D47A6673FE6A3
 * Entry: 0x001330c0, Ghidra index: 3869, label: FUN_001330c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001330c0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_EAX;
  undefined4 uVar4;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x18) = in_EAX;
  uVar4 = FUN_00078df0();
  *(undefined4 *)(unaff_EDI + 0x20) = uVar4;
  uVar4 = FUN_00078d80();
  piVar2 = *(int **)(unaff_EDI + 0xa4);
  *(undefined4 *)(unaff_EDI + 0x24) = uVar4;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
    return;
  }
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
