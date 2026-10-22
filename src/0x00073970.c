/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF917CAB1AC94CA02CCE7388E1C1177B531DA498C679A817AC6A48CDDECCCF35
 * Entry: 0x00073970, Ghidra index: 1306, label: FUN_00073970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00073970(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  if (ABS(in_ECX[3] - param_2) <= *in_ECX) {
    if (*(char *)(in_ECX + 1) == '\x01') {
      param_1 = param_1 + in_ECX[4];
      if (param_1 <= 0.0) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = in_ECX[4] / param_1;
      }
      fVar2 = (1.0 - fVar1) * param_2 + fVar1 * in_ECX[2];
      in_ECX[2] = fVar2;
      in_ECX[3] = fVar1 * in_ECX[3] + fVar2 * (1.0 - fVar1);
      in_ECX[4] = param_1;
      if (6.0 < param_1) {
        in_ECX[4] = 6.0;
        return;
      }
    }
    else {
      *(undefined1 *)(in_ECX + 1) = 1;
      in_ECX[4] = 0.0;
      in_ECX[2] = param_2;
    }
    return;
  }
  if (*(char *)(in_ECX + 1) == '\x01') {
    *(undefined1 *)(in_ECX + 1) = 0;
    in_ECX[5] = 0.0;
  }
  param_1 = param_1 + in_ECX[5];
  in_ECX[5] = param_1;
  if (param_1 < in_ECX[6]) {
    in_ECX[2] = (param_1 / in_ECX[6]) * param_2 + (1.0 - param_1 / in_ECX[6]) * in_ECX[2];
  }
  else {
    in_ECX[2] = param_2;
  }
  if (0.0 < in_ECX[3] - param_2) {
    in_ECX[3] = *in_ECX * 0.9999 + in_ECX[2];
    return;
  }
  in_ECX[3] = *in_ECX * -0.9999 + in_ECX[2];
  return;
}
