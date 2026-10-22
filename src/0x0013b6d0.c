/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 312B3961893AA2E0D6C03EDA5C101F0E210D89CB0969E56DCDCE4EBD6A73C662
 * Entry: 0x0013b6d0, Ghidra index: 3987, label: FUN_0013b6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013b6d0(float param_1)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    if (*(float *)(in_ECX + 0x3c) < param_1 != (*(float *)(in_ECX + 0x3c) == param_1)) {
      if (*(float *)(in_ECX + 4) <= *(float *)(*(int *)(in_ECX + 0x18) + 0x490)) {
        *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
        FUN_0013e410(0);
        FUN_001258d0(*(int *)(in_ECX + 0x18),
                     *(float *)(*(int *)(in_ECX + 0x18) + 0x490) - *(float *)(in_ECX + 4));
        FUN_0010e500(param_1);
        return;
      }
      FUN_0010e3e0();
      FUN_0010e500(param_1);
      return;
    }
    *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) - param_1;
  }
  FUN_0010e500(param_1);
  return;
}
