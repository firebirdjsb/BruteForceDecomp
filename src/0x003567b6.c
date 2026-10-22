/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6923F5622BA2F5A96D87628AAD94D2C34D636E67E1FA258AFCB9F3594A9F083C
 * Entry: 0x003567b6, Ghidra index: 13143, label: FUN_003567b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003567b6(int *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar3 = param_3;
  puVar9 = param_2;
  piVar2 = param_1;
  uVar5 = param_1[0x15];
  uVar6 = uVar5 & 0x1ff;
  uVar7 = param_3 * 8;
  param_2 = (uint *)param_3;
  param_3 = 1;
  if (*param_1 == 0x2035444d) {
    param_1[0x15] = param_1[0x15] + uVar7;
    param_1[0x16] = param_1[0x16] + (uint)((uint)param_1[0x15] < uVar7) + (uVar3 >> 0x1d);
    uVar5 = uVar5 & 0x1f;
    if (uVar5 != 0) {
      uVar3 = uVar6 >> 5;
      do {
        if (param_2 == (uint *)0x0) break;
        uVar6 = uVar6 + 8;
        param_1[uVar3 + 1] = param_1[uVar3 + 1] | (uint)(byte)*puVar9 << (sbyte)uVar5;
        puVar9 = (uint *)((int)puVar9 + 1);
        param_2 = (uint *)((int)param_2 - 1);
        uVar5 = uVar6 & 0x1f;
      } while (uVar5 != 0);
    }
    do {
      uVar5 = 0x10 - (uVar6 >> 5);
      param_1 = (int *)((uint)param_2 >> 2);
      if (uVar5 <= (uint)param_2 >> 2) {
        param_1 = (int *)uVar5;
      }
      puVar8 = (uint *)(piVar2 + (uVar6 >> 5) + 1);
      param_2 = (uint *)((int)param_2 + (int)param_1 * -4);
      uVar6 = uVar6 + (int)param_1 * 0x20;
      for (; param_1 != (int *)0x0; param_1 = (int *)((int)param_1 - 1)) {
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      if (uVar6 == 0x200) {
        if ((param_3 == 0) || (iVar4 = FUN_00356526(piVar2), iVar4 == 0)) {
          param_3 = 0;
        }
        else {
          param_3 = 1;
        }
        uVar6 = 0;
        puVar8 = puVar8 + -0x10;
      }
    } while (3 < param_2);
    for (; param_2 != (uint *)0x0; param_2 = (uint *)((int)param_2 - 1)) {
      uVar5 = *puVar9;
      bVar1 = (byte)uVar6;
      puVar9 = (uint *)((int)puVar9 + 1);
      uVar6 = uVar6 + 8;
      *puVar8 = *puVar8 | (uint)(byte)uVar5 << (bVar1 & 0x1f);
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}
