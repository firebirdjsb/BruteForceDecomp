/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED4D474B72D59ED2AFD04BFFC2EC8C83A70C38F04D7CD2C2AF3B17379D1A910F
 * Entry: 0x00058d90, Ghidra index: 885, label: FUN_00058d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058d90(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 auStack_40 [6];
  undefined4 local_18 [5];
  undefined1 local_4;
  undefined1 local_3;
  
  iVar2 = *in_EAX;
  iVar3 = 0;
  for (uVar5 = 0;
      (iVar1 = *(int *)(iVar2 + 4), iVar1 != 0 &&
      (uVar5 < (uint)((*(int *)(iVar2 + 8) - iVar1) / 0x18))); uVar5 = uVar5 + 1) {
    if ((*(uint *)(*(int *)(iVar3 + iVar1) + 0x24) & 0x1000) == 0) {
      *(undefined2 *)(*(int *)(iVar3 + iVar1) + 0x26) = 0xffff;
    }
    iVar3 = iVar3 + 0x18;
  }
  local_4 = 0;
  local_3 = 0;
  puVar4 = local_18;
  puVar6 = auStack_40;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_000d29b0();
  return;
}
