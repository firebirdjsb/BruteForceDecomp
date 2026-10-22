/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D31704DC04D96C0BACC20BE97F91F2306165FA332096D12BE8E2EC3A0A32741E
 * Entry: 0x00251200, Ghidra index: 8361, label: FUN_00251200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251200(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (((*param_2 != 0) && (iVar1 = *param_1, iVar1 != 0)) &&
     (*(uint *)(*param_2 + 8) < *(uint *)(iVar1 + 8))) {
    iVar2 = *param_2;
    *param_2 = iVar1;
    *param_1 = iVar2;
  }
  if (*param_3 != 0) {
    if (*param_2 == 0) {
      return;
    }
    if (*(uint *)(*param_3 + 8) < *(uint *)(*param_2 + 8)) {
      iVar1 = *param_3;
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
  }
  if (((*param_2 != 0) && (*param_1 != 0)) && (*(uint *)(*param_2 + 8) < *(uint *)(*param_1 + 8))) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}
