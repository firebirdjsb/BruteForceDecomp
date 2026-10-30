/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5064F140809E51061A01E521FAD792268AF5E261B8B7FF9C834E4393297B6538
 * Entry: 0x00345408, Ghidra index: 12804, label: FUN_00345408
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345408(uint *param_1,int param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while ((param_5 != 0 && (param_2 != 0))) {
    puVar3 = (undefined4 *)param_1[1];
    uVar1 = *param_1;
    if (param_3 != 0) {
      uVar2 = param_3;
      if (uVar1 <= param_3) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined4 *)((int)puVar3 + uVar2);
      uVar1 = uVar1 - uVar2;
      param_3 = param_3 - uVar2;
    }
    if (uVar1 != 0) {
      if (param_5 < uVar1) {
        uVar1 = param_5;
      }
      param_5 = param_5 - uVar1;
      puVar4 = param_4;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_4 = (undefined4 *)((int)param_4 + uVar1);
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  }
  return;
}
