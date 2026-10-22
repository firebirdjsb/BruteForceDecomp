/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29F9EFCD5A007140085B075DC3D67E72E3FE64909DC2F64C3510948873849374
 * Entry: 0x000b7940, Ghidra index: 2207, label: FUN_000b7940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b7940(int param_1,undefined4 param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  fVar1 = *(float *)(param_1 + 0x30);
  if (*(float *)(param_1 + 0x6c) <= *(float *)(param_1 + 0x30)) {
    fVar1 = *(float *)(param_1 + 0x6c);
  }
  *(float *)(param_1 + 0x30) = fVar1;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  return;
}
