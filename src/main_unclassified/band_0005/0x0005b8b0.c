/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9679C80C51E94CF8E169611B158E4126E835548BADFB4BA8E5FDFB14C4D874D4
 * Entry: 0x0005b8b0, Ghidra index: 924, label: FUN_0005b8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005b8b0(void)

{
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x14) != 0) {
    FUN_0001d590(unaff_EBX + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0x14));
  }
  *(undefined4 *)(unaff_EBX + 0x14) = 0;
  *(undefined4 *)(unaff_EBX + 0x18) = 0;
  *(undefined4 *)(unaff_EBX + 0x1c) = 0;
  if (*(int *)(unaff_EBX + 4) != 0) {
    FUN_0001d590();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
  }
  *(undefined4 *)(unaff_EBX + 4) = 0;
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  return;
}
