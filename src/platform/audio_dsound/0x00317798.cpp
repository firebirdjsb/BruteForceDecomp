/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AF0E49BB3E9C8FEF2FF06F56526FD650B0A5EEFB850CFC353E96E9FAAC16DA5
 * Entry: 0x00317798, Ghidra index: 12182, label: FUN_00317798
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317798(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint auStack_24 [8];
  
  uVar6 = 0;
  if ((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x44) = 0;
  }
  iVar5 = *(int *)(in_ECX + 0x78);
  uVar4 = *(uint *)(iVar5 + 0x24);
  if (uVar4 != 0) {
    pbVar7 = (byte *)(iVar5 + 0x28);
    do {
      auStack_24[uVar6] = (uint)*pbVar7;
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 < uVar4);
  }
  if (((*(byte *)(iVar5 + 8) & 0x10) != 0) && (auStack_24[4] == 2)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x44) = 1;
  }
  uVar4 = 0;
  do {
    uVar1 = 0;
    if (7 < uVar6) {
      *param_1 = 0;
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar2 = uVar1;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 + 5;
        uVar4 = uVar4 | auStack_24[uVar2] << (bVar3 & 0x1f);
        uVar1 = uVar2 + 1;
      } while (uVar6 < 0xf);
      *param_1 = uVar4;
      if (uVar1 < 6) {
        uVar6 = uVar2 + 2 + uVar1 * 4;
        do {
          bVar3 = (byte)uVar6;
          uVar6 = uVar6 + 5;
          uVar4 = uVar4 | auStack_24[uVar1] << (bVar3 & 0x1f);
          uVar1 = uVar1 + 1;
        } while (uVar6 < 0x1f);
        *param_1 = uVar4;
      }
      *(ushort *)param_2 = (ushort)*param_2 & 0xfc00;
      uVar6 = *param_2;
      if (uVar1 < 8) {
        iVar5 = uVar1 * 5 + -0x1e;
        do {
          bVar3 = (byte)iVar5;
          iVar5 = iVar5 + 5;
          uVar6 = uVar6 | auStack_24[uVar1] << (bVar3 & 0x1f);
          uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
        *param_2 = uVar6;
      }
      return;
    }
    if (uVar6 == 0) {
LAB_003177fa:
      auStack_24[uVar6] = uVar4;
      uVar6 = uVar6 + 1;
    }
    else {
      do {
        if (uVar4 == auStack_24[uVar1]) break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar6);
      if (uVar6 <= uVar1) goto LAB_003177fa;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}
