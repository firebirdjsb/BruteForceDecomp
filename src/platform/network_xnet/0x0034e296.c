/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86CA3C3D1624E019B6372CBC5FB19D79AFFB8DBBCE03E74B606046B30C9BE099
 * Entry: 0x0034e296, Ghidra index: 13019, label: FUN_0034e296
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e296(uint *param_1,uint *param_2)

{
  int local_c;
  int local_8;
  
  local_c = *param_1 - *param_2;
  local_8 = (param_1[1] - param_2[1]) - (uint)(*param_1 < *param_2);
  FUN_00352e5e(&local_c);
  return;
}
