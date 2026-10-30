/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 466E74473A3EA518F62632E7202804A4B8FEE387D55179A4F648F05BB329540A
 * Entry: 0x001715e0, Ghidra index: 4852, label: FUN_001715e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001715e0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_4 = param_4 + -100;
    param_3 = param_3 + -100;
    FUN_001713d0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
