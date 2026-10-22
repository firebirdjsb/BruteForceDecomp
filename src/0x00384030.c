/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77B347EBAF88BA1A9DDC28B159942D054DAEAABA832A1365EE2676C20E0D9326
 * Entry: 0x00384030, Ghidra index: 13639, label: FUN_00384030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384030(undefined1 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_00380fc4();
  if ((*pbVar2 & 2) == 0) {
    if (*(int *)(param_1 + 4) < 0) {
      *pbVar2 = *pbVar2 | 8;
      FUN_00382571();
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
      *param_1 = 0x18;
      param_1[1] = 5;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pbVar2 + 0x3c);
      *(undefined4 *)(param_1 + 0x14) = 4;
      FUN_00381379(param_1);
      *param_1 = 0x28;
      param_1[1] = 0x41;
      *(undefined1 **)(param_1 + 8) = &LAB_003841c7;
      *(undefined4 *)(param_1 + 0xc) = param_2;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pbVar2 + 0x3c);
      *(byte **)(param_1 + 0x18) = pbVar2 + 0x38;
      bVar1 = pbVar2[7];
      param_1[0x1e] = 0;
      *(uint *)(param_1 + 0x14) = (uint)bVar1;
      param_1[0x1c] = 2;
      param_1[0x1d] = 1;
      FUN_00381379(param_1);
    }
  }
  else {
    FUN_00383ffe(param_2);
  }
  return;
}
