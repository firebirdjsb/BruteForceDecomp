/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02208D365DE42074BC72CB63B8074DC91D55D0DB8E4DB3FFB336313B906122AA
 * Entry: 0x001766b0, Ghidra index: 4937, label: FUN_001766b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001766b0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 4;
  }
  FUN_0016af10(param_1,param_2);
  *unaff_EBX = iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
  return;
}
