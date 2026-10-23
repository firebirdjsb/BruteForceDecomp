/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD0162667635D80DF68CDABE646CA333EB249FF1F9B5700007A83898F764653C
 * Entry: 0x00100c00, Ghidra index: 3222, label: FUN_00100c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t *DAT_00469b54;
undefined4 FUN_00100c00(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined3 extraout_var;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0xa0);
  if (iVar3 != 0) {
    piVar1 = (int *)(DAT_00469948 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar3);
  }
  piVar1 = *(int **)(unaff_EDI + 0xa4);
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    if ((0 < iVar3) && (iVar3 < 9)) {
      piVar2 = (int *)(DAT_00469948 + 0x10 + iVar3 * 4);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_001e7880();
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  if (((*(byte *)(unaff_EDI + 100) & 1) != 0) && ((*(byte *)(unaff_EDI + 100) & 4) != 0)) {
    (**(code **)(*DAT_00469b54 + 0xc))(*(byte *)(unaff_EDI + 0x66) >> 1 & 1);
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,1);
}
