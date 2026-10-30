/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F785A5E706BDB4A72BD3B496757B3445244623763EA447CDE59E5766EB9DA98
 * Entry: 0x00251430, Ghidra index: 8366, label: FUN_00251430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251430(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int unaff_EBX;
  int unaff_EDI;
  
  if (in_ECX <= unaff_EBX) {
    *(int *)(param_1 + in_ECX * 4) = unaff_EDI;
    return;
  }
  do {
    iVar2 = (in_ECX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (((iVar1 == 0) || (unaff_EDI == 0)) || (*(int *)(unaff_EDI + 0x10) <= *(int *)(iVar1 + 0x10))
       ) break;
    *(undefined4 *)(param_1 + in_ECX * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    in_ECX = iVar2;
  } while (unaff_EBX < iVar2);
  *(int *)(param_1 + in_ECX * 4) = unaff_EDI;
  return;
}
