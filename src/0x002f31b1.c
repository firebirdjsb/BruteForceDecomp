/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFC498B4354EE14052530CF030385760EF99D0F840700AD419625499CCC92615
 * Entry: 0x002f31b1, Ghidra index: 10825, label: FUN_002f31b1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f31b1(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_58 [16];
  undefined1 local_18 [20];
  
  if (0x40 < param_3) {
    param_3 = 0x40;
  }
  puVar3 = local_58;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_58;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(char *)puVar3 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  uVar2 = 0;
  do {
    local_58[uVar2] = local_58[uVar2] ^ 0x5c5c5c5c;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  XcSHAFinal(param_1,local_18);
  XcSHAInit(param_1);
  XcSHAUpdate(param_1,local_58,0x54);
  XcSHAFinal(param_1,param_4);
  return;
}
