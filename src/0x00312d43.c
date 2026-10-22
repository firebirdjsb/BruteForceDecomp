/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BE52732AE855438568561276FE0B0228E06AAC1454B3C1B6D9E10BAFB403A4D
 * Entry: 0x00312d43, Ghidra index: 11982, label: FUN_00312d43
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00312d43(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_4c [4];
  undefined4 auStack_48 [15];
  uint local_c;
  undefined1 *local_8;
  
  uVar4 = 0;
  uVar1 = FUN_00314c18(in_ECX + 0xc,param_1);
  if (((uVar1 != 0) && ((*(byte *)(in_ECX + 8) & 0x10) == 0)) && (param_2 != 0)) {
    local_8 = local_4c;
    local_c = 0;
    do {
      if (7 < local_c) break;
      uVar5 = FUN_003119ad();
      puVar3 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
      *puVar3 = (int)uVar5;
      auStack_48[local_c * 2] = 0;
      uVar1 = uVar1 & ~(1 << ((byte)*puVar3 & 0x1f));
      local_c = local_c + 1;
    } while (uVar1 != 0);
    FUN_00311c80(&local_c);
    uVar4 = 1;
  }
  uVar2 = DSOUND__XAudioCalculatePitch(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  return uVar4;
}
