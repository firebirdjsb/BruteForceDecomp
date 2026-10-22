/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8076507EE246B50067F75A0FD622D07CCE492322CE38438A5292451CFA471628
 * Entry: 0x002e3660, Ghidra index: 10409, label: FUN_002e3660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e3660(undefined4 *param_1,uint *param_2,char param_3,undefined1 *param_4)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (in_ECX[8] != 0) {
    uVar2 = in_ECX[6];
    do {
      if (*(char *)(in_ECX[4] + 8 + (uVar2 % (uint)in_ECX[5]) * 0xc) == param_3) break;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar4 < (uint)in_ECX[8]);
  }
  if (uVar4 == in_ECX[8]) {
    return 0x80004005;
  }
  iVar1 = ((in_ECX[6] + uVar4) % (uint)in_ECX[5]) * 0xc;
  if (param_1 == (undefined4 *)0x0) {
    *param_2 = *(uint *)(iVar1 + in_ECX[4]);
    *param_4 = *(undefined1 *)(in_ECX[4] + 9 + iVar1);
    return 0;
  }
  if (*param_2 < *(uint *)(iVar1 + in_ECX[4])) {
    return 0x80028016;
  }
  *param_2 = *(uint *)(iVar1 + in_ECX[4]);
  *param_4 = *(undefined1 *)(in_ECX[4] + 9 + iVar1);
  uVar4 = *(uint *)(iVar1 + in_ECX[4]);
  puVar3 = (undefined4 *)(*(int *)(iVar1 + 4 + in_ECX[4]) + *in_ECX);
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return 0;
}
