/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A5958CA798DF9EB0E98E868C2D1DED24D64E408044EED54F6E2A3FFC8B2D22F
 * Entry: 0x000b7850, Ghidra index: 2206, label: FUN_000b7850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b7850(int param_1,float param_2)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x34) < param_2) {
    if (*(float *)(param_1 + 0x34) == *(float *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xb8);
    *(float *)(param_1 + 0x34) = param_2;
    fVar1 = *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x34)) {
      fVar1 = *(float *)(param_1 + 0x30);
    }
    *(float *)(param_1 + 0x34) = fVar1;
    return;
  }
  if (param_2 < *(float *)(param_1 + 0x34)) {
    if (*(float *)(param_1 + 0x34) == *(float *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x60);
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xbc);
    *(float *)(param_1 + 0x34) = param_2;
    fVar1 = *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x34)) {
      fVar1 = *(float *)(param_1 + 0x30);
    }
    *(float *)(param_1 + 0x34) = fVar1;
  }
  return;
}
