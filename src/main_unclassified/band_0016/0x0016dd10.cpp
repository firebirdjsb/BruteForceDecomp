/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BDE2DAC3D7C1C5C0ACA23411E51BFAF0867D2B2BA101BA5ACF54CC1370A0B52
 * Entry: 0x0016dd10, Ghidra index: 4804, label: FUN_0016dd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_0016dd10(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0016ddbf:
      if (1 < iVar1) {
        FUN_0016e3c0();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0016e7e0(param_1,param_2);
        }
        FUN_0016e370();
        return;
      }
      goto LAB_0016ddbf;
    }
    FUN_0016e200(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      /* 0x0016DD8F: left subrange [param_1,local_8), recursive stack words. */
      FUN_0016dd10(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x0016DDA3: right subrange [local_4,param_2), recursive stack words. */
      FUN_0016dd10(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
