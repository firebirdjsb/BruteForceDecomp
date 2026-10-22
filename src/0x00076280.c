/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A228AFDB0B1525B02214F8E9126E381DE401FE315877CFDA290D553C32D1091
 * Entry: 0x00076280, Ghidra index: 1367, label: FUN_00076280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00076280(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x1c;
    param_4 = param_4 + -0x1c;
    FUN_0001f4f0(param_3,0,0xffffffff);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
