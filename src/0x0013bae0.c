/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 809775A752CE24677F80DD9A4A0861A8ABD609C325C9817DED6CAAD799B7C0F9
 * Entry: 0x0013bae0, Ghidra index: 3994, label: FUN_0013bae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013bae0(float param_1)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    if (*(float *)(in_ECX + 0x20) < param_1 != (*(float *)(in_ECX + 0x20) == param_1)) {
      FUN_0010e3e0();
      *(undefined4 *)(in_ECX + 0x20) = 0;
      FUN_0010e500(param_1);
      return;
    }
    *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) - param_1;
    FUN_0013bb40(in_ECX,param_1);
  }
  FUN_0010e500(param_1);
  return;
}
