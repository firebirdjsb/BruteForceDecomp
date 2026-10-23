/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D988EF95B1656CD2ACAAE56BF377F2FC1C28F50F6BC4763568DE058320B168A9
 * Entry: 0x000e2a90, Ghidra index: 2799, label: FUN_000e2a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_000e2a90(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_000e2b3f:
      if (1 < iVar1) {
        FUN_000e3420();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_000e3a20(param_1,param_2);
        }
        FUN_000e33d0();
        return;
      }
      goto LAB_000e2b3f;
    }
    FUN_000e3260(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      /* 0x000E2B0F: left subrange [param_1,local_8), recursive stack words. */
      FUN_000e2a90(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x000E2B23: right subrange [local_4,param_2), recursive stack words. */
      FUN_000e2a90(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
