/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EF2072CD3DB1F1C9CA772FCD776609B5488FB8AA5E4454465B359D504AACA54
 * Entry: 0x0004e150, Ghidra index: 666, label: FUN_0004e150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e150(int param_1,int param_2,int param_3)

{
  int iVar1;
  /* Original 32-bit stack allocates two contiguous partition result DWORDs. */
  int partition_bounds[2];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0004e1f1:
      if (1 < iVar1) {
        /* x86 pushes EDI(end), EBX(start) before this call. */
        FUN_0004e4d0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_0004e650(param_1,param_2);
        }
        /* x86 pushes EDI(end), EBX(start) before this call. */
        FUN_0004e470((undefined4 *)(uintptr_t)param_1,param_2);
        return;
      }
      goto LAB_0004e1f1;
    }
    /* 0x0004E18A: pushes output pointer plus the two range endpoints. */
    FUN_0004e260((undefined4 *)partition_bounds,
              (undefined4 *)(uintptr_t)param_1, (undefined4 *)(uintptr_t)param_2);
    iVar1 = partition_bounds[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(partition_bounds[0] - param_1 & 0xfffffff8U) < (int)(param_2 - partition_bounds[1] & 0xfffffff8U)) {
      /* Original 0x0004E1C7: stack words (param_1, partition_bounds[0], param_3). */
      FUN_0004e150(param_1,partition_bounds[0],param_3);
      param_1 = iVar1;
    }
    else {
      /* Original 0x0004E1D9: stack words (partition_bounds[1], param_2, param_3). */
      FUN_0004e150(partition_bounds[1],param_2,param_3);
      param_2 = partition_bounds[0];
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
