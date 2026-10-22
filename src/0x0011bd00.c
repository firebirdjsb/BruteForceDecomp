/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB9AD5146EFCA4744C2DF60951C60400506B76B38587FAA2819CE8D2ED17E77B
 * Entry: 0x0011bd00, Ghidra index: 3614, label: FUN_0011bd00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0011bd00(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (((*(byte *)(param_1 + 0x70) & 1) != 0) &&
     (fVar1 = 2.0 / *(float *)(*(int *)(param_1 + 8) + 0xc5c),
     *(float *)(param_1 + 0x1a8) < fVar1 + 0.3)) {
    if (*(int *)(param_1 + 0x734) == 3) {
      return 0;
    }
    if (*(int *)(param_1 + 0x734) != 1) {
      *(undefined4 *)(param_1 + 0x734) = 1;
      *(float *)(param_1 + 0x73c) = fVar1;
      if (*(int *)(param_1 + 0x734) == 2) {
        *(undefined4 *)(param_1 + 0x738) = 0x3f800000;
      }
      else if (*(int *)(param_1 + 0x734) == 3) {
        *(undefined4 *)(param_1 + 0x738) = 0;
      }
    }
  }
  if (*(float *)(param_1 + 0x73c) <= 1.1920929e-07) {
    param_2 = 1.0;
  }
  else {
    param_2 = param_2 / *(float *)(param_1 + 0x73c);
  }
  if (*(int *)(param_1 + 0x734) == 0) {
    *(float *)(param_1 + 0x738) = param_2 + *(float *)(param_1 + 0x738);
    if (1.0 <= *(float *)(param_1 + 0x738)) {
      *(undefined4 *)(param_1 + 0x734) = 2;
    }
  }
  else if ((*(int *)(param_1 + 0x734) == 1) &&
          (*(float *)(param_1 + 0x738) = *(float *)(param_1 + 0x738) - param_2,
          *(float *)(param_1 + 0x738) < 0.0 != (*(float *)(param_1 + 0x738) == 0.0))) {
    *(undefined4 *)(param_1 + 0x734) = 3;
  }
  fVar1 = *(float *)(param_1 + 0x738);
  fVar2 = fVar1;
  if (fVar1 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x738) = fVar2;
  return CONCAT31((int3)((uint)fVar1 >> 8),1);
}
