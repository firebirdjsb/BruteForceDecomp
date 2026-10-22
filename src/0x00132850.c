/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4637FA587F96FCA6992945D9AE54BC48EE84A42A55744EF65C87E81CE5683AF
 * Entry: 0x00132850, Ghidra index: 3853, label: FUN_00132850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00132850(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x38;
    param_4 = param_4 + -0x38;
    FUN_001327c0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
