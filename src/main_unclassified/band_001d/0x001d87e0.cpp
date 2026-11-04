/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55E2E0CC8F462C2B087901DFCAA6DCB5BB5F83DC94EE3F60B6E0E71197CB2452
 * Entry: 0x001d87e0, Ghidra index: 6432, label: FUN_001d87e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE direct E8 at 0x001D880E -> 0x001D2580, callee plain RET.
 * Implicit guest register inputs and native linkage remain ABI_UNVERIFIED. */
extern void FUN_001d2580(void);
int * FUN_001d87e0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x128;
    param_4 = param_4 + -0x128;
    FUN_001d2580();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
