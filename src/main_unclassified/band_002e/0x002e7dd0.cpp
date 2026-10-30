/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F63FB76B8F28FBF5EC24780FE7445F131A79FE2853F1DDBF1F12AE48175F625
 * Entry: 0x002e7dd0, Ghidra index: 10530, label: FUN_002e7dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7dd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 4))(param_1,param_2,&param_2);
  if (-1 < iVar1) {
    FUN_002e7ce0(unaff_ESI,unaff_retaddr);
  }
  return;
}
