/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68DAA1F13F7532459D9EDE68FBF14CA1C126316D8A0790B2A63238D7187BCB89
 * Entry: 0x0028fd20, Ghidra index: 9222, label: FUN_0028fd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0028fd20(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBX;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 0x30);
  puVar6 = *(undefined4 **)(unaff_EBX + 0x34);
  local_4 = *(undefined4 **)(param_1 + 0xc);
  if (puVar6 < puVar1) {
    puVar6 = *(undefined4 **)(unaff_EBX + 0x2c);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = (int)puVar6 - (int)puVar1;
  if (uVar3 < (uint)((int)puVar6 - (int)puVar1)) {
    uVar5 = uVar3;
  }
  if ((uVar5 != 0) && (param_2 == -5)) {
    param_2 = 0;
  }
  *(uint *)(param_1 + 0x10) = uVar3 - uVar5;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar5;
  if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
    uVar2 = (**(code **)(unaff_EBX + 0x38))(*(undefined4 *)(unaff_EBX + 0x3c),puVar1,uVar5);
    *(undefined4 *)(unaff_EBX + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  puVar6 = puVar1;
  puVar7 = local_4;
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_4 = (undefined4 *)((int)local_4 + uVar5);
  puVar4 = (undefined1 *)((int)puVar1 + uVar5);
  if (puVar4 == *(undefined1 **)(unaff_EBX + 0x2c)) {
    puVar1 = *(undefined4 **)(unaff_EBX + 0x28);
    if (*(undefined1 **)(unaff_EBX + 0x34) == *(undefined1 **)(unaff_EBX + 0x2c)) {
      *(undefined4 **)(unaff_EBX + 0x34) = puVar1;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar5 = *(int *)(unaff_EBX + 0x34) - (int)puVar1;
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if ((uVar5 != 0) && (param_2 == -5)) {
      param_2 = 0;
    }
    *(uint *)(param_1 + 0x10) = uVar3 - uVar5;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar5;
    if (*(code **)(unaff_EBX + 0x38) != (code *)0x0) {
      uVar2 = (**(code **)(unaff_EBX + 0x38))(*(undefined4 *)(unaff_EBX + 0x3c),puVar1,uVar5);
      *(undefined4 *)(unaff_EBX + 0x3c) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
    }
    puVar6 = puVar1;
    puVar7 = local_4;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_4 = (undefined4 *)((int)local_4 + uVar5);
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar4 = (undefined1 *)((int)puVar1 + uVar5);
  }
  *(undefined4 **)(param_1 + 0xc) = local_4;
  *(undefined1 **)(unaff_EBX + 0x30) = puVar4;
  return param_2;
}
