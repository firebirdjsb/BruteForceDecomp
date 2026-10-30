/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2051040050B710593594726A8DED97EA26D8A3C1BFAD2627670A5A4CEA8CBD34
 * Entry: 0x00069dd0, Ghidra index: 1176, label: FUN_00069dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);

void FUN_00069dd0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 8);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0xc);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 8));
  }
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
