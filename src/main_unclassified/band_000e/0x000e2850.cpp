/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 987E05F6DD3BD2F22ABF3FA746B94E9F13C8834422587AB399B79D6EFB8DC2E3
 * Entry: 0x000e2850, Ghidra index: 2797, label: FUN_000e2850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_000e2850(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_000e28ff:
      if (1 < iVar1) {
        FUN_000e3190();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_000e38d0(param_1,param_2);
        }
        FUN_000e3140();
        return;
      }
      goto LAB_000e28ff;
    }
    FUN_000e2f90(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      /* 0x000E28CF: left subrange [param_1,local_8), recursive stack words. */
      FUN_000e2850(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x000E28E3: right subrange [local_4,param_2), recursive stack words. */
      FUN_000e2850(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
