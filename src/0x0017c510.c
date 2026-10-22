/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03DBAC389E96453C4AAC4E1C1C7307153BB6DF6D2ED4B5F29E2A9FDBB72D9F40
 * Entry: 0x0017c510, Ghidra index: 5048, label: FUN_0017c510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017c510(void)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0017d930(*(undefined4 *)(iVar1 + 8),iVar1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
