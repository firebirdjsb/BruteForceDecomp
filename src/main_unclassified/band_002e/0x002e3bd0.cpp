/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28F47BFBAC304DEDE35BFD0096C45CD172D2C0919F0EFE4D091D181D1420377A
 * Entry: 0x002e3bd0, Ghidra index: 10419, label: FUN_002e3bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e3bd0(int *param_1,uint *param_2,uint *param_3,byte *param_4,char *param_5,byte *param_6,
                byte *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  byte bVar6;
  uint uVar7;
  uint local_4;
  
  pbVar3 = param_4;
  uVar7 = 0;
  *param_1 = 0;
  *param_6 = 0;
  *param_5 = '\0';
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  local_4 = 0;
  if (in_ECX[8] != 0) {
    do {
      if ((*param_3 <= uVar7) ||
         (uVar4 = *(int *)(in_ECX[4] + (((in_ECX[7] - uVar7) - 1) % (uint)in_ECX[5]) * 0xc) +
                  local_4, *param_2 < uVar4)) break;
      uVar7 = uVar7 + 1;
      local_4 = uVar4;
    } while (uVar7 < (uint)in_ECX[8]);
    if (((uVar7 != 0) &&
        (*(uint *)(in_ECX[4] + 4 + ((in_ECX[7] - 1U) % (uint)in_ECX[5]) * 0xc) <
         *(uint *)(in_ECX[4] + 4 + ((in_ECX[7] - uVar7) % (uint)in_ECX[5]) * 0xc))) &&
       (iVar5 = FUN_002e3730(), iVar5 < 0)) {
      return iVar5;
    }
  }
  param_4 = (byte *)0x0;
  if (uVar7 != 0) {
    bVar6 = 0;
    do {
      uVar4 = (((int)param_4 - uVar7) + in_ECX[7]) % (uint)in_ECX[5];
      uVar2 = *(undefined4 *)(in_ECX[4] + uVar4 * 0xc);
      iVar5 = in_ECX[4] + uVar4 * 0xc;
      pbVar3[1] = pbVar3[1] | (char)((uint)uVar2 >> 8) << ((*pbVar3 & 0xf) << 1);
      bVar1 = *pbVar3;
      *pbVar3 = bVar1 + 1;
      pbVar3[(byte)(bVar1 + 1) + 1] = (byte)uVar2;
      *param_7 = *param_7 | (*(byte *)(iVar5 + 9) & 3) << (bVar6 & 0x1f);
      if ((*(char *)(iVar5 + 8) != '\0') &&
         (*param_6 = *param_6 | '\x01' << ((byte)param_4 & 0x1f), *param_5 == '\0')) {
        *param_5 = *(char *)(iVar5 + 8);
      }
      if (*param_1 == 0) {
        *param_1 = *(int *)(iVar5 + 4) + *in_ECX;
      }
      param_4 = (byte *)((int)param_4 + 1);
      bVar6 = bVar6 + 2;
    } while (param_4 < uVar7);
  }
  *param_3 = uVar7;
  *param_2 = local_4;
  return 0;
}
