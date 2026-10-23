/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68BF363CEB14FF51CADDC8C7A154D17A14E8148B19D2CBE34C8ADD49BD136D36
 * Entry: 0x002ed127, Ghidra index: 10683, label: FUN_002ed127
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8d5c;
extern uint32_t DAT_004a8d60;
byte * FUN_002ed127(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = param_1;
  if (DAT_004a8d5c == 0) {
    param_1 = (byte *)_strncpy((char *)param_1,(char *)param_2,param_3);
  }
  else {
    do {
      while( true ) {
        pbVar3 = pbVar6;
        if (param_3 == 0) {
          return param_1;
        }
        bVar1 = *param_2;
        uVar4 = param_3 - 1;
        bVar2 = *(byte *)((int)&DAT_004a8d60 + bVar1 + 1);
        *pbVar3 = bVar1;
        if ((bVar2 & 4) != 0) break;
        pbVar6 = pbVar3 + 1;
        param_2 = param_2 + 1;
        param_3 = uVar4;
        if (bVar1 == 0) goto LAB_002ed17b;
      }
      if (uVar4 == 0) {
        *pbVar3 = 0;
        return param_1;
      }
      bVar1 = param_2[1];
      uVar4 = param_3 - 2;
      pbVar3[1] = bVar1;
      pbVar6 = pbVar3 + 2;
      param_2 = param_2 + 2;
      param_3 = uVar4;
    } while (bVar1 != 0);
    *pbVar3 = 0;
LAB_002ed17b:
    if (uVar4 != 0) {
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar6 = 0;
        pbVar6 = pbVar6 + 1;
      }
    }
  }
  return param_1;
}
