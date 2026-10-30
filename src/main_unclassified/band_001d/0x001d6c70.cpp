/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5515337616E599B2D528E43F7F0604284F44B4A3F38F564813FFDECAECE14B67
 * Entry: 0x001d6c70, Ghidra index: 6376, label: FUN_001d6c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D1AF0 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d1af0(void);
int * FUN_001d6c70(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0xac;
    param_4 = param_4 + -0xac;
    FUN_001d1af0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
