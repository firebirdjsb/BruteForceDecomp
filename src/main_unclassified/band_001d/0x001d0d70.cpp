/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F930AF811D3209BA6C4A8FB67A00723B94AD1347B46A626114B1231B730DB25B
 * Entry: 0x001d0d70, Ghidra index: 6214, label: FUN_001d0d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
    param_1[4] = in_ECX[4];
    param_1[5] = in_ECX[5];
    param_1[6] = in_ECX[6];
    param_1[7] = in_ECX[7];
    param_1[8] = in_ECX[8];
  }
  return;
}
