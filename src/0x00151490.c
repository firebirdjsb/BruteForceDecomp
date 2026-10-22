/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEBD359D93822AF6899A9B7CAC8924AB25D34EF05441CE7A8FD57B5474A16E3A
 * Entry: 0x00151490, Ghidra index: 4413, label: FUN_00151490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699ac;
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699b8;
void FUN_00151490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_004699b8;
  iVar3 = DAT_004699b4;
  iVar2 = DAT_004699b0;
  iVar1 = DAT_004699ac;
  if (DAT_004699b0 != 0) {
    if (*(int *)(DAT_004699b0 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(DAT_004699b0 + 4));
    }
    *(undefined4 *)(DAT_004699b0 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  if (DAT_004699ac != 0) {
    FUN_00151560();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  if (DAT_004699b4 != 0) {
    if (*(int *)(DAT_004699b4 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(DAT_004699b4 + 4));
    }
    *(undefined4 *)(DAT_004699b4 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar3);
  }
  if (DAT_004699b8 == 0) {
    return;
  }
  if (*(int *)(DAT_004699b8 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(DAT_004699b8 + 4));
  }
  *(undefined4 *)(DAT_004699b8 + 4) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar4);
}
