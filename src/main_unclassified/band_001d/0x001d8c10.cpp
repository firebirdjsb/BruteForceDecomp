/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D494D879ECC5AB2894A7D082006560806311C86654ABDDADD411C822AB1295F
 * Entry: 0x001d8c10, Ghidra index: 6441, label: FUN_001d8c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE direct E8 at 0x001D8C40 -> 0x001D2950, callee plain RET.
 * Implicit guest register inputs and native linkage remain ABI_UNVERIFIED. */
extern void FUN_001d2950(void);
int * FUN_001d8c10(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x368;
    param_4 = param_4 + -0x368;
    FUN_001d2950();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
