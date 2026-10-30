/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FABC112E37C2AB05443CCB7FEB5FBE5266A840F244B467D6CBDDA6EB164C243
 * Entry: 0x0025e610, Ghidra index: 8595, label: FUN_0025e610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e610(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x14);
  iVar2 = *(int *)(in_EDX + 4);
  for (iVar3 = *(int *)(in_EDX + 0x10); iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 4) + iVar2;
  }
  return;
}
