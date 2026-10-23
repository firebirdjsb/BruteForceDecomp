/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF34C14ACDEBF762E4A016B25D33ED9766656A438E7379B11EA7D2D28DA46122
 * Entry: 0x0025e7a0, Ghidra index: 8600, label: FUN_0025e7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e7a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_EBX + 0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0x2c));
}
