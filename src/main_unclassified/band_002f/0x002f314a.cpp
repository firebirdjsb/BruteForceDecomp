/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4355117607CB44B7F98A84D37A368B2B66F9F000C27A675D0671072FBA096BE0
 * Entry: 0x002f314a, Ghidra index: 10823, label: FUN_002f314a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f314a(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_44 [16];
  
  if (0x40 < param_2) {
    param_2 = 0x40;
  }
  puVar3 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_44;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(char *)puVar3 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  uVar2 = 0;
  do {
    local_44[uVar2] = local_44[uVar2] ^ 0x36363636;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  XcSHAInit(param_3);
  XcSHAUpdate(param_3,local_44,0x40);
  return;
}
