/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26D11AAA5A909F6CE31C5562B34DC5CB2F01EF3D627B363B8B5B0B8291F664D0
 * Entry: 0x00349552, Ghidra index: 12916, label: FUN_00349552
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349552(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int in_ECX;
  undefined1 local_53c [1300];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pbVar3 = param_1;
  param_1[2] = 8;
  if ((*param_1 >> 2 & 1) == 0) {
    bVar4 = *(byte *)(in_ECX + 0x38);
  }
  else {
    bVar4 = *(byte *)(in_ECX + 0x3a);
  }
  param_1[3] = bVar4;
  if ((*param_1 >> 2 & 1) == 0) {
    bVar4 = *(byte *)(in_ECX + 0x39);
  }
  else {
    bVar4 = *(byte *)(in_ECX + 0x3b);
  }
  FUN_0034c35a(param_1 + 0x34,*(int *)(in_ECX + 0x1d8) + (uint)bVar4 * 5);
  iVar5 = thunk_FUN_0033378c(*(undefined4 *)(pbVar3 + 0xc0));
  if (iVar5 != 0) {
    local_10 = *(undefined4 *)(iVar5 + 0xd8);
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    param_1 = (byte *)0x514;
    iVar5 = FUN_0033387a(*(undefined4 *)(pbVar3 + 0xc0),&local_c,&local_28,0x14,local_53c,&param_1);
    if (iVar5 != 0) {
      puVar1 = (uint *)(pbVar3 + 0xe0);
      uVar2 = *puVar1;
      *(undefined4 *)(pbVar3 + (uVar2 & 7) * 8 + 0xe8) = local_c;
      *(undefined4 *)(pbVar3 + (uVar2 & 7) * 8 + 0xec) = local_8;
      *puVar1 = *puVar1 + 1;
      FUN_00349366(pbVar3,0x5305,&local_10,0xc,local_53c,param_1);
    }
  }
  return;
}
