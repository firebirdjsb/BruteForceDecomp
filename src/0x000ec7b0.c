/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50CD1E86582BBAA01EB84AA293F0BFD4D9A5641FB22558A7199E6B914D8CF609
 * Entry: 0x000ec7b0, Ghidra index: 2933, label: FUN_000ec7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec7b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x48);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(unaff_EDI + 0x44,local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x48));
}
