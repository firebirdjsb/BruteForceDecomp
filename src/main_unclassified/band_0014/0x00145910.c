/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 588FF62AE26CC1011DB20C4BDCABC78385CED6EAFF6208E55772D38C1FF860D7
 * Entry: 0x00145910, Ghidra index: 4196, label: FUN_00145910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145910(int param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = *(float *)(param_1 + 4) + *(float *)(in_ECX + 0x1bc);
  FUN_0023d6e0(fVar1);
  FUN_0023d4f0(param_1);
  *(float *)(in_ECX + 0x1bc) = fVar1;
  return;
}
