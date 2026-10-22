/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 703F05D9DE2BCB8C2EAFD02E6B3B823E3420126E0D4BB0F574A22650CA0AD1F0
 * Entry: 0x00235dd0, Ghidra index: 7826, label: FUN_00235dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
void FUN_00235dd0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 100);
  }
  if ((in_EDX == iVar2) && (iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 100) = 0;
    (**(code **)(*DAT_00443310 + 0x70))(DAT_00443310);
    FUN_00235da0(unaff_ESI);
    iVar1 = *(int *)(unaff_ESI + 0x10);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(int *)(iVar1 + 0x3c));
      }
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
  }
  return;
}
