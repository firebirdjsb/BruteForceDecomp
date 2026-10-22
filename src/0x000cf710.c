/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D78FF7DB757DD7503AC9D92653ACEBF1D438E76FF1D9B3FF61819A43AB41FD16
 * Entry: 0x000cf710, Ghidra index: 2562, label: FUN_000cf710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cf710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_c;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_000cfbd0(param_3 + -1,param_4);
  local_c = puVar6 + 1;
  for (; param_2 < puVar6; puVar6 = puVar6 + -1) {
    pfVar2 = (float *)puVar6[-1];
    pfVar3 = (float *)*puVar6;
    if (((*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
         (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1]) <
         (*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
         (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1])) ||
       ((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
        (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <
        (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
        (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1]))) break;
  }
  puVar5 = local_c;
  puVar1 = local_c;
  puVar7 = puVar6;
  if (local_c < param_3) {
    pfVar2 = (float *)*puVar6;
    do {
      pfVar3 = (float *)*local_c;
      puVar5 = local_c;
      puVar1 = local_c;
      if (((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
           (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <
           (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
           (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1])) ||
         ((*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
          (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1]) <
          (*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
          (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]))) break;
      local_c = local_c + 1;
      puVar5 = local_c;
      puVar1 = local_c;
    } while (local_c < param_3);
  }
joined_r0x000cf889:
  do {
    if (param_3 <= puVar5) {
joined_r0x000cf938:
      for (; param_2 < puVar6; puVar6 = puVar6 + -1) {
        pfVar2 = (float *)puVar6[-1];
        pfVar3 = (float *)*puVar7;
        if ((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
            (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <=
            (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
            (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1])) {
          local_c = puVar1;
          if ((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
              (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <
              (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
              (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1])) break;
          uVar4 = puVar7[-1];
          puVar7 = puVar7 + -1;
          *puVar7 = pfVar2;
          puVar6[-1] = uVar4;
        }
        local_c = puVar1;
      }
      if (puVar6 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = puVar7;
          param_1[1] = local_c;
          return;
        }
        if (local_c != puVar5) {
          uVar4 = *puVar7;
          *puVar7 = *local_c;
          *local_c = uVar4;
        }
        uVar4 = *puVar7;
        *puVar7 = *puVar5;
        local_c = local_c + 1;
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
        puVar1 = local_c;
        puVar7 = puVar7 + 1;
      }
      else {
        puVar6 = puVar6 + -1;
        if (puVar5 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar6 != puVar7) {
            uVar4 = *puVar6;
            *puVar6 = *puVar7;
            *puVar7 = uVar4;
          }
          puVar1 = local_c + -1;
          uVar4 = *puVar7;
          local_c = local_c + -1;
          *puVar7 = *puVar1;
          *local_c = uVar4;
          puVar1 = local_c;
        }
        else {
          uVar4 = *puVar5;
          *puVar5 = *puVar6;
          *puVar6 = uVar4;
          puVar5 = puVar5 + 1;
        }
      }
      goto joined_r0x000cf889;
    }
    pfVar2 = (float *)*puVar7;
    pfVar3 = (float *)*puVar5;
    local_c = puVar1;
    if ((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
        (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <=
        (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
        (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1])) {
      if ((*param_4 - *pfVar3) * (*param_4 - *pfVar3) +
          (param_4[2] - pfVar3[1]) * (param_4[2] - pfVar3[1]) <
          (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
          (param_4[2] - pfVar2[1]) * (param_4[2] - pfVar2[1])) goto joined_r0x000cf938;
      local_c = puVar1 + 1;
      uVar4 = *puVar1;
      *puVar1 = pfVar3;
      *puVar5 = uVar4;
    }
    puVar5 = puVar5 + 1;
    puVar1 = local_c;
  } while( true );
}
