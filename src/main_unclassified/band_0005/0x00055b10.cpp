/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18BB48B606E055A0D07DF6039708B3EECE76BBEA59BEBCA762647173DEF5D2AA
 * Entry: 0x00055b10, Ghidra index: 820, label: FUN_00055b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055b10(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x10) != 0) {
    FUN_0001d470();
    iVar1 = *(int *)(unaff_EDI + 0x10) + -1;
    *(int *)(unaff_EDI + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EDI + 0xc) = 0;
    }
  }
  return;
}
