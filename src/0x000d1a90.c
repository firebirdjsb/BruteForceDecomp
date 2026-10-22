/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE2EB5F9DBE3A64A979FB6252B1512F170E1138273D79C579ED994574CD265EB
 * Entry: 0x000d1a90, Ghidra index: 2607, label: FUN_000d1a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d1a90(float *param_1,float *param_2,int *param_3)

{
  int iVar1;
  float local_18;
  float local_14;
  float fStack_10;
  
  if (((*param_3 != 0) && (iVar1 = *(int *)(*param_3 + 0x24), iVar1 != 0)) &&
     (*(int *)(*(int *)(iVar1 + 4) + 8) != 0)) {
    FUN_000621c0();
    *param_1 = local_18 * 1.0 + *param_1;
    param_1[1] = local_14 * 1.0 + param_1[1];
    param_1[2] = fStack_10 * 1.0 + param_1[2];
    *param_2 = *param_2 + 1.0;
    if (param_3[0x13] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_3[0x14] - param_3[0x13] >> 2;
    }
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_000d1a90(param_1,param_2,*(undefined4 *)(param_3[0x13] + iVar1 * 4));
    }
  }
  return;
}
