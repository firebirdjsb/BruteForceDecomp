/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C5EC61D97AC96B9C193AF57A88877F69DD8FDE18D37CDB59A9A04241B354B46
 * Entry: 0x00155210, Ghidra index: 4458, label: FUN_00155210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00155210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX = in_EAX + 2;
  }
  return;
}
