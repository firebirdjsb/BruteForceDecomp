/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9918F1C09FD211897F2286254570CFB1710C3BCFDCF732991A666CBB5A9E1907
 * Entry: 0x001d8a80, Ghidra index: 6438, label: FUN_001d8a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D2840 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d2840(void);
int * FUN_001d8a80(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x88;
    param_4 = param_4 + -0x88;
    FUN_001d2840();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
