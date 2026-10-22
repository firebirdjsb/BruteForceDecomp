/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B97992072436AB1BB84BEE73204797F9D884DA76A00DD955C211F55B995AA319
 * Entry: 0x0010f830, Ghidra index: 3535, label: FUN_0010f830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0010f830(int param_1,float param_2)

{
  if (*(float *)(param_1 + 8) <= param_2) {
    param_2 = *(float *)(param_1 + 8);
  }
  *(float *)(param_1 + 0xc) = param_2;
  return (float10)*(float *)(param_1 + 0xc);
}
