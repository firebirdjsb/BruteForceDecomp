/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A8A27FE0081DB070AF42FE7545753164B90CC793E0E8A523013773BAB49962
 * Entry: 0x0016eb80, Ghidra index: 4828, label: FUN_0016eb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016eb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int unaff_EBX;
  
  while (unaff_EBX < in_EAX) {
    iVar6 = (in_EAX + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar6 * 0x14);
    if (param_6 <= *(uint *)(param_1 + 0x10 + iVar6 * 0x14)) break;
    uVar3 = puVar1[3];
    uVar4 = puVar1[2];
    uVar5 = puVar1[1];
    puVar2 = (undefined4 *)(param_1 + in_EAX * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar4;
    puVar2[3] = uVar3;
    puVar2[4] = puVar1[4];
    in_EAX = iVar6;
  }
  puVar1 = (undefined4 *)(param_1 + in_EAX * 0x14);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[4] = param_6;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  return;
}
