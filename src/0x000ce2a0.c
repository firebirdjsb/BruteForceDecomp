/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CBF2A157DBACB851B0D64CC53864665476443247393D9BE2E38C3F7DD1F2FFC
 * Entry: 0x000ce2a0, Ghidra index: 2554, label: FUN_000ce2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ce2a0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)*in_EAX <= (int)(param_3 - 8)) {
    do {
      uVar4 = *in_EAX & 7;
      uVar3 = in_EAX[uVar4 + 2];
      if ((int)uVar3 <= (int)in_EAX[uVar4 + 10]) {
        do {
          uVar1 = *in_EAX;
          if (-1 < (int)uVar3) {
            iVar2 = **(int **)(param_1 + 0x20);
            if (((((int)uVar3 < iVar2) && (-1 < (int)uVar1)) &&
                ((int)uVar1 < (*(int **)(param_1 + 0x20))[1])) &&
               (iVar2 = (iVar2 * uVar1 + uVar3) * 0x40 + *(int *)(param_1 + 0x18), iVar2 != 0)) {
              *(int *)(in_EAX[0x12] + *(int *)in_EAX[0x13] * 4) = iVar2;
              *(int *)in_EAX[0x13] = *(int *)in_EAX[0x13] + 1;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 <= (int)in_EAX[uVar4 + 10]);
      }
      in_EAX[uVar4 + 2] = 0x7fffffff;
      in_EAX[uVar4 + 10] = 0x80000000;
      uVar3 = *in_EAX;
      *in_EAX = uVar3 + 1;
    } while ((int)(uVar3 + 1) <= (int)(param_3 - 8));
  }
  uVar3 = in_EAX[1];
  while ((int)uVar3 <= (int)param_3) {
    uVar3 = in_EAX[1];
    in_EAX[(uVar3 & 7) + 2] = 0x7fffffff;
    in_EAX[(uVar3 & 7) + 10] = 0x80000000;
    uVar3 = in_EAX[1] + 1;
    in_EAX[1] = uVar3;
  }
  param_3 = param_3 & 7;
  uVar3 = in_EAX[param_3 + 2];
  if ((int)param_2 < (int)in_EAX[param_3 + 2]) {
    uVar3 = param_2;
  }
  in_EAX[param_3 + 2] = uVar3;
  if ((int)in_EAX[param_3 + 10] < (int)param_2) {
    in_EAX[param_3 + 10] = param_2;
    return;
  }
  in_EAX[param_3 + 10] = in_EAX[param_3 + 10];
  return;
}
