/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4EF156E02A304C7082B70EB45EF8D2C845656CA634C022E4B337B6521FC75CA
 * Entry: 0x00082c10, Ghidra index: 1535, label: FUN_00082c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00082c10(undefined4 param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x210))();
  iVar4 = FUN_000782c0(4);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0xc);
    if (iVar1 == 1) {
      uVar5 = (uint)*(float *)(iVar4 + 4);
    }
    else if (iVar1 == 2) {
      uVar5 = *(uint *)(iVar4 + 4);
    }
    else if (iVar1 == 3) {
      uVar5 = (uint)*(byte *)(iVar4 + 4);
    }
    else {
      uVar5 = 0;
    }
    *param_2 = uVar5;
    iVar4 = FUN_000782c0(4);
    if (iVar4 != 0) {
      uVar5 = FUN_00077e00(iVar4);
      param_2[1] = uVar5;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      bVar2 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ ((byte)param_2[2] ^ bVar2) & 1;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 1 ^ (byte)param_2[2]) & 2;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 2 ^ (byte)param_2[2]) & 4;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 3 ^ (byte)param_2[2]) & 8;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 4 ^ (byte)param_2[2]) & 0x10;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 5 ^ (byte)param_2[2]) & 0x20;
    }
    iVar4 = FUN_000782c0(5);
    if (iVar4 != 0) {
      cVar3 = FUN_00077e40(iVar4);
      *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (cVar3 << 6 ^ (byte)param_2[2]) & 0x40;
    }
    iVar4 = FUN_000782c0(5);
    uVar7 = 0;
    if (iVar4 != 0) {
      uVar6 = FUN_00077e40(iVar4);
      uVar7 = (undefined3)((uint)uVar6 >> 8);
      *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x7f | (char)uVar6 << 7;
    }
    return CONCAT31(uVar7,1);
  }
  return 0;
}
