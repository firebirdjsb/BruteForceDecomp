/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F5EBF240BAFF4EE4556FB2500B8D513DD24264800C9DD1B5C4947184F192380
 * Entry: 0x000fb6e0, Ghidra index: 3133, label: FUN_000fb6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fb6e0(uint param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_ESI;
  
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
      if (*(uint *)(unaff_ESI + 0x18) < 8) {
        *(undefined2 *)(unaff_ESI + 4) = 0;
        return;
      }
      **(undefined2 **)(unaff_ESI + 4) = 0;
      return;
    }
    if (uVar4 != 0) {
      puVar3 = (undefined4 *)(unaff_ESI + 4);
      puVar1 = puVar3;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        puVar1 = (undefined4 *)*puVar3;
      }
      puVar1 = (undefined4 *)((int)puVar1 + *(int *)(unaff_ESI + 0x14) * 2);
      for (uVar2 = param_1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = CONCAT22(param_2,param_2);
        puVar1 = puVar1 + 1;
      }
      for (uVar2 = (uint)((param_1 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar1 = param_2;
        puVar1 = (undefined4 *)((int)puVar1 + 2);
      }
      *(uint *)(unaff_ESI + 0x14) = uVar4;
      if (7 < *(uint *)(unaff_ESI + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)((int)puVar3 + uVar4 * 2) = 0;
    }
  }
  return;
}
