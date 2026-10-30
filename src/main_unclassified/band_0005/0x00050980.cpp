/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C12F9E2C002541B33746FFB69322F86EE74A02944DC9D96E09B6365B5738AD63
 * Entry: 0x00050980, Ghidra index: 717, label: FUN_00050980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050980(int param_1,int param_2,int param_3)

{
  int iVar1;
  /* Original 32-bit stack allocates two contiguous partition result DWORDs. */
  int partition_bounds[2];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00050a21:
      if (1 < iVar1) {
        /* x86 pushes EDI(end), EBX(start) before this call. */
        FUN_00051040((undefined4 *)(uintptr_t)param_1,(undefined4 *)(uintptr_t)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00051430(param_1,param_2);
        }
        /* x86 pushes EDI(end), EBX(start) before this call. */
        FUN_00050ff0((undefined4 *)(uintptr_t)param_1,param_2);
        return;
      }
      goto LAB_00050a21;
    }
    /* 0x000509BA: pushes output pointer plus the two range endpoints. */
    FUN_00050e90((undefined4 *)partition_bounds,
              (undefined4 *)(uintptr_t)param_1, (undefined4 *)(uintptr_t)param_2);
    iVar1 = partition_bounds[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(partition_bounds[0] - param_1 & 0xfffffffcU) < (int)(param_2 - partition_bounds[1] & 0xfffffffcU)) {
      /* Original 0x000509F7: stack words (param_1, partition_bounds[0], param_3). */
      FUN_00050980(param_1,partition_bounds[0],param_3);
      param_1 = iVar1;
    }
    else {
      /* Original 0x00050A09: stack words (partition_bounds[1], param_2, param_3). */
      FUN_00050980(partition_bounds[1],param_2,param_3);
      param_2 = partition_bounds[0];
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
