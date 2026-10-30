/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 186711EBDF2A0C390C2D66E71630CADF78259EC68BB11BFB8ED377FE5E7C1857
 * Entry: 0x001e30f0, Ghidra index: 6762, label: FUN_001e30f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* This is the existing Ghidra callee's C++ draft signature, not a verified
 * Xbox guest-register ABI. The original call operands remain unchanged. */
extern void FUN_0001f4f0(int guest_string, uint start, uint count);
int * FUN_001e30f0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    FUN_0001f4f0(param_2,0,0xffffffff);
    param_2 = param_2 + 0x1c;
    param_4 = param_4 + 0x1c;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}
