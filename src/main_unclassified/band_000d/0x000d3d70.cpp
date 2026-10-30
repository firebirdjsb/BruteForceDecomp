/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80455B1958D8553FB4EAF857A92C66743D7BEABAE821C7F5FCA604FF71E26946
 * Entry: 0x000d3d70, Ghidra index: 2632, label: FUN_000d3d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d3f70(int param_1);

void FUN_000d3d70(undefined4 param_1)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 *unaff_EDI;
  
  for (iVar2 = in_EAX - (int)unaff_EDI; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)unaff_EDI + iVar2 + -4);
    *(undefined4 *)((int)unaff_EDI + iVar2 + -4) = *unaff_EDI;
    FUN_000d3f70(uVar1,param_1);
  }
  return;
}
