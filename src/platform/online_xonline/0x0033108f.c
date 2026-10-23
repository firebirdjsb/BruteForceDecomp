/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 684DD9E076B48A0228C4A53A44DCB36927C5ABD9E827E025EF4B9F9AE7DFDBAD
 * Entry: 0x0033108f, Ghidra index: 12389, label: FUN_0033108f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033108f(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xbd8);
  if (iVar1 != 0) {
    FUN_00330c53(iVar1);
    *(int *)(in_ECX + 0xbd8) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0xbd4);
  if (iVar1 != 0) {
    FUN_0033c53d(iVar1);
    *(int *)(in_ECX + 0xbd4) = 0;
  }
  *(undefined4 *)(in_ECX + 0xbdc) = 8;
  return;
}
