/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2CA1F2DC7A95AE85A44EF7294885D97500808412C80C85B0BD5804B8966B4C8
 * Entry: 0x0033f7f6, Ghidra index: 12651, label: FUN_0033f7f6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033f7f6(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  local_8 = 0;
  *(undefined4 **)(param_1 + 8) = puVar3 + 4;
  if (*(undefined4 **)(param_1 + 4) < puVar3 + 4) {
    *(undefined4 **)(param_1 + 8) = puVar3;
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = 0xc000009a;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar1 = (undefined4 *)((param_2 + 3 & 0xfffffffc) + (int)puVar4);
    *(undefined4 **)(param_1 + 8) = puVar1;
    if (*(undefined4 **)(param_1 + 4) < puVar1) {
      *(undefined4 **)(param_1 + 8) = puVar4;
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      local_8 = 0xc000009a;
    }
    else {
      puVar1 = puVar4;
      for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *param_3;
        param_3 = param_3 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      puVar3[2] = param_2;
      puVar3[1] = 0xcd;
      puVar3[3] = *puVar4;
      *puVar3 = *param_4;
      *param_4 = *puVar3;
    }
  }
  return local_8;
}
