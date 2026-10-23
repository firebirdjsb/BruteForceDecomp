/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15A70CA061B0D4A4F064BFF3AFE3BB845FE9EC92A0728CD4763D56D38B36E79F
 * Entry: 0x0017d660, Ghidra index: 5078, label: FUN_0017d660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_0017d660(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0017d70f:
      if (1 < iVar1) {
        FUN_0017db80();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0017df40(param_1,param_2);
        }
        FUN_0017db30();
        return;
      }
      goto LAB_0017d70f;
    }
    FUN_0017d9d0(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      /* 0x0017D6DF: left subrange [param_1,local_8), recursive stack words. */
      FUN_0017d660(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x0017D6F3: right subrange [local_4,param_2), recursive stack words. */
      FUN_0017d660(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
