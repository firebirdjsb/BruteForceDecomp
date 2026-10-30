/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CC2D8CF03D85EAD70743FDD8F6F1B4CA8A18382CAF92DA86A309998B6906EAF
 * Entry: 0x00349181, Ghidra index: 12912, label: FUN_00349181
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349181(int param_1)

{
  undefined2 *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_38 [20];
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = in_ECX;
  if (*(int *)(in_ECX + 0xae0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = thunk_FUN_0033378c(*(undefined4 *)(param_1 + 0xc0));
  }
  if (iVar4 != 0) {
    local_18 = iVar4 + 0xc0;
    local_14 = (undefined4 *)(iVar4 + 0x60);
    iVar8 = *(int *)(iVar4 + 0xd4);
    local_c = *(int *)(iVar4 + 0xd8);
    local_1c = iVar8 + 4;
    local_24 = -(uint)(iVar8 + 0x84U < 0x534) & 0x534U - (iVar8 + 0x80);
    local_10 = (int *)FUN_0034cb5a(0x7154454e,0x40003,local_24 + 4 + iVar8 + 0x80,0,0,0);
    if (local_10 != (int *)0x0) {
      iVar4 = *local_10;
      puVar1 = (undefined2 *)(iVar4 + 0x20);
      FUN_00347fe3(local_10,*(undefined4 *)(param_1 + 0xb8),0x11);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(local_8 + 0x268);
      *(undefined2 *)(iVar4 + 0x14) = *(undefined2 *)(local_8 + 0x8c6);
      *(undefined2 *)(iVar4 + 0x16) = 0x20c;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *puVar1 = 0x5802;
      *(undefined2 *)(iVar4 + 0x22) = 0x18;
      *(undefined2 *)(iVar4 + 0x24) = 0;
      *(undefined2 *)(iVar4 + 0x26) = 0;
      if (*(int *)(local_8 + 0xae8) == param_1) {
        *(undefined2 *)(iVar4 + 0x26) = 1;
      }
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 4);
      *(int *)(iVar4 + 0x34) = local_c;
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_1 + 0x48);
      *(undefined2 *)(iVar4 + 0x38) = 0x5880;
      *(undefined2 *)(iVar4 + 0x3a) = 100;
      puVar9 = local_14;
      puVar10 = (undefined4 *)(iVar4 + 0x3c);
      for (iVar8 = 0x18; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar7 = (undefined2 *)(iVar4 + 0x9c);
      XcHMAC(local_18,0x10,puVar1,(int)puVar7 - (int)puVar1,0,0,local_38);
      iVar8 = local_1c;
      local_c = local_1c + -4;
      iVar5 = FUN_0033387a(*(undefined4 *)(param_1 + 0xc0),&local_20,local_38,0x14,iVar4 + 0xa0,
                           &local_c);
      if (iVar5 != 0) {
        puVar2 = (uint *)(param_1 + 0xe0);
        uVar6 = *puVar2;
        *(undefined4 *)(param_1 + 0xe8 + (uVar6 & 7) * 8) = local_20;
        *(int *)(param_1 + 0xec + (uVar6 & 7) * 8) = local_1c;
        *puVar2 = *puVar2 + 1;
        *puVar7 = 0x5882;
        sVar3 = (short)(local_c + 4U);
        *(short *)(iVar4 + 0x9e) = sVar3;
        if (local_24 == 0) {
          *(short *)(local_10 + 1) = (short)local_10[1] + (sVar3 - (short)iVar8);
        }
        else {
          uVar6 = local_c + 4U & 0xffff;
          iVar4 = local_24 + (iVar8 - uVar6);
          puVar7 = (undefined2 *)(uVar6 + (int)puVar7);
          puVar7[1] = (short)iVar4;
          *puVar7 = 0x5886;
          FUN_0034c7e5(puVar7 + 2,iVar4 + -4);
        }
        FUN_00348b9a(local_10,0);
      }
    }
  }
  return;
}
