/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FA6DEBAC0AA0189718DC7299EC7C8A50617BB95AA9D8A1AAAB9318AFB7B08A0
 * Entry: 0x000be2c0, Ghidra index: 2315, label: FUN_000be2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001e7880(void);

extern uint32_t DAT_00469948;
void FUN_000be2c0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  
  if ((*(int *)(unaff_EBX + 0x34) != 0) &&
     (iVar2 = *(int *)(*(int *)(unaff_EBX + 0x34) + 0x60), iVar2 != 0)) {
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      return;
    }
    *(byte *)(iVar2 + 0xa0) = *(byte *)(iVar2 + 0xa0) & 0xf7 | 5;
  }
  piVar3 = *(int **)(unaff_EBX + 0xe0);
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar2 = *piVar3;
  if ((0 < iVar2) && (iVar2 < 9)) {
    piVar1 = (int *)(DAT_00469948 + 0x34 + iVar2 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar3);
}
