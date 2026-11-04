/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6E427AD97A054961EBFBFA5A78F0891868928090AE9CB5E4D5D1648CB2728D3
 * Entry: 0x001d9520, Ghidra index: 6466, label: FUN_001d9520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_001d2e90(void);
int * FUN_001d9520(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x70;
    param_4 = param_4 + -0x70;
    FUN_001d2e90();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
