/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 961DE75F95D6B77C13A6EF82AE116B1BA0462FC24BD67B4BAAFDDC35E71EA847
 * Entry: 0x001d8500, Ghidra index: 6426, label: FUN_001d8500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8500(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x5c;
    param_4 = param_4 + -0x5c;
    FUN_001c9990();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
