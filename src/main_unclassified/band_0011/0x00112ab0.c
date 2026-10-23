/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7CFBB364DA51DEC29CAC9B56342523F97773549948DC4CB72ED1F73A9849FC1
 * Entry: 0x00112ab0, Ghidra index: 3562, label: FUN_00112ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00112ab0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00123fa0(in_ECX);
  iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x1f8);
  if (iVar1 != 0) {
    FUN_00056fe0(iVar1,in_ECX,0);
  }
  return;
}
