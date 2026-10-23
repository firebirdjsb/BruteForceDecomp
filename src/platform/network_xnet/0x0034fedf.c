/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7C7F9180D052AB62B3A19F5CD8DFF64C02FEBA04C1072D5B66B46F72D968CF8
 * Entry: 0x0034fedf, Ghidra index: 13044, label: FUN_0034fedf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034fedf(byte *param_1,int param_2,byte param_3,uint param_4,int param_5,undefined4 *param_6,
            uint *param_7,byte *param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  while( true ) {
    do {
      pbVar5 = param_1;
      iVar3 = param_2;
      if (iVar3 == 0) {
        return 0;
      }
      bVar1 = *pbVar5;
      if (bVar1 == 0xff) {
        return 0;
      }
      param_2 = iVar3 + -1;
      param_1 = pbVar5 + 1;
    } while (bVar1 == 0);
    if (iVar3 + -1 == 0) {
      return 0;
    }
    bVar2 = pbVar5[1];
    pbVar5 = pbVar5 + 2;
    if (bVar2 == 0) break;
    uVar4 = (uint)bVar2;
    if (iVar3 - 2U < uVar4) {
      return 0;
    }
    if ((((bVar1 == 0x34) && (param_8 != (byte *)0x0)) && (*param_8 == 0)) && (bVar2 == 1)) {
      *param_8 = *pbVar5;
    }
    if (bVar1 == param_3) {
      uVar4 = (uint)bVar2;
      if (param_5 == 0) {
        bVar6 = uVar4 == param_4;
      }
      else {
        if (uVar4 < param_4) {
          return 0;
        }
        bVar6 = uVar4 % param_4 == 0;
      }
      if (!bVar6) {
        return 0;
      }
      *param_6 = pbVar5;
      if (param_7 != (uint *)0x0) {
        *param_7 = uVar4;
      }
      return 1;
    }
    param_2 = (iVar3 - 2U) - uVar4;
    param_1 = pbVar5 + uVar4;
  }
  return 0;
}
