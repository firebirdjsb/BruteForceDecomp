/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1418AF0500BB361E1729FFC8E552631838AC81E6D1B09E5AF92104C69AFA4D78
 * Entry: 0x00117310, Ghidra index: 3594, label: FUN_00117310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00117310(int param_1,int param_2,float param_3)

{
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_2 == 1) {
    *(float *)(param_1 + 0x7b4) = param_3;
    if (param_3 != 1.0) {
      *(undefined4 *)(param_1 + 0x7b0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x7b8) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    return;
  }
  if (param_2 != 2) {
    *(undefined4 *)(param_1 + 0x7b0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7b4) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    return;
  }
  *(float *)(param_1 + 0x7b8) = param_3;
  if (param_3 != 1.0) {
    *(undefined4 *)(param_1 + 0x7b0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7b4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  return;
}
