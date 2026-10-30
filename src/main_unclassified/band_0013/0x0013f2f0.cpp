/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 434339A45F95339E35C5060B59621012D90D9F02F91B37E1E6AADF39CF5AAE7F
 * Entry: 0x0013f2f0, Ghidra index: 4047, label: FUN_0013f2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f2f0(float param_1)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    if (*(float *)(in_ECX + 0x3c) < param_1 != (*(float *)(in_ECX + 0x3c) == param_1)) {
      FUN_0010e3e0();
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      FUN_0010e500(param_1);
      return;
    }
    *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) - param_1;
  }
  FUN_0010e500(param_1);
  return;
}
