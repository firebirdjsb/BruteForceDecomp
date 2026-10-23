/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77808A2B6FDA3289BEFED68F211897B4E6FAE5DA33D86A9D23CD00091654C64C
 * Entry: 0x001d8760, Ghidra index: 6431, label: FUN_001d8760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8760(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x40;
    param_4 = param_4 + -0x40;
    FUN_001d1f40();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
