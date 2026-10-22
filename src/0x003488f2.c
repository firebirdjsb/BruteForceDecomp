/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E94DBE4F475A86F6DCFB26C2CA4C4294E0DC80923A7E39E14C8CFB7349427FF1
 * Entry: 0x003488f2, Ghidra index: 12903, label: FUN_003488f2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003488f2(uint param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  
  KeRaiseIrqlToDpcLevel();
  if (param_1 < 4) {
    iVar1 = param_1 * 0x30 + 0xaf0 + in_ECX;
    bVar3 = false;
    param_1 = param_3;
    if (param_3 != 0) {
      do {
        uVar2 = *param_2;
        uVar4 = uVar2 >> 2 & 0x1f;
        puVar8 = (uint *)(iVar1 + 8 + uVar4 * 4);
        uVar5 = (uVar2 & 3) + 1;
        if (param_1 < uVar5) break;
        if ((((uVar2 & 0xffffff00) != 0) && (uVar5 + uVar4 < 4)) &&
           (uVar4 = uVar5, puVar6 = param_2, (*puVar8 & 0xffffff00) < (uVar2 & 0xffffff00))) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          bVar3 = true;
        }
        param_1 = param_1 - uVar5;
        param_2 = param_2 + uVar5;
      } while (param_1 != 0);
      if ((bVar3) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        KeSetEvent(iVar1,1,0);
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  KfLowerIrql();
  return uVar7;
}
