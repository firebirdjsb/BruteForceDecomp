/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C5665E4ED730294AFF630443F1A21C06147B424CA1281A20A9500F309C29B2D
 * Entry: 0x0034dc1c, Ghidra index: 13009, label: FUN_0034dc1c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte * FUN_0034dc1c(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *in_ECX;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_c;
  byte *local_8;
  
  local_c = (byte *)0x0;
  bVar7 = param_1 <= param_3;
  local_8 = param_3;
  param_3 = in_ECX;
  if (bVar7) {
    while (local_8 < param_2) {
      bVar1 = *local_8;
      pbVar3 = local_8;
      while( true ) {
        pbVar3 = pbVar3 + 1;
        if ((bVar1 & 0xc0) == 0xc0) break;
        if (((bVar1 & 0xc0) != 0) ||
           (uVar4 = (uint)bVar1, (int)(in_ECX + (0xff - (int)param_3)) <= (int)uVar4))
        goto LAB_0034dc3a;
        *param_3 = bVar1;
        pbVar6 = param_3 + 1;
        if (bVar1 == 0) {
          if (local_c != (byte *)0x0) {
            return local_c;
          }
          return pbVar3;
        }
        param_3 = pbVar6 + uVar4;
        pbVar5 = pbVar3;
        for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar6 = pbVar6 + 4;
        }
        pbVar3 = pbVar3 + uVar4;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar6 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        }
        bVar1 = *pbVar3;
      }
      if (param_2 == pbVar3) break;
      if (local_c == (byte *)0x0) {
        local_c = pbVar3 + 1;
      }
      param_2 = local_8;
      local_8 = param_1 + (CONCAT11(bVar1,*pbVar3) & 0x3fff);
      if (param_1 + (CONCAT11(bVar1,*pbVar3) & 0x3fff) < param_1) break;
    }
  }
LAB_0034dc3a:
  *in_ECX = 0;
  return (byte *)0x0;
}
