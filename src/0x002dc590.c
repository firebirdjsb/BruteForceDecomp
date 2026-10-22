/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 474C91215308A2599B83E7C7969BBD6C3358A9FE943014F5ED7CAE3ADB71C281
 * Entry: 0x002dc590, Ghidra index: 10301, label: FUN_002dc590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc590(int param_1,undefined4 param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_118 [2];
  uint local_110;
  uint local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_110 = in_EAX + 3U & 0xfffffffc;
  local_118[0] = 0x3089705f;
  FUN_002dc450();
  iVar1 = *(int *)(param_3 + 8);
  uVar3 = iVar1 + 0x1f + local_110 * 4 & 0xffffffe0;
  if (uVar3 < *(uint *)(param_3 + 0xc)) {
    *(uint *)(param_3 + 8) = uVar3;
  }
  else {
    iVar1 = FUN_002bbe20();
  }
  iVar2 = *(int *)(param_3 + 8);
  uVar3 = iVar2 + 0x1f + local_110 * 4 & 0xffffffe0;
  local_108 = iVar1;
  if (uVar3 < *(uint *)(param_3 + 0xc)) {
    *(uint *)(param_3 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_002bbe20();
  }
  iVar1 = *(int *)(param_3 + 8);
  uVar3 = iVar1 + local_110 * in_EAX * 4 + 0x2b & 0xffffffe0;
  local_104 = iVar2;
  if (uVar3 < *(uint *)(param_3 + 0xc)) {
    *(uint *)(param_3 + 8) = uVar3;
  }
  else {
    iVar1 = FUN_002bbe20();
  }
  local_10c = iVar1 + 0xcU & 0xfffffff0;
  puVar4 = *(undefined4 **)(in_ECX + 0x14);
  for (uVar3 = *(uint *)(in_ECX + 8) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_002da060(local_118,in_ECX,param_2);
  FUN_002dc790();
  FUN_002d9e70(local_118);
  iVar1 = FUN_002d9fb0();
  if ((iVar1 != 1) || (iVar1 = FUN_002dc210(local_104,param_2,in_EAX), iVar1 != 1)) {
    iVar1 = 0;
    for (puVar4 = *(undefined4 **)(param_1 + 0x20);
        (puVar4 != (undefined4 *)0x0 && ((int)puVar4[0x19] < 0)); puVar4 = (undefined4 *)*puVar4) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = FUN_002da790(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
                         *(undefined4 *)(in_ECX + 0x14),iVar1,param_3);
    if (iVar1 != 1) {
      return;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *(float *)(*(int *)(in_ECX + 0x14) + iVar1 * 4) =
         *(float *)(in_ECX + 0x18) * *(float *)(*(int *)(in_ECX + 0x14) + iVar1 * 4);
  }
  fVar5 = (float10)FUN_002dcf50(param_1);
  local_fc = (float)fVar5;
  FUN_002dc810(in_ECX,param_1);
  fVar5 = (float10)FUN_002dcf50(param_1);
  local_100 = (float)fVar5;
  fVar5 = (float10)FUN_002dd070();
  if (fVar5 + (float10)local_fc < (float10)local_100) {
    FUN_002dd030();
  }
  else {
    iVar1 = *(ushort *)(param_1 + 0x32) - 1;
    if (-1 < iVar1) {
      do {
        FUN_002baf20(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 4));
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      return;
    }
  }
  return;
}
