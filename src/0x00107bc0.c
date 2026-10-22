/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E355CC62779DC3CCB018D132EEC1515CFF592A3DE9B5C80408CE97688008BBDB
 * Entry: 0x00107bc0, Ghidra index: 3373, label: FUN_00107bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_00107bc0(undefined4 param_1)

{
  char cVar1;
  undefined4 in_EAX;
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
  cVar1 = FUN_00107b20(param_1,in_EAX);
  if (cVar1 == '\0') {
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
    iVar2 = FUN_00077e00(iVar2);
    uVar3 = 1;
    if (iVar2 < 0) goto LAB_00107c50;
  }
  uVar3 = local_11;
LAB_00107c50:
  if (iStack_c == 0) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iStack_c);
}
