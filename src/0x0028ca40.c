/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45A5CE5B9E16E8CD0643F7BCFE9629F5DE404D0B32B79AF5F54F69FBB06362CA
 * Entry: 0x0028ca40, Ghidra index: 9185, label: FUN_0028ca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0028ca40(void)

{
  int iVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = *(uint *)(in_EAX + 0x54);
  *(undefined4 *)(in_EAX + 4) = 0;
  local_40 = 1;
  if (uVar4 < *(uint *)(in_EAX + 0x58)) {
    iVar3 = uVar4 * 0xc;
    do {
      iVar1 = *(int *)(in_EAX + 0x18);
      local_4 = *(undefined4 *)(iVar3 + -4 + iVar1);
      local_8 = *(undefined4 *)(iVar3 + -8 + iVar1);
      local_c = *(undefined4 *)(iVar3 + -0xc + iVar1);
      local_10 = *(undefined4 *)(iVar3 + 8 + iVar1);
      local_14 = *(undefined4 *)(iVar3 + 4 + iVar1);
      local_18 = *(undefined4 *)(iVar3 + iVar1);
      local_1c = *(undefined4 *)(iVar3 + 0x14 + iVar1);
      local_20 = *(undefined4 *)(iVar3 + 0x10 + iVar1);
      local_24 = *(undefined4 *)(iVar3 + 0xc + iVar1);
      local_28 = *(undefined4 *)(iVar3 + 0x20 + iVar1);
      local_2c = *(undefined4 *)(iVar3 + 0x1c + iVar1);
      local_30 = *(undefined4 *)(iVar3 + 0x18 + iVar1);
      FUN_0028c750(local_40,&local_c,&local_18,&local_24,&local_30,*(undefined4 *)(in_EAX + 4));
      fVar2 = *(float *)(in_EAX + 4) + 0.0;
      local_40 = local_40 + 1;
      *(float *)(in_EAX + 4) = fVar2;
      uVar4 = uVar4 + 1;
      *(float *)(*(int *)(in_EAX + 0x38) + uVar4 * 4) = fVar2;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < *(uint *)(in_EAX + 0x58));
  }
  uVar4 = 1;
  if (1 < local_40) {
    do {
      FUN_0028c8a0(*(undefined4 *)(in_EAX + 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_40);
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = 0;
  **(undefined4 **)(in_EAX + 0x38) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4 + *(int *)(in_EAX + 0x58) * 4) = 0;
  return (float10)*(float *)(in_EAX + 4);
}
