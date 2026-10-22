/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E341DA9D7878475F272CD19DFAB636BADCF1F0964EC8653D3F853B6103E48BD7
 * Entry: 0x002ba0a0, Ghidra index: 9878, label: FUN_002ba0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ba0a0(void)

{
  float *in_ECX;
  int in_EDX;
  
  if (1e-10 <= ABS((*(float *)(in_EDX + 0x14) * *in_ECX +
                   *(float *)(in_EDX + 0x18) * in_ECX[1] +
                   *(float *)(in_EDX + 0x1c) * in_ECX[2] + *(float *)(in_EDX + 0x20) * in_ECX[3]) -
                   1.0)) {
    *(float *)(in_EDX + 0x14) = *in_ECX;
    *(float *)(in_EDX + 0x18) = in_ECX[1];
    *(float *)(in_EDX + 0x1c) = in_ECX[2];
    *(float *)(in_EDX + 0x20) = in_ECX[3];
    FUN_002bdd50(*(undefined4 *)(*(int *)(in_EDX + 0x54) + 0x98));
  }
  return;
}
