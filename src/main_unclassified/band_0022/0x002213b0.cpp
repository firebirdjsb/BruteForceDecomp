/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C2EBF3F2BF497349E4B6A782C15136B9DCA62269B1D795FA61C5A176ACDCD21
 * Entry: 0x002213b0, Ghidra index: 7569, label: FUN_002213b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original RET 8 confirms two incoming guest stack DWORDs. 0x002213b4
 * reads entry ESP+8 into ECX for 0x00221af0; 0x002213ce forwards the
 * address of that same DWORD to 0x000ff730. The ECX register ABI and
 * host stack layout remain ABI_UNVERIFIED. */
void FUN_002213b0(undefined4 guest_stack_word_1,undefined4 guest_stack_word_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  FUN_00221af0(in_ECX + -0x1b0);
  iVar1 = *(int *)(in_ECX + 0x24);
  iVar2 = FUN_000ff730(in_ECX + 0x20,iVar1,*(undefined4 *)(iVar1 + 4),&guest_stack_word_2);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
