/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B163812F73614C57CCB9E448C8E757DB521685F98CD26D41316B5A9A1D77224F
 * Entry: 0x0027b5c0, Ghidra index: 8964, label: FUN_0027b5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391ba0;
extern uint32_t PTR_FUN_00391bb8;
extern uint32_t PTR_FUN_00391c6c;
extern uint32_t PTR_FUN_00391c84;
extern uint32_t PTR_FUN_00391ca8;
void FUN_0027b5c0(void)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  iVar1 = unaff_EDI[3];
  *unaff_EDI = &PTR_FUN_00391ca8;
  unaff_EDI[1] = &PTR_FUN_00391c84;
  unaff_EDI[2] = &PTR_FUN_00391c6c;
  if (iVar1 != 0) {
    FUN_0027af70();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  iVar1 = unaff_EDI[3];
  *unaff_EDI = &PTR_FUN_00391bb8;
  unaff_EDI[1] = &PTR_FUN_00391c84;
  unaff_EDI[2] = &PTR_FUN_00391ba0;
  if (iVar1 != 0) {
    FUN_0027af70();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return;
}
