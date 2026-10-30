/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4B021BB843859E2A5F118C5474A93F280843728126D57CD7EA011C7A81B18D1
 * Entry: 0x000e9610, Ghidra index: 2885, label: FUN_000e9610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e9610(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  uint local_8 [2];
  
  while (param_2 < in_EAX) {
    iVar4 = (in_EAX + -1) / 2;
    iVar3 = *(int *)(param_1 + 4 + iVar4 * 0xc);
    piVar1 = (int *)(param_1 + iVar4 * 0xc);
    local_8[0] = (uint)(param_4 < iVar3);
    local_8[1] = (uint)(param_3 < *piVar1);
    if (local_8[iVar3 == param_4] == 0) break;
    piVar2 = (int *)(param_1 + in_EAX * 0xc);
    *piVar2 = *piVar1;
    piVar2[1] = piVar1[1];
    piVar2[2] = piVar1[2];
    in_EAX = iVar4;
  }
  piVar1 = (int *)(param_1 + in_EAX * 0xc);
  *piVar1 = param_3;
  piVar1[1] = param_4;
  piVar1[2] = param_5;
  return;
}
