/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 536082F1AD4E647462521EF3BAA9A20663082A089D00CA89565F4A5A222672EA
 * Entry: 0x0004e260, Ghidra index: 667, label: FUN_0004e260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar4 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_0004e570(param_2,puVar4,param_3 + -2);
  for (puVar8 = puVar4;
      ((param_2 < puVar8 && ((float)puVar8[1] <= (float)puVar8[-1])) &&
      ((float)puVar8[-1] <= (float)puVar8[1])); puVar8 = puVar8 + -2) {
  }
  do {
    puVar7 = puVar4 + 2;
    puVar9 = puVar7;
    puVar5 = puVar8;
    if ((param_3 <= puVar7) || ((float)puVar4[3] < (float)puVar8[1])) break;
    pfVar1 = (float *)(puVar4 + 3);
    puVar4 = puVar7;
  } while (*pfVar1 <= (float)puVar8[1]);
joined_r0x0004e2f4:
  do {
    puVar4 = puVar8;
    if (param_3 <= puVar7) {
joined_r0x0004e342:
      for (; param_2 < puVar4; puVar4 = puVar4 + -2) {
        puVar10 = puVar8 + -2;
        puVar6 = puVar5;
        if ((float)puVar5[1] <= (float)puVar8[-1]) {
          if ((float)puVar5[1] < (float)puVar8[-1]) break;
          uVar2 = puVar5[-1];
          uVar3 = puVar5[-2];
          puVar6 = puVar5 + -2;
          *puVar6 = *puVar10;
          puVar5[-1] = puVar8[-1];
          *puVar10 = uVar3;
          puVar8[-1] = uVar2;
        }
        puVar8 = puVar10;
        puVar5 = puVar6;
      }
      if (puVar4 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = puVar5;
          param_1[1] = puVar9;
          return;
        }
        if (puVar9 != puVar7) {
          uVar2 = *puVar5;
          uVar3 = puVar5[1];
          *puVar5 = *puVar9;
          puVar5[1] = puVar9[1];
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
        }
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        *puVar5 = *puVar7;
        puVar5[1] = puVar7[1];
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7 = puVar7 + 2;
        puVar9 = puVar9 + 2;
        puVar8 = puVar4;
        puVar5 = puVar5 + 2;
      }
      else {
        puVar8 = puVar4 + -2;
        if (puVar7 == param_3) {
          puVar6 = puVar5 + -2;
          if (puVar8 != puVar6) {
            uVar2 = *puVar8;
            uVar3 = puVar4[-1];
            *puVar8 = *puVar6;
            puVar4[-1] = puVar5[-1];
            *puVar6 = uVar2;
            puVar5[-1] = uVar3;
          }
          uVar2 = *puVar6;
          uVar3 = puVar5[-1];
          *puVar6 = puVar9[-2];
          puVar5[-1] = puVar9[-1];
          puVar9[-2] = uVar2;
          puVar9[-1] = uVar3;
          puVar9 = puVar9 + -2;
          puVar5 = puVar6;
        }
        else {
          uVar2 = puVar7[1];
          uVar3 = *puVar7;
          *puVar7 = *puVar8;
          puVar7[1] = puVar4[-1];
          puVar7 = puVar7 + 2;
          *puVar8 = uVar3;
          puVar4[-1] = uVar2;
        }
      }
      goto joined_r0x0004e2f4;
    }
    if ((float)puVar7[1] <= (float)puVar5[1]) {
      if ((float)puVar7[1] < (float)puVar5[1]) goto joined_r0x0004e342;
      uVar2 = puVar9[1];
      uVar3 = *puVar9;
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
      puVar9 = puVar9 + 2;
      *puVar7 = uVar3;
      puVar7[1] = uVar2;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}
