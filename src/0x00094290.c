/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18D2472766B0C1875F65EEB0838A1B6A9610FB1ECE7590C3F0EF23A0A91F52D9
 * Entry: 0x00094290, Ghidra index: 1810, label: FUN_00094290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
extern uint32_t PTR_FUN_003a15e0;
extern uint32_t PTR_FUN_003a15f0;
extern uint32_t PTR_FUN_003a1620;
extern uint32_t PTR_FUN_003a1c18;
void FUN_00094290(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a1620;
  unaff_ESI[3] = &PTR_FUN_003a15f0;
  unaff_ESI[4] = &PTR_FUN_003a15e0;
  (**(code **)(*DAT_00443308 + 0x48))(DAT_00443308);
  iVar1 = unaff_ESI[2];
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  unaff_ESI[2] = 0;
  piVar2 = (int *)unaff_ESI[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[7] = 0;
  }
  piVar2 = (int *)unaff_ESI[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[6] = 0;
  }
  iVar1 = unaff_ESI[2];
  *unaff_ESI = &PTR_FUN_003a1c18;
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  unaff_ESI[2] = 0;
  return;
}
