/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F46EF8986CD8F07D6E2E9EA926223B1A498B17E51EDEB8E516D22B364C9B8941
 * Entry: 0x00213810, Ghidra index: 7444, label: FUN_00213810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00213810(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
  puVar1 = *(undefined4 **)(unaff_ESI + 0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x14));
}
