/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37DA0DA00E31E5A6C80710D23410CF7C7F7A3C7CB3D65F194347DE1FA944008F
 * Entry: 0x0017a910, Ghidra index: 5016, label: FUN_0017a910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a910(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    FUN_0017d800(*(undefined4 *)(iVar1 + 0x10),iVar1 + 8,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
