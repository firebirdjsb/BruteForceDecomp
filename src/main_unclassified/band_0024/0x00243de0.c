/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1AFD3962C03F3252BB012B99C1A855FF2BC6815120988352578C5E965F30C33
 * Entry: 0x00243de0, Ghidra index: 8063, label: FUN_00243de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243de0(void)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0024a990(*(undefined4 *)(iVar1 + 8),iVar1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
