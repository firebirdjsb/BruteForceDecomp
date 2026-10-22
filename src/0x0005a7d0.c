/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F465754713DF64D1322773164AA456EA1305A35DC8FE3FE28ED96C97EF0F698D
 * Entry: 0x0005a7d0, Ghidra index: 906, label: FUN_0005a7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005a7d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0x10) & 1) != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x40))();
    uVar2 = FUN_0004d630(iVar1 + 0x24);
    *(undefined4 *)(unaff_EDI + 4) = uVar2;
  }
  return;
}
