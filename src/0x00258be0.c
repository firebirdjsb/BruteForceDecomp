/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 686798E2B9166BBB4571F850022CD1045DFB1B2E8291583E715E23D1BCF57DFD
 * Entry: 0x00258be0, Ghidra index: 8484, label: FUN_00258be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00258be0(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = param_1 + 4;
  uVar6 = *puVar2;
  uVar5 = 0;
  uVar4 = 0x7fffffff;
  do {
    if ((uVar6 == 0) || (uVar5 != 0)) {
      return uVar5;
    }
    uVar3 = uVar4;
    if (param_2 <= *puVar2) {
      for (uVar6 = puVar2[1]; (uVar3 = uVar4, *param_1 <= uVar6 && (uVar6 < param_1[1]));
          uVar6 = *(uint *)(uVar6 + 0xc)) {
        uVar3 = (*(uint *)(uVar6 + 0x10) & 0x3ffffff) - param_2;
        if ((-1 < (int)uVar3) &&
           ((((int)uVar3 < (int)uVar4 &&
             (uVar1 = ((uVar6 + 0xf + param_3) / param_3) * param_3 - (uVar6 + 0x10), uVar1 <= uVar3
             )) && (*param_4 = uVar1, uVar4 = uVar3, uVar5 = uVar6, uVar3 == 0)))) break;
      }
    }
    uVar6 = puVar2[2];
    puVar2 = puVar2 + 2;
    uVar4 = uVar3;
  } while( true );
}
