/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2A978BC65918E287B23D704BB123B94F08F3B63DC190082F7FDBB40E31D12B2
 * Entry: 0x000aae70, Ghidra index: 2038, label: FUN_000aae70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000aae70(uint param_1,undefined4 *param_2,uint param_3)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = *(uint *)(in_EAX + 0x18);
  if (uVar4 < 8) {
    puVar2 = (undefined4 *)(in_EAX + 4);
  }
  else {
    puVar2 = *(undefined4 **)(in_EAX + 4);
  }
  if (puVar2 <= param_2) {
    puVar2 = (undefined4 *)(in_EAX + 4);
    puVar5 = puVar2;
    if (7 < uVar4) {
      puVar5 = (undefined4 *)*puVar2;
    }
    if (param_2 < (undefined4 *)((int)puVar5 + *(int *)(in_EAX + 0x14) * 2)) {
      if (7 < uVar4) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_000ab0d0(param_1,in_EAX,(int)param_2 - (int)puVar2 >> 1);
      return;
    }
  }
  if (*(uint *)(in_EAX + 0x14) < param_1) {
    FUN_002f254a();
  }
  if (-*(int *)(in_EAX + 0x14) - 1U <= param_3) {
    FUN_002f258a();
  }
  if (param_3 != 0) {
    uVar4 = *(int *)(in_EAX + 0x14) + param_3;
    if (0x7ffffffe < uVar4) {
      FUN_002f258a();
    }
    if (*(uint *)(in_EAX + 0x18) < uVar4) {
      FUN_00087810(in_EAX,uVar4,*(undefined4 *)(in_EAX + 0x14));
    }
    else if (uVar4 == 0) {
      *(undefined4 *)(in_EAX + 0x14) = 0;
      if (7 < *(uint *)(in_EAX + 0x18)) {
        **(undefined2 **)(in_EAX + 4) = 0;
        return;
      }
      *(undefined2 *)(in_EAX + 4) = 0;
      return;
    }
    if (uVar4 != 0) {
      puVar2 = (undefined4 *)(in_EAX + 4);
      puVar1 = puVar2;
      puVar5 = puVar2;
      if (7 < *(uint *)(in_EAX + 0x18)) {
        puVar1 = (undefined4 *)*puVar2;
        puVar5 = (undefined4 *)*puVar2;
      }
      _memmove((void *)((int)puVar1 + (param_1 + param_3) * 2),(void *)((int)puVar5 + param_1 * 2),
               (*(int *)(in_EAX + 0x14) - param_1) * 2);
      if (7 < *(uint *)(in_EAX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      puVar2 = (undefined4 *)((int)puVar2 + param_1 * 2);
      for (uVar3 = (param_3 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = param_3 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)(in_EAX + 0x14) = uVar4;
      if (7 < *(uint *)(in_EAX + 0x18)) {
        *(undefined2 *)(*(int *)(in_EAX + 4) + uVar4 * 2) = 0;
        return;
      }
      *(undefined2 *)(in_EAX + 4 + uVar4 * 2) = 0;
    }
  }
  return;
}
