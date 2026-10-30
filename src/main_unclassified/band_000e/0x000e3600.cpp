/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DD44D43E3D3FA50349550177EE57A2E0398FB4B7E30BCC016453F0BFF65312B
 * Entry: 0x000e3600, Ghidra index: 2815, label: FUN_000e3600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3600(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0xa0);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0xa4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0xa0));
  }
  *(undefined4 *)(unaff_EDI + 0xa0) = 0;
  *(undefined4 *)(unaff_EDI + 0xa4) = 0;
  *(undefined4 *)(unaff_EDI + 0xa8) = 0;
  FUN_000e3780();
  FUN_000e3780();
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
