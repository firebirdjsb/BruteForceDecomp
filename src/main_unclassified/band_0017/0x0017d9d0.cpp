/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5903BEDAC9D1455F051896D6803271544FE3E0113212C3B73F7C7A7912AE70B5
 * Entry: 0x0017d9d0, Ghidra index: 5086, label: FUN_0017d9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 *
FUN_0017d9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_0017de40(param_2,puVar4,param_3 + -1,param_4);
  puVar6 = puVar4 + 1;
  for (; ((param_2 < puVar4 &&
          (uVar1 = *(uint *)puVar4[-1], uVar2 = *(uint *)*puVar4, uVar1 > uVar2 || uVar2 == uVar1))
         && (uVar1 <= uVar2)); puVar4 = puVar4 + -1) {
  }
  puVar7 = puVar6;
  puVar5 = puVar4;
  if (puVar6 < param_3) {
    uVar1 = *(uint *)*puVar4;
    do {
      uVar2 = *(uint *)*puVar6;
      puVar7 = puVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x0017da4b:
  do {
    if (param_3 <= puVar6) {
joined_r0x0017da7c:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        if (*(uint *)*puVar5 <= *(uint *)puVar4[-1]) {
          if (*(uint *)*puVar5 < *(uint *)puVar4[-1]) break;
          uVar3 = puVar5[-1];
          puVar5 = puVar5 + -1;
          *puVar5 = puVar4[-1];
          puVar4[-1] = uVar3;
        }
      }
      if (puVar4 == param_2) {
        if (puVar6 == param_3) {
          *param_1 = puVar5;
          param_1[1] = puVar7;
          return param_1;
        }
        if (puVar7 != puVar6) {
          uVar3 = *puVar5;
          *puVar5 = *puVar7;
          *puVar7 = uVar3;
        }
        uVar3 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar6 == param_3) {
          puVar5 = puVar5 + -1;
          if (puVar4 != puVar5) {
            uVar3 = *puVar4;
            *puVar4 = *puVar5;
            *puVar5 = uVar3;
          }
          uVar3 = *puVar5;
          *puVar5 = puVar7[-1];
          puVar7[-1] = uVar3;
          puVar7 = puVar7 + -1;
        }
        else {
          uVar3 = *puVar6;
          *puVar6 = *puVar4;
          puVar6 = puVar6 + 1;
          *puVar4 = uVar3;
        }
      }
      goto joined_r0x0017da4b;
    }
    if (*(uint *)*puVar6 <= *(uint *)*puVar5) {
      if (*(uint *)*puVar6 < *(uint *)*puVar5) goto joined_r0x0017da7c;
      uVar3 = *puVar7;
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar3;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}
