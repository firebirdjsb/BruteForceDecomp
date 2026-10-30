/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C198E52A7B8827123F810AC0D4A3B164B3D6EDF5A7ABDB22D2745C3ACFC1566
 * Entry: 0x001d8ee0, Ghidra index: 6449, label: FUN_001d8ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D5450 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d5450(void);
int * FUN_001d8ee0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_001d5450();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
