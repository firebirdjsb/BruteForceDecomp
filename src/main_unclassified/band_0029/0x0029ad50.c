/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CB059E5A868DF842CE7D27CD965366E53FD01A419DF80505BC9015982F7DABC
 * Entry: 0x0029ad50, Ghidra index: 9417, label: FUN_0029ad50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0029ad50(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 local_8;
  
  if (*(int *)(unaff_ESI + 4) == 0x110) {
    uVar2 = FUN_00296110();
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
    if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
       (*(int *)(unaff_ESI + 0x1c) != *(int *)(*(int *)(unaff_ESI + 8) + 0x20))) {
      FUN_00299580(0x3c,*(int *)(unaff_ESI + 0x1c),0);
      *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
    }
    FUN_0029b8f0();
    if (local_8 < 1) {
      FUN_00299580(1,*(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x14),0);
    }
    else {
      iVar1 = *(int *)(**(int **)(unaff_ESI + 8) + 0x10);
      *(undefined1 *)(iVar1 + -2 + local_8) = 3;
      *(undefined1 *)(iVar1 + -1 + local_8) = *(undefined1 *)(*(int *)(unaff_ESI + 8) + 0x14);
    }
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0xc) = *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x14)
    ;
    if (*(int *)(unaff_ESI + 4) == 0x3b) {
      uVar2 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar2;
    }
  }
  return;
}
