/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9874C1539939028AA43ECE4FC1DD8E0566DE5DCF93C4434E1DA046112E2789B
 * Entry: 0x000e1ec0, Ghidra index: 2782, label: FUN_000e1ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1ec0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = *(int *)(unaff_EBX + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(unaff_EBX + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x68) {
    FUN_000e3720();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
