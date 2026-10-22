/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6505D4FE6C0BE8886567EB82F39A304B832F54BCF765AB54364D84DC3E054352
 * Entry: 0x00107b20, Ghidra index: 3372, label: FUN_00107b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_00107b20(void)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_11;
  undefined1 auStack_10 [4];
  int iStack_c;
  int iStack_8;
  
  local_11 = 0;
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_001e0dd0(auStack_10);
  FUN_00074fb0();
  if (iStack_c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iStack_8 - iStack_c >> 2;
  }
  iVar2 = FUN_000782c0(iVar2);
  if (iVar2 != 0) {
    cVar1 = FUN_00077e40(iVar2);
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_00107ba0;
  }
  uVar3 = local_11;
LAB_00107ba0:
  if (iStack_c != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_c);
  }
  return uVar3;
}
