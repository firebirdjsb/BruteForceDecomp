/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59D303ED47914C34573FBDBFBA0E939C264AC35022ABB0D12E4771130530C80D
 * Entry: 0x001e9550, Ghidra index: 6856, label: FUN_001e9550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469970;
void FUN_001e9550(void)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_00469970;
  if (DAT_00469970 != 0) {
    puVar1 = (undefined4 *)(DAT_00469970 + 4);
    if (*(int *)(DAT_00469970 + 4) != 0) {
      FUN_001d6330(*(undefined4 *)(DAT_00469970 + 8),DAT_00469970);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*puVar1);
    }
    bVar3 = DAT_00469970 != 0;
    *puVar1 = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (bVar3) {
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar2);
      }
      FUN_001d6330(*(undefined4 *)(iVar2 + 8),iVar2);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 4));
    }
  }
  return;
}
