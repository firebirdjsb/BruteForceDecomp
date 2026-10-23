/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A284E290493B745EFA4FEF27E61EE57C00245F52D4512A7D7923AA3C1A4B088D
 * Entry: 0x00250840, Ghidra index: 8350, label: FUN_00250840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: fourth incoming DWORD at entry ESP+0x10 is carried
 * in EBP and forwarded by both recursive calls. Native ABI_UNVERIFIED. */
void FUN_00250840(int param_1,int param_2,int param_3, int original_stack_arg4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_002508ef:
      if (1 < iVar1) {
        FUN_00250ea0();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_002511b0(param_1,param_2);
        }
        FUN_00250e50();
        return;
      }
      goto LAB_002508ef;
    }
    FUN_00250c60(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      /* 0x002508BF: left subrange [param_1,local_8), recursive stack words. */
      FUN_00250840(param_1,local_8,param_3,original_stack_arg4);
      param_1 = local_4;
    }
    else {
      /* 0x002508D3: right subrange [local_4,param_2), recursive stack words. */
      FUN_00250840(local_4,param_2,param_3,original_stack_arg4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
