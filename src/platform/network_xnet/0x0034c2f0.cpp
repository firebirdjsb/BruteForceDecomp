/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3D1EDCD95836252CC3CC0B3627ACBB472B96C8D82FF4CD3DAABCBD59FAE17A9
 * Entry: 0x0034c2f0, Ghidra index: 12953, label: FUN_0034c2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c2f0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] == 0) {
    *in_ECX = param_1;
  }
  else {
    *(int *)(in_ECX[1] + 0xc) = param_1;
  }
  in_ECX[1] = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
