/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D8FAE9D894A1265EB28A946B4A157D11A4EC881FD291023C7D383F025EAC998
 * Entry: 0x000e1f40, Ghidra index: 2783, label: FUN_000e1f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1f40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x44) {
      FUN_00068c90();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
