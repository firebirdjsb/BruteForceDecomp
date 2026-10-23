/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B97C2D415B448A614CE6717D9399033B9CD709747E05F70B4DEE9049591F783A
 * Entry: 0x00107a90, Ghidra index: 3371, label: FUN_00107a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_00107a90(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_11;
  undefined1 auStack_10 [4];
  int iStack_c;
  int iStack_8;
  
  local_11 = 0;
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_001e0dd0(auStack_10);
  FUN_00074fb0();
  if (iStack_c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iStack_8 - iStack_c >> 2;
  }
  iVar1 = FUN_000782c0(iVar1);
  if (iVar1 != 0) {
    iVar1 = FUN_00077e00(iVar1);
    uVar2 = 1;
    if (0 < iVar1) goto LAB_00107b08;
  }
  uVar2 = local_11;
LAB_00107b08:
  if (iStack_c == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iStack_c);
}
