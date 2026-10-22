/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C989FE334D4ECD688DCA1D47BA102AA1EF8656F366F90646D575AE03BC3987A3
 * Entry: 0x001a9a20, Ghidra index: 5476, label: FUN_001a9a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9a20(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x14);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x18);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x14));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
