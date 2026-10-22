/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C0181FAE53A328E9492DC81784C3BC09EB430CA52C9962447B88055FD7D8149
 * Entry: 0x001a6a00, Ghidra index: 5371, label: FUN_001a6a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6a00(void)

{
  int iVar1;
  int unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 3;
    if (iVar1 != 0) goto LAB_001a6a27;
  }
  FUN_001aa220();
LAB_001a6a27:
  FUN_001b50f0(local_8,local_4);
  return *(int *)(unaff_EDI + 4) + iVar1 * 8;
}
