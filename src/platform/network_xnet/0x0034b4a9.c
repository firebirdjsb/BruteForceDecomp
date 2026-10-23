/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D12E639A438ABF89CBBAB86CC0F1E4D15C1F822DE2E59DB2AC296730AC9B1C6B
 * Entry: 0x0034b4a9, Ghidra index: 12946, label: FUN_0034b4a9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034b4a9(int param_1,byte *param_2,undefined4 param_3,short *param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint in_ECX;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  
  pbVar5 = param_2;
  if ((3 < param_5) && (param_5 == (ushort)param_4[1])) {
    sVar4 = *param_4;
    if (sVar4 == 0x5300) {
      if (param_5 == 8) {
        *param_2 = *param_2 | 8;
        FUN_0034964a(param_2,0);
        if (param_2 == *(byte **)(in_ECX + 0xae8)) {
          *(undefined4 *)(in_ECX + 0xbbc) = *(undefined4 *)(param_4 + 2);
        }
      }
    }
    else if (sVar4 != 0x5301) {
      if (sVar4 == 0x5309) {
        if (((7 < param_5) && ((param_5 & 3) == 0)) && (param_2 == *(byte **)(in_ECX + 0xae8))) {
          uVar10 = *(uint *)(in_ECX + 0xbb4);
          if ((uVar10 != 0) && (uVar10 <= *(uint *)(param_4 + 2))) {
            *(uint *)(in_ECX + 0xbb4) = 0;
            *(undefined4 *)(in_ECX + 0xbb0) = 0;
          }
          param_5 = param_5 - 8;
          puVar9 = (uint *)(param_4 + 4);
          if (param_5 != 0) {
            *(undefined4 *)(in_ECX + 3000) = param_3;
          }
          puVar3 = (uint *)((int)puVar9 + param_5);
          do {
            do {
              if (param_5 == 0) {
                return;
              }
              if (param_5 < 8) {
                return;
              }
              uVar10 = *puVar9;
              param_1 = 0;
              puVar2 = puVar9 + 1;
              puVar1 = puVar9 + 2;
              for (puVar7 = puVar1; puVar9 = puVar7, puVar7 < puVar3; puVar7 = puVar7 + uVar6) {
                if (*puVar7 == 0) {
                  puVar9 = puVar7 + 1;
                  break;
                }
                uVar6 = (*puVar7 & 3) + 1;
                puVar9 = puVar3;
                if ((uint)((int)puVar3 - (int)puVar7 >> 2) < uVar6) break;
                param_1 = param_1 + uVar6;
              }
              param_5 = (int)puVar1 + ((param_5 - 8) - (int)puVar9);
            } while ((param_1 == 0) ||
                    (puVar7 = (uint *)(in_ECX + 0xaf0), (uint *)(in_ECX + 0xbb0) <= puVar7));
            do {
              if ((*puVar7 == uVar10) && (puVar7[1] == *puVar2)) {
                FUN_003488f2((int)((int)puVar7 + (-0xaf0 - in_ECX)) / 0x30,puVar1,param_1);
                break;
              }
              puVar7 = puVar7 + 0xc;
            } while (puVar7 < (uint *)(in_ECX + 0xbb0));
          } while( true );
        }
      }
      else if (sVar4 == 0x5304) {
        if ((0x17 < param_5) && (param_2 == *(byte **)(in_ECX + 0xae8))) {
          FUN_0034b3c4(param_1,0,in_ECX & 0xffff0000,param_4 + 0xc,param_5 - 0x18);
        }
      }
      else if (sVar4 == 0x5308) {
        FUN_0034fab5(param_1,param_2,param_4,param_5);
      }
      else if (((sVar4 == 0x5306) && (param_5 == 0xc)) && (param_2[2] == 8)) {
        param_2 = (byte *)0x0;
        pbVar8 = pbVar5 + 0xe8;
        while( true ) {
          uVar10 = 8;
          if (*(uint *)(pbVar5 + 0xe0) < 8) {
            uVar10 = *(uint *)(pbVar5 + 0xe0);
          }
          if (uVar10 <= param_2) {
            return;
          }
          if ((*(int *)(param_4 + 2) == *(int *)pbVar8) &&
             (*(int *)(param_4 + 4) == *(int *)(pbVar8 + 4))) break;
          param_2 = (byte *)((int)param_2 + 1);
          pbVar8 = pbVar8 + 8;
        }
        pbVar5[2] = 7;
        FUN_0034c35a(pbVar5 + 0x34,0xffffffff);
        FUN_0034886e();
      }
    }
  }
  return;
}
