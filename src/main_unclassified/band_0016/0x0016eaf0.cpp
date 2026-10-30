/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9533E74216E95B1E68E2A3C686F3C8EF6FF31CF1DA48E5CD4B3B4BA52C48CFBF
 * Entry: 0x0016eaf0, Ghidra index: 4827, label: FUN_0016eaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016eaf0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  iVar1 = in_EAX;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (in_EDX <= iVar2) break;
    if (*(int *)(*(int *)(param_1 + iVar2 * 4) + 0xc) <
        *(int *)(*(int *)(param_1 + -4 + iVar2 * 4) + 0xc)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar1 = iVar2;
  }
  if (iVar2 == in_EDX) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + in_EDX * 4);
    iVar1 = in_EDX + -1;
  }
  while (in_EAX < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar2 = *(int *)(param_1 + iVar3 * 4);
    if (*(int *)(param_2 + 0xc) <= *(int *)(iVar2 + 0xc)) break;
    *(int *)(param_1 + iVar1 * 4) = iVar2;
    iVar1 = iVar3;
  }
  *(int *)(param_1 + iVar1 * 4) = param_2;
  return;
}
