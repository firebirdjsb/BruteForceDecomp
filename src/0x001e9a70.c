/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F58555AFE99161463AEF3F0083FCBD6C3200D0C7F31A68D53A370575C17DCE3
 * Entry: 0x001e9a70, Ghidra index: 6862, label: FUN_001e9a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9a70(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar7 = param_2 + (((int)param_3 - (int)param_2 >> 5) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 8;
  FUN_001e9d10(param_2,puVar7,param_3 + -8,param_4);
  puVar3 = puVar7 + 8;
  for (; ((param_2 < puVar7 &&
          (uVar1 = puVar7[-8], uVar2 = *puVar7, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar7 = puVar7 + -8) {
  }
  puVar4 = puVar3;
  param_4 = puVar3;
  puVar5 = puVar7;
  if (puVar3 < param_3) {
    uVar1 = *puVar7;
    do {
      uVar2 = *puVar3;
      puVar4 = puVar3;
      param_4 = puVar3;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar3 = puVar3 + 8;
      puVar4 = puVar3;
      param_4 = puVar3;
    } while (puVar3 < param_3);
  }
joined_r0x001e9af2:
  do {
    if (param_3 <= puVar3) {
joined_r0x001e9b21:
      while (puVar6 = puVar5, param_2 < puVar6) {
        puVar5 = puVar6 + -8;
        if (*puVar7 <= puVar6[-8]) {
          if (*puVar7 < puVar6[-8]) break;
          puVar7 = puVar7 + -8;
          FUN_001e9f00();
          puVar4 = param_4;
        }
      }
      if (puVar6 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar4;
          return;
        }
        puVar5 = puVar4;
        if (puVar4 != puVar3) {
          FUN_001e9f00();
          puVar5 = param_4;
        }
        puVar3 = puVar3 + 8;
        puVar7 = puVar7 + 8;
        FUN_001e9f00();
        puVar4 = puVar5 + 8;
        param_4 = puVar5 + 8;
        puVar5 = puVar6;
      }
      else {
        puVar5 = puVar6 + -8;
        if (puVar3 == param_3) {
          puVar7 = puVar7 + -8;
          puVar6 = puVar4;
          if (puVar5 != puVar7) {
            FUN_001e9f00();
            puVar6 = param_4;
          }
          FUN_001e9f00();
          puVar4 = puVar6 + -8;
          param_4 = puVar6 + -8;
        }
        else {
          puVar3 = puVar3 + 8;
          FUN_001e9f00();
          puVar4 = param_4;
        }
      }
      goto joined_r0x001e9af2;
    }
    if (*puVar3 <= *puVar7) {
      if (*puVar3 < *puVar7) goto joined_r0x001e9b21;
      puVar4 = puVar4 + 8;
      FUN_001e9f00();
      param_4 = puVar4;
    }
    puVar3 = puVar3 + 8;
  } while( true );
}
