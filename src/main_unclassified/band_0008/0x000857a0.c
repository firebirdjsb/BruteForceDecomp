/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B70A0374200EB4B19877A110BCF34BE12D47A5D8450EB58F13AFF438247670AF
 * Entry: 0x000857a0, Ghidra index: 1566, label: FUN_000857a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000857a0(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x3c != 0) {
      iVar1 = (param_2 - iVar1) / 0x3c;
      goto LAB_000857ed;
    }
  }
  iVar1 = 0;
LAB_000857ed:
  FUN_000859a0(unaff_EDI,param_2,1);
  *param_1 = iVar1 * 0x3c + *(int *)(unaff_EDI + 4);
  return param_1;
}
