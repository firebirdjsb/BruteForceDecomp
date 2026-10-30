/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC1693531BD86717C9DFDA1103914DF2C09753CE0D393391E43730F57ECA681F
 * Entry: 0x00072c00, Ghidra index: 1289, label: FUN_00072c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00072c00(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  iVar1 = *in_ECX + 1;
  *in_ECX = iVar1;
  while( true ) {
    if (6 < iVar1) {
      return 0;
    }
    if (*(int *)(in_EDX + 0x38 + iVar1 * 8) != 0) break;
    iVar1 = iVar1 + 1;
    *in_ECX = iVar1;
  }
  return *(undefined4 *)(in_EDX + 0x38 + iVar1 * 8);
}
