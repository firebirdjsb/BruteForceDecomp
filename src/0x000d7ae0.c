/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDD0E458F6D9F3EB6A6B01FE7B6C55CCD6C66506C7DD53BC7EF0E7B6AEA0BD26
 * Entry: 0x000d7ae0, Ghidra index: 2669, label: FUN_000d7ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d7ae0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_EBX + 0x1364);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0x1364));
}
