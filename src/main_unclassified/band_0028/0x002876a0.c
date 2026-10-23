/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A4CFE56CE7D603B90681260F69D85D37BA2C1A894FC2A61FC8D4DA5B99E5A60
 * Entry: 0x002876a0, Ghidra index: 9092, label: FUN_002876a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002876a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  /* 0x002876D5 passes an adjacent pair of stack DWORDs as the output buffer. */
  int partition_bounds[2];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00287741:
      if (1 < iVar1) {
        /* 0x00287746-0x00287755: EBX=start, EDI=end; two stack DWORDs. */
        FUN_00287e30(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00288130(param_1,param_2);
        }
        /* 0x00287787-0x00287796: EBX=start, EDI=end; two stack DWORDs. */
        FUN_00287dc0(param_1,param_2);
        return;
      }
      goto LAB_00287741;
    }
    /* 0x002876CB-0x002876DE: push end, start, &partition_bounds[0]. */
    FUN_00287930((undefined4 *)partition_bounds,
                 (int *)(uintptr_t)param_1, (int *)(uintptr_t)param_2);
    iVar1 = partition_bounds[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(partition_bounds[0] - param_1 & 0xfffffffcU) < (int)(param_2 - partition_bounds[1] & 0xfffffffcU)) {
      /* 0x00287717: left subrange [param_1,partition_bounds[0]), recursive stack words. */
      FUN_002876a0(param_1,partition_bounds[0],param_3);
      param_1 = iVar1;
    }
    else {
      /* 0x00287729: right subrange [partition_bounds[1],param_2), recursive stack words. */
      FUN_002876a0(partition_bounds[1],param_2,param_3);
      param_2 = partition_bounds[0];
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
