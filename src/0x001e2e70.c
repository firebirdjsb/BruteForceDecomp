/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32DE4FF2C0E788306C1AB3AC29C2C0154E9F91B8019331D332EA495C7FE0FA9E
 * Entry: 0x001e2e70, Ghidra index: 6758, label: FUN_001e2e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2e70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 7, puVar5 != param_2)) {
    puVar4 = param_1 + 0xe;
    do {
      if ((uint)param_1[6] < 0x10) {
        puVar1 = param_1 + 1;
      }
      else {
        puVar1 = (undefined4 *)param_1[1];
      }
      iVar2 = FUN_000e0b20(0,puVar1,param_1[5]);
      if (iVar2 < 0) {
        if ((param_1 != puVar5) && (puVar5 != puVar4)) {
          FUN_001e3340(param_1,puVar5,puVar4,0,0);
        }
      }
      else {
        puVar1 = puVar5;
        puVar6 = puVar4 + -6;
        while( true ) {
          puVar7 = puVar6 + -7;
          puVar3 = puVar7;
          if (0xf < (uint)puVar6[-2]) {
            puVar3 = (undefined4 *)*puVar7;
          }
          iVar2 = FUN_000e0b20(0,puVar3,puVar6[-3]);
          if (-1 < iVar2) break;
          puVar1 = puVar6 + -8;
          puVar6 = puVar7;
        }
        if ((puVar1 != puVar5) && (puVar5 != puVar4)) {
          FUN_001e3340(puVar1,puVar5,puVar4,0,0);
        }
      }
      puVar5 = puVar5 + 7;
      puVar4 = puVar4 + 7;
    } while (puVar5 != param_2);
  }
  return;
}
