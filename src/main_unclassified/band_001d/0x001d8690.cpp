/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87A9842FB91DD07135C09CB8BC43A42E8A0D7124CA75B26A80CF0A7715DE7268
 * Entry: 0x001d8690, Ghidra index: 6429, label: FUN_001d8690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D2330 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d2330(void);
int * FUN_001d8690(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x48;
    param_4 = param_4 + -0x48;
    FUN_001d2330();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
