/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32F36FCE9186D86AD06570268CD2CA5F621D6ADB0B4D7F27883844AB4E05B880
 * Entry: 0x0031786d, Ghidra index: 12183, label: FUN_0031786d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031786d(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  uint local_50 [9];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_c;
  
  bVar5 = false;
  if (((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) != 0) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xb4) + 0x3c) != 2)) {
    iVar3 = *(int *)(in_ECX + 0x70);
    iVar4 = *(int *)(in_ECX + 0x74);
    local_2c = *(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x20);
    local_24 = *(int *)(iVar3 + 0x30) + *(int *)(iVar4 + 4) + *(int *)(iVar3 + 0x28) + local_2c;
    if (-1 < local_24) {
      local_24 = 0;
    }
    local_20 = *(int *)(iVar3 + 0x2c) + *(int *)(iVar4 + 4) + local_2c;
    if (-1 < local_20) {
      local_20 = 0;
    }
    local_28 = *(int *)(iVar3 + 0x34) + *(int *)(iVar4 + 4) + *(int *)(iVar3 + 0x28) + local_2c;
    if (-1 < local_28) {
      local_28 = 0;
    }
    local_1c = *(int *)(iVar4 + 8) + local_2c;
    if (-1 < local_1c) {
      local_1c = 0;
    }
    bVar5 = true;
  }
  uVar6 = *(uint *)(*(int *)(in_ECX + 0x78) + 0x24) / (uint)*(byte *)(in_ECX + 100);
  uVar8 = 0;
  if (*(byte *)(in_ECX + 100) != 0) {
    do {
      local_c = 0;
      do {
        if ((local_c < uVar8 * uVar6) || ((uVar8 + 1) * uVar6 <= local_c)) {
          local_50[local_c] = 0xfff;
        }
        else {
          iVar3 = *(int *)(in_ECX + 0x78);
          bVar2 = *(byte *)(iVar3 + 0x28 + local_c);
          puVar1 = local_50 + local_c;
          uVar7 = -(*(int *)(iVar3 + 0x30 + (uint)bVar2 * 4) + *(int *)(iVar3 + 0x1c));
          *puVar1 = uVar7;
          if (bVar5) {
            if (bVar2 == 2) {
              if (*(int *)(*(int *)(in_ECX + 0x70) + 0x44) == 0) goto LAB_0031799d;
              uVar7 = uVar7 - local_28;
            }
            else if (bVar2 < 6) {
LAB_0031799d:
              uVar7 = uVar7 - local_2c;
            }
            else if (bVar2 < 8) {
              uVar7 = uVar7 - local_24;
            }
            else if (bVar2 < 10) {
              uVar7 = uVar7 - local_20;
            }
            else {
              if (bVar2 != 10) goto LAB_0031799d;
              uVar7 = uVar7 - local_1c;
            }
            *puVar1 = uVar7;
          }
          uVar7 = (*puVar1 << 6) / 100;
          *puVar1 = uVar7;
          if (0xfff < uVar7) {
            *puVar1 = 0xfff;
          }
        }
        local_c = local_c + 1;
      } while (local_c < 8);
      *(uint *)(param_1 + uVar8 * 4) =
           ((local_50[7] & 0xf | local_50[1] << 4) << 0xc | local_50[0] & 0xfff) << 4 |
           local_50[6] & 0xf;
      *(uint *)(param_1 + 0xc + uVar8 * 4) =
           ((local_50[7] & 0xf0 | local_50[3] << 8) << 8 | local_50[2] & 0xfff) << 4 |
           local_50[6] >> 4 & 0xf;
      *(uint *)(param_1 + 0x18 + uVar8 * 4) =
           ((local_50[7] & 0xf00 | local_50[5] << 0xc) << 4 | local_50[4] & 0xfff) << 4 |
           local_50[6] >> 8 & 0xf;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(in_ECX + 100));
  }
  return;
}
