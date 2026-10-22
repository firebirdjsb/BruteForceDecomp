/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 650EB47195B41AB4DA93401037E98490A864E822231C535A6E3E3A3AF8C5DF41
 * Entry: 0x000ce390, Ghidra index: 2555, label: FUN_000ce390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ce390(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *in_EDX;
  uint uVar4;
  
  if ((int)*in_EDX < (int)in_EDX[1]) {
    do {
      uVar4 = *in_EDX & 7;
      uVar3 = in_EDX[uVar4 + 2];
      if ((int)uVar3 <= (int)in_EDX[uVar4 + 10]) {
        do {
          uVar1 = *in_EDX;
          if (-1 < (int)uVar3) {
            iVar2 = **(int **)(param_1 + 0x20);
            if (((((int)uVar3 < iVar2) && (-1 < (int)uVar1)) &&
                ((int)uVar1 < (*(int **)(param_1 + 0x20))[1])) &&
               (iVar2 = (iVar2 * uVar1 + uVar3) * 0x40 + *(int *)(param_1 + 0x18), iVar2 != 0)) {
              *(int *)(in_EDX[0x12] + *(int *)in_EDX[0x13] * 4) = iVar2;
              *(int *)in_EDX[0x13] = *(int *)in_EDX[0x13] + 1;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 <= (int)in_EDX[uVar4 + 10]);
      }
      uVar3 = *in_EDX;
      *in_EDX = uVar3 + 1;
    } while ((int)(uVar3 + 1) < (int)in_EDX[1]);
  }
  return;
}
