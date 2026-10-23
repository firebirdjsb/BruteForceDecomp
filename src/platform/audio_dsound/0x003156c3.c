/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F18D04F013E94C1F4931AE21CC65C1B03A96A42B2AFE6B60B778596D1EA07CE
 * Entry: 0x003156c3, Ghidra index: 12104, label: FUN_003156c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003156c3(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint *puVar4;
  uint *puVar5;
  undefined1 local_20 [8];
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar1 = **(int **)(*(int *)(in_ECX + 8) + 0x10);
  puVar4 = (uint *)(iVar1 + 0x818 + (*(int *)(iVar1 + 0x80c) + *(int *)(iVar1 + 0x804)) * 4);
  local_14 = (*puVar4 - 1) * 0x20 + 0x28;
  local_18 = in_ECX;
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_00314937(*(int *)(in_ECX + 0x20));
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  iVar2 = FUN_003148cf(0x626f5344,local_14,1);
  *(int *)(in_ECX + 0x20) = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0x8007000e;
  }
  else {
    uVar3 = FUN_0031b247(puVar4[1]);
    if (-1 < (int)uVar3) {
      local_8 = iVar1 + 0x818;
      local_c = local_14 + (int)puVar4;
      FUN_0031b398(local_20);
      uVar3 = FUN_0031b3c5(local_20,local_c,*puVar4 << 3,local_c,0);
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0xffff | 0x80070000;
      }
      if (-1 < (int)uVar3) {
        local_10 = 0;
        if (*puVar4 != 0) {
          puVar5 = puVar4 + 2;
          do {
            uVar3 = FUN_0031b3c5(local_c,local_8,puVar5[1],local_8,0);
            if (0 < (int)uVar3) {
              uVar3 = uVar3 & 0xffff | 0x80070000;
            }
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            local_8 = local_8 + puVar5[1];
            iVar2 = *(int *)(*(int *)(local_18 + 0xc) + 4);
            puVar5[4] = puVar5[4] + 0xfe836000;
            local_c = local_c + 8;
            *puVar5 = *puVar5 + iVar2 + -0x17c6818;
            puVar5[2] = puVar5[2] + (-0x5f4186 - *(int *)(iVar1 + 0x804)) * 4;
            puVar5[6] = puVar5[6] + *(int *)(*(int *)(local_18 + 8) + 0x14) + -0xc000;
            local_10 = local_10 + 1;
            in_ECX = local_18;
            puVar5 = puVar5 + 8;
          } while (local_10 < *puVar4);
        }
        puVar5 = *(uint **)(in_ECX + 0x20);
        for (uVar3 = local_14 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (local_14 = local_14 & 3; local_14 != 0; local_14 = local_14 - 1) {
          *(char *)puVar5 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        *(int *)(iVar1 + 0x810) = 3;
        do {
        } while (*(int *)(iVar1 + 0x810) != 0);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
