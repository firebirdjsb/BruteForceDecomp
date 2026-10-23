/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06A9203CD34792BD6FD62767860D552CBFB28C354754B8B6D827BEC1A67EFC2E
 * Entry: 0x001e98f0, Ghidra index: 6860, label: FUN_001e98f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_001e98f0(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 5;
    if (iVar1 < 0x21) {
LAB_001e999f:
      if (1 < iVar1) {
        FUN_001e9c80();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x20 < (int)(param_2 - param_1 & 0xffffffe0U)) {
          FUN_001e9e80(param_1,param_2);
        }
        FUN_001e9bf0();
        return;
      }
      goto LAB_001e999f;
    }
    FUN_001e9a70(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xffffffe0U) < (int)(param_2 - local_4 & 0xffffffe0U)) {
      /* 0x001E996F: left subrange [param_1,local_8), recursive stack words. */
      FUN_001e98f0(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x001E9983: right subrange [local_4,param_2), recursive stack words. */
      FUN_001e98f0(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
