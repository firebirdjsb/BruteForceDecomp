/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5117330042A8FB7BB1488B1CDAF747A1B313BDE09DBA5CB195AD7AD1B6FCD76D
 * Entry: 0x00137dc0, Ghidra index: 3920, label: FUN_00137dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137dc0(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(unaff_EBX + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
