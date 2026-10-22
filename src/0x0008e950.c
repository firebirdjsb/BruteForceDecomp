/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4755ED98EFB5785ACDCB5C525C74E4CF87C00E4FC1A4CE058A8455564ED46B99
 * Entry: 0x0008e950, Ghidra index: 1733, label: FUN_0008e950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008e950(undefined4 param_1,undefined4 param_2,float param_3,int *param_4)

{
  if (param_4 != (int *)0x0) {
    switch(param_2) {
    case 0:
      *param_4 = (int)param_3;
      return;
    case 1:
      param_4[1] = (int)param_3;
      return;
    case 2:
      param_4[2] = (int)param_3;
      return;
    case 3:
      param_4[3] = (int)param_3;
      return;
    case 4:
      param_4[4] = (int)param_3;
      return;
    case 5:
      param_4[5] = (int)param_3;
      return;
    case 6:
      param_4[6] = (int)param_3;
      return;
    case 7:
      param_4[7] = (int)param_3;
      return;
    case 8:
      param_4[8] = (int)param_3;
    }
  }
  return;
}
