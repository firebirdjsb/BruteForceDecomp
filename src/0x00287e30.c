/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C1E293CB334219274D9EA48E6A9E190B1B1C553634129E89793EB98C5632A5B
 * Entry: 0x00287e30, Ghidra index: 9098, label: FUN_00287e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287e30(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      puVar3 = (uint *)(**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7);
      puVar4 = (uint *)(**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1);
      if (*puVar3 < *puVar4) {
        if ((param_1 != puVar7) && (puVar7 != puVar5)) {
          FUN_00288460(param_1,puVar7,puVar5,0,0);
        }
      }
      else {
        puVar3 = (uint *)(**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7);
        piVar1 = (int *)puVar5[-2];
        puVar4 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
        puVar2 = puVar5 + -2;
        if (*puVar3 < *puVar4) {
          do {
            puVar6 = puVar2;
            puVar3 = (uint *)(**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7);
            piVar1 = (int *)puVar6[-1];
            puVar4 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
            puVar2 = puVar6 + -1;
          } while (*puVar3 < *puVar4);
          if ((puVar6 != puVar7) && (puVar7 != puVar5)) {
            FUN_00288460(puVar6,puVar7,puVar5,0,0);
          }
        }
      }
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 != param_2);
  }
  return;
}
