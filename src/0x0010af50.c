/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AB99E76690CC744D4ED1BB100F0D5072ADEE74AE4C8CD03834BC8D63BE40676
 * Entry: 0x0010af50, Ghidra index: 3441, label: FUN_0010af50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010af50(uint param_1,undefined2 param_2)

{
  uint in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  
  if (*(uint *)(unaff_ESI + 0x14) < in_EAX) {
    FUN_002f254a();
  }
  if (-*(int *)(unaff_ESI + 0x14) - 1U <= param_1) {
    FUN_002f258a();
  }
  if (param_1 != 0) {
    uVar4 = *(int *)(unaff_ESI + 0x14) + param_1;
    if (0x7ffffffe < uVar4) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_ESI + 0x18) < uVar4) {
      FUN_00087810(unaff_ESI,uVar4,*(undefined4 *)(unaff_ESI + 0x14));
    }
    else if (uVar4 == 0) {
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        **(undefined2 **)(unaff_ESI + 4) = 0;
        return;
      }
      *(undefined2 *)(unaff_ESI + 4) = 0;
      return;
    }
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)(unaff_ESI + 4);
      puVar1 = puVar5;
      puVar2 = puVar5;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        puVar1 = (undefined4 *)*puVar5;
        puVar2 = (undefined4 *)*puVar5;
      }
      _memmove((void *)((int)puVar1 + (in_EAX + param_1) * 2),(void *)((int)puVar2 + in_EAX * 2),
               (*(int *)(unaff_ESI + 0x14) - in_EAX) * 2);
      puVar2 = puVar5;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        puVar2 = (undefined4 *)*puVar5;
      }
      puVar2 = (undefined4 *)((int)puVar2 + in_EAX * 2);
      for (uVar3 = param_1 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = CONCAT22(param_2,param_2);
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = (uint)((param_1 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)puVar2 = param_2;
        puVar2 = (undefined4 *)((int)puVar2 + 2);
      }
      *(uint *)(unaff_ESI + 0x14) = uVar4;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined2 *)((int)puVar5 + uVar4 * 2) = 0;
    }
  }
  return;
}
