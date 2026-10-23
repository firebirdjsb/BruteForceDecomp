/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68BB004F6F6E3425B301652056B1E62EEC935A43D1ADAB4C5CF61CC0A0000BA2
 * Entry: 0x0031b3c5, Ghidra index: 12296, label: FUN_0031b3c5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031b3c5(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0031b398(&local_c);
  uVar7 = 0;
  if (param_5 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    local_14 = *param_1;
    local_10 = param_1[1];
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1;
      *(byte *)((int)&local_14 + uVar5) =
           ((byte *)((int)&local_c + uVar5))[param_2 - (int)&local_c] ^
           *(byte *)((int)&local_c + uVar5);
      uVar5 = uVar6;
    } while (uVar6 < 8);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_14;
      param_1[1] = local_10;
    }
  }
  FUN_0031b31f(local_c,local_8,0,0);
  if (param_5 != 0) {
    param_2 = param_2 + 8;
    param_3 = param_3 - 8;
  }
  if (param_3 != 0) {
    param_5 = param_2 - param_4;
    do {
      bVar2 = *(byte *)((int)&local_c + (uVar7 & 7));
      cVar3 = *(char *)((int)&local_14 + (uVar7 & 7));
      pbVar1 = (byte *)(uVar7 + param_4);
      bVar4 = pbVar1[param_5];
      FUN_0031b31f(0,0,(int)&param_2 + 3,1);
      uVar7 = uVar7 + 1;
      *pbVar1 = bVar2 ^ param_2._3_1_ ^ bVar4 - cVar3 * bVar2;
    } while (uVar7 < param_3);
  }
  return 0;
}
