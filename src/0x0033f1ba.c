/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2514F74F0B089A129DF72745D4EF03F101273C513AF46C8859010BC21680C98
 * Entry: 0x0033f1ba, Ghidra index: 12640, label: FUN_0033f1ba
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033f1ba(uint *param_1,uint3 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint3 *puVar5;
  bool bVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  short local_8;
  undefined2 local_6;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  iVar3 = 7;
  bVar6 = true;
  local_c = 0x10000;
  puVar4 = &local_14;
  puVar5 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = (short)*puVar4 == (short)*puVar5;
    puVar4 = (uint *)((int)puVar4 + 2);
    puVar5 = (uint3 *)((int)puVar5 + 2);
  } while (bVar6);
  if (!bVar6) {
    iVar3 = 7;
    bVar6 = true;
    local_14 = 0x10107b2;
    puVar4 = &local_14;
    puVar5 = param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = (short)*puVar4 == (short)*puVar5;
      puVar4 = (uint *)((int)puVar4 + 2);
      puVar5 = (uint3 *)((int)puVar5 + 2);
    } while (bVar6);
    if (!bVar6) {
      local_6 = 0;
      local_14 = (uint)*param_2;
      local_10 = (uint)CONCAT12((char)param_2[1],(ushort)*(byte *)((int)param_2 + 3));
      local_8 = (short)param_2[2];
      local_c = (uint)CONCAT12(*(undefined1 *)((int)param_2 + 6),(ushort)*(byte *)((int)param_2 + 5)
                              );
      RtlTimeFieldsToTime(&local_14,param_1);
      uVar2 = param_3 * 10;
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar2;
      param_1[1] = param_1[1] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar1,uVar2);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
