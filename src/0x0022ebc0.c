/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A9980FD43D8A08823180ECC9A81FFE3196EC12F87F59BC9C1241AA146A4D919
 * Entry: 0x0022ebc0, Ghidra index: 7725, label: FUN_0022ebc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022ebc0(float param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x228);
  if (*(float *)(iVar1 + 0x14c) != 0.0) {
    if ((*(int *)(in_ECX + 0x1f8) < *(int *)(iVar1 + 0xe4)) && (*(float *)(in_ECX + 0x218) <= 0.0))
    {
      param_1 = param_1 + *(float *)(in_ECX + 0x220);
      *(float *)(in_ECX + 0x220) = param_1;
      if (param_1 < *(float *)(iVar1 + 0x14c)) {
        return;
      }
      *(int *)(in_ECX + 0x1f8) = *(int *)(in_ECX + 0x1f8) + 1;
    }
    *(undefined4 *)(in_ECX + 0x220) = 0;
  }
  return;
}
