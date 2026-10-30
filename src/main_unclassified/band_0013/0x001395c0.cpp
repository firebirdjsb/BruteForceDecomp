/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEC8372221F683E4C69A7D3B543767960E2EE28E94947A81FE9CD511F08A8C3B
 * Entry: 0x001395c0, Ghidra index: 3957, label: FUN_001395c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001395c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_001396e2:
      if (1 < iVar1) {
        FUN_0013aad0(param_1,param_2,param_4,param_5,param_6,param_7);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_0013a9f0(param_1,param_2,param_4,param_5,param_6,param_7);
        FUN_0013aa50(param_1,param_2,param_4,param_5,param_6,param_7);
        return;
      }
      goto LAB_001396e2;
    }
    FUN_00139db0(&local_8,param_1,param_2,param_4,param_5,param_6,param_7);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_001395c0(param_1,local_8,param_3,param_4,param_5,param_6,param_7);
      param_1 = local_4;
    }
    else {
      FUN_001395c0(local_4,param_2,param_3,param_4,param_5,param_6,param_7);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
