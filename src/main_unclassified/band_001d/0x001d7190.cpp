/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CA64857E69D10E674C37393E70905D42ACCDED535F48F45625B18CB313EB56B
 * Entry: 0x001d7190, Ghidra index: 6391, label: FUN_001d7190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE direct E8 at 0x001D71B6 -> 0x001D1CD0, callee plain RET.
 * Implicit guest register inputs and native linkage remain ABI_UNVERIFIED. */
extern void FUN_001d1cd0(void);
int * FUN_001d7190(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x68;
    param_4 = param_4 + -0x68;
    FUN_001d1cd0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
