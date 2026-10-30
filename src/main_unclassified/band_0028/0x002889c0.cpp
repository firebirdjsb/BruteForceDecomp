/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 595ABC2E99DAE474EF2585A26179CAF64DEA392DC486EA0C79705CF960932F49
 * Entry: 0x002889c0, Ghidra index: 9115, label: FUN_002889c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002889c0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  FUN_00288a10();
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
