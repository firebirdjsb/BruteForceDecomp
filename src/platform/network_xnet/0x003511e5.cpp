/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA0BE5D0E43B20DD19CDFC839E36018C0E7A1FD1EA58B9FA71CE5F54162C9CC7
 * Entry: 0x003511e5, Ghidra index: 13061, label: FUN_003511e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003511e5(void)

{
  int in_ECX;
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  FUN_00350c50(0,0,0);
  FUN_0034c35a(in_ECX + 0xa60,0xffffffff);
  FUN_00355a89(0);
  FUN_00348dc9();
  pbVar2 = *(byte **)(in_ECX + 0xac4);
  if (pbVar2 != (byte *)0x0) {
    pbVar3 = pbVar2 + (uint)*(byte *)(in_ECX + 0xe) * 0x130;
    for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 0x130) {
      if ((pbVar2[2] != 0) && ((*pbVar2 & 1) == 0)) {
        FUN_0034964a(pbVar2,0);
      }
    }
  }
  FUN_00345eda(0);
  FUN_0034d40c(0);
  FUN_0034c6bc(*(undefined4 *)(in_ECX + 0xa2c));
  puVar4 = (undefined4 *)(in_ECX + 0x8c0);
  for (iVar1 = 0x68; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(in_ECX + 0x268) = 0;
  *(undefined4 *)(in_ECX + 0x26c) = 0;
  *(undefined1 *)(in_ECX + 0x8c0) = 0;
  *(undefined4 *)(in_ECX + 0x8c8) = 0;
  *(undefined4 *)(in_ECX + 0x8cc) = 0;
  *(undefined4 *)(in_ECX + 0x8d0) = 0;
  *(undefined4 *)(in_ECX + 0x8d4) = 0;
  *(undefined4 *)(in_ECX + 0x8d8) = 0;
  *(undefined4 *)(in_ECX + 0x8dc) = 0;
  *(undefined4 *)(in_ECX + 0x8e0) = 0;
  *(undefined4 *)(in_ECX + 0x8e4) = 0;
  *(undefined2 *)(in_ECX + 0x8c6) = 0x20c;
  return;
}
