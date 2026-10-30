/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58870001ED47F5169EF5C29BFCD5D52D397DD6495B2A6CFCC005327640F5B2C3
 * Entry: 0x00080a80, Ghidra index: 1515, label: FUN_00080a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00077820(void);

undefined4 FUN_00080a80(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x5cc + *(int *)(unaff_EDI + 0x5c8) * 4);
  if (*(int *)(iVar1 + 0x14) != 0) {
    FUN_00077820(iVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x14));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x58c) = 0;
  return 1;
}
