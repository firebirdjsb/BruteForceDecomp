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
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0004e1f1:
      if (1 < iVar1) {
        FUN_0004e4d0();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_0004e650(param_1,param_2);
        }
        FUN_0004e470();
        return;
      }
      goto LAB_0004e1f1;
    }
    FUN_0004e260(&local_8);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      /* Original 0x0004E1C7: stack words (param_1, local_4, param_3). */
      FUN_0004e150(param_1,local_4,param_3);
      param_1 = iVar1;
    }
    else {
      /* Original 0x0004E1D9: stack words (local_4, param_2, param_3). */
      FUN_0004e150(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
