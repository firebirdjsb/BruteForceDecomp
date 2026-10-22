/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24BF6387FD7B7506C99510439FD5372CF4B9CEAF7EBBAD8817C7374E7B5D2475
 * Entry: 0x00210b90, Ghidra index: 7433, label: FUN_00210b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210b90(float param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 3) {
    if (iVar1 == 0) {
      if (*(float *)(in_ECX + 8) < *(float *)(in_ECX + 0x10) !=
          (*(float *)(in_ECX + 8) == *(float *)(in_ECX + 0x10))) {
        *(undefined4 *)(in_ECX + 4) = 1;
        *(undefined4 *)(in_ECX + 0x10) = 0;
      }
    }
    else if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      if (*(float *)(in_ECX + 0xc) < *(float *)(in_ECX + 0x10) !=
          (*(float *)(in_ECX + 0xc) == *(float *)(in_ECX + 0x10))) {
        *(undefined4 *)(in_ECX + 0x10) = 0;
        *(undefined4 *)(in_ECX + 4) = 3;
        *(float *)(in_ECX + 0x10) = param_1 + *(float *)(in_ECX + 0x10);
        return;
      }
    }
    *(float *)(in_ECX + 0x10) = param_1 + *(float *)(in_ECX + 0x10);
  }
  return;
}
