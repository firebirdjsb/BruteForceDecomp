/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3CA3E57F2356E9EF9F0E9317FBEBA8DE9F71EF94FD42F8B412D464CB4F66B5D
 * Entry: 0x001ceb10, Ghidra index: 6065, label: FUN_001ceb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ceb10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    param_1[3] = unaff_EDI[3];
    FUN_001d3530();
    FUN_0010bc40();
  }
  return;
}
