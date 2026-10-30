/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1553B2A38814FB1A782537A32C0CAFFF9E136A78F8165C170E073DDABB357847
 * Entry: 0x001478d0, Ghidra index: 4238, label: FUN_001478d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001478d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  *(float *)(*(int *)(param_1[2] + 0x1d4) + 0x754) = (float)*(int *)(iVar1 + 0x18);
  return;
}
