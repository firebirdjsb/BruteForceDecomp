/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB92C13D8E28637F0114E01C96D6EFDAADC75351E9CA362013AA1F2C68238205
 * Entry: 0x000a0a70, Ghidra index: 1901, label: FUN_000a0a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a0a70(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  uint local_8 [2];
  
  while (param_2 < in_EAX) {
    iVar5 = (in_EAX + -1) / 2;
    iVar4 = *(int *)(param_1 + iVar5 * 0xc);
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    local_8[0] = (uint)(param_3 < iVar4);
    local_8[1] = (uint)(param_5 < (uint)puVar1[2]);
    if (local_8[iVar4 == param_3] == 0) break;
    puVar2 = (undefined4 *)(param_1 + in_EAX * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    in_EAX = iVar5;
  }
  piVar3 = (int *)(param_1 + in_EAX * 0xc);
  *piVar3 = param_3;
  piVar3[1] = param_4;
  piVar3[2] = param_5;
  return;
}
