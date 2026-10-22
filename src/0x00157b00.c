/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5B0ECA4F2A4FEED1FFB424A4BFA35839090F0B4D00E1A8CF2594BA01447FEE2
 * Entry: 0x00157b00, Ghidra index: 4488, label: FUN_00157b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00157b00(void)

{
  short *psVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_400 [256];
  
  psVar1 = (short *)(in_EAX + 0x106);
  *psVar1 = 0;
  FUN_00157aa0(local_400,psVar1,*(undefined4 *)(in_EAX + 0x6c));
  if (1 < *psVar1) {
    puVar2 = (undefined4 *)thunk_FUN_002ea01d((int)*psVar1 << 2);
    *(undefined4 **)(in_EAX + 0x108) = puVar2;
    puVar5 = local_400;
    for (uVar3 = (int)*psVar1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return;
}
