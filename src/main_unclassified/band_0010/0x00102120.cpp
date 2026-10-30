/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93857B923BC7FC6645041729565FF266C916452663A70B64EB5389FE151EBDDE
 * Entry: 0x00102120, Ghidra index: 3262, label: FUN_00102120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
undefined4 FUN_00102120(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x60) < 0x11) || (0x14 < *(int *)(unaff_ESI + 0x60))) {
    FUN_000f6da0();
    iVar3 = FUN_000f6e10();
    iVar3 = *(int *)(*(int *)(DAT_00469948 + 0x22c + iVar3 * 4) + 0xc4);
    if (iVar3 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = *(undefined4 *)(iVar3 + 0xbc);
    }
  }
  else {
    uVar2 = FUN_000efa30();
  }
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x140))(uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_00102000();
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(uVar2);
    return 1;
  }
  return 0;
}
