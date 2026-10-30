/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3CD6F49DA1D89FC611AD45F72040012E8C77D3A68D148B31ED943CC75B21DBE
 * Entry: 0x0006bdd0, Ghidra index: 1220, label: FUN_0006bdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006bdd0(float param_1,undefined4 param_2,float param_3)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0xdc) < param_1) {
    if (0.0 < param_3) {
      *(float *)(in_ECX + 0xdc) = param_1;
      *(undefined4 *)(in_ECX + 0xe8) = param_2;
      *(float *)(in_ECX + 0xe0) = param_1 / param_3;
      return;
    }
    *(float *)(in_ECX + 0xe4) = param_1;
  }
  return;
}
