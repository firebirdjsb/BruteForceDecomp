/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D042EDE2AC512F4A0E90C71CB353B732C9A05EEE9E4745110244DC95B7A8193
 * Entry: 0x000c1150, Ghidra index: 2350, label: FUN_000c1150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t *DAT_00469b54;
void FUN_000c1150(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0xbc) & 2) != 0) {
    (**(code **)(*DAT_00469b54 + 0xc))(0);
    *(byte *)(unaff_EDI + 0xbc) = *(byte *)(unaff_EDI + 0xbc) & 0xfd;
  }
  piVar2 = *(int **)(unaff_EDI + 0xc0);
  if (piVar2 == (int *)0x0) {
    *(byte *)(unaff_EDI + 0xbc) = *(byte *)(unaff_EDI + 0xbc) & 0xf6;
    if (*(char *)(unaff_EDI + 0x7c) == '\0') {
      iVar3 = *(int *)(unaff_EDI + 0x78);
      *(undefined4 *)(iVar3 + 0x58) = 0;
      *(undefined1 *)(iVar3 + 0x5c) = 0;
    }
    *(undefined4 *)(unaff_EDI + 0xa0) = 0xffffffff;
    *(byte *)(unaff_EDI + 0x13) = *(byte *)(unaff_EDI + 0x13) | 1;
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
