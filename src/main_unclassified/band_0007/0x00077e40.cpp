/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15B983A290FF28FFBA8FA170C9126F75F73B0F1BCAB2AF81A5AF0BE4D76D9392
 * Entry: 0x00077e40, Ghidra index: 1415, label: FUN_00077e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00077e40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    return CONCAT31((int3)((uint)(int)*(float *)(param_1 + 4) >> 8),
                    (int)*(float *)(param_1 + 4) != 0);
  }
  if (iVar1 != 2) {
    if (iVar1 - 3U != 0) {
      return iVar1 - 3U & 0xffffff00;
    }
    return (uint)*(byte *)(param_1 + 4);
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),*(int *)(param_1 + 4) != 0);
}
