/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0457CCCDDEB1664FBAC500FEA7882E09C8DCB9D057B76B60AACEA0BF885E96CD
 * Entry: 0x0016df70, Ghidra index: 4809, label: FUN_0016df70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016df70(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2 + ((int)(param_3 - param_2) / 0x28) * 0x14;
  FUN_0016e560(param_2,uVar6,param_3 - 0x14);
  uVar5 = uVar6 + 0x14;
  for (; ((param_2 < uVar6 &&
          (uVar1 = *(uint *)(uVar6 + 0x10), uVar4 = *(uint *)(uVar6 - 4),
          uVar4 > uVar1 || uVar1 == uVar4)) && (uVar4 <= uVar1)); uVar6 = uVar6 - 0x14) {
  }
  uVar1 = uVar5;
  uVar4 = uVar6;
  if (uVar5 < param_3) {
    uVar2 = *(uint *)(uVar6 + 0x10);
    do {
      uVar3 = *(uint *)(uVar5 + 0x10);
      uVar1 = uVar5;
      if ((uVar2 >= uVar3 && uVar2 != uVar3) || (uVar2 < uVar3)) break;
      uVar5 = uVar5 + 0x14;
      uVar1 = uVar5;
    } while (uVar5 < param_3);
  }
joined_r0x0016dff8:
  do {
    if (param_3 <= uVar1) {
joined_r0x0016e029:
      for (; param_2 < uVar4; uVar4 = uVar4 - 0x14) {
        if (*(uint *)(uVar6 + 0x10) <= *(uint *)(uVar4 - 4)) {
          if (*(uint *)(uVar6 + 0x10) < *(uint *)(uVar4 - 4)) break;
          uVar6 = uVar6 - 0x14;
          FUN_0016e880();
        }
      }
      if (uVar4 == param_2) {
        if (uVar1 == param_3) {
          *param_1 = uVar6;
          param_1[1] = uVar5;
          return;
        }
        if (uVar5 != uVar1) {
          FUN_0016e880();
        }
        uVar5 = uVar5 + 0x14;
        uVar6 = uVar6 + 0x14;
        FUN_0016e880();
        uVar1 = uVar1 + 0x14;
      }
      else {
        uVar4 = uVar4 - 0x14;
        if (uVar1 == param_3) {
          uVar6 = uVar6 - 0x14;
          if (uVar4 != uVar6) {
            FUN_0016e880();
          }
          uVar5 = uVar5 - 0x14;
          FUN_0016e880();
        }
        else {
          FUN_0016e880();
          uVar1 = uVar1 + 0x14;
        }
      }
      goto joined_r0x0016dff8;
    }
    if (*(uint *)(uVar1 + 0x10) <= *(uint *)(uVar6 + 0x10)) {
      if (*(uint *)(uVar1 + 0x10) < *(uint *)(uVar6 + 0x10)) goto joined_r0x0016e029;
      uVar5 = uVar5 + 0x14;
      FUN_0016e880();
    }
    uVar1 = uVar1 + 0x14;
  } while( true );
}
