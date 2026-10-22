/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78AA757649FB4E50E883EA83BAFC12E904ADD431E5CD57D170089F18CDFD2093
 * Entry: 0x00384293, Ghidra index: 13643, label: FUN_00384293
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384293(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  pbVar1 = (byte *)FUN_00380fc4();
  if ((*pbVar1 & 2) == 0) {
    if (*(int *)(param_1 + 4) < 0) {
      pbVar1[6] = pbVar1[6] + 1;
      if (3 < pbVar1[6]) {
        *pbVar1 = *pbVar1 | 8;
        FUN_00382571();
        return;
      }
      param_1[0x14] = 4;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
    else {
      uVar2 = *(ushort *)(pbVar1 + 0x3a);
      pbVar1[6] = 0;
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 2) == 0) {
          FUN_003843be(param_2);
          return;
        }
        uVar3 = 1;
        uVar2 = uVar2 & 0xfffd;
      }
      else {
        uVar3 = 0;
        uVar2 = uVar2 & 0xfffe;
      }
      *(ushort *)(pbVar1 + 0x3a) = uVar2;
      param_1 = pbVar1 + 8;
      *param_1 = 0x30;
      pbVar1[9] = 0x40;
      *(code **)(pbVar1 + 0x10) = FUN_0038411c;
      *(undefined4 *)(pbVar1 + 0x14) = param_2;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      pbVar1[0x1a] = 0;
      pbVar1[0x1b] = 0;
      pbVar1[0x20] = 0;
      pbVar1[0x21] = 0;
      pbVar1[0x22] = 0;
      pbVar1[0x23] = 0;
      pbVar1[0x1c] = 0;
      pbVar1[0x1d] = 0;
      pbVar1[0x1e] = 0;
      pbVar1[0x1f] = 0;
      pbVar1[0x24] = 0;
      pbVar1[0x25] = 0;
      pbVar1[0x26] = 0;
      pbVar1[0x30] = 0x20;
      pbVar1[0x31] = 1;
      *(undefined2 *)(pbVar1 + 0x32) = uVar3;
      pbVar1[0x34] = 0;
      pbVar1[0x35] = 0;
      pbVar1[0x36] = 0;
      pbVar1[0x37] = 0;
    }
    FUN_00381379(param_1);
  }
  else {
    FUN_00383ffe(param_2);
  }
  return;
}
