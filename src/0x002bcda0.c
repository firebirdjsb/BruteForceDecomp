/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80E0F787471A42D44DEEF6B68F29C49AD76A8ED9F016EF0E92E9273916CEED56
 * Entry: 0x002bcda0, Ghidra index: 9934, label: FUN_002bcda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bcda0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
  if (*piVar2 <= *(int *)(param_1 + 0x14)) {
    for (iVar3 = (int)(*(float *)(*(int *)(param_1 + 4) + 0xb4) * (float)piVar2[1]); -1 < iVar3;
        iVar3 = iVar3 + -1) {
      iVar1 = *(int *)(param_1 + 0x10);
      uVar4 = FUN_002bcd30();
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      if (iVar1 == 0) {
        return;
      }
      if (((*(int *)(iVar1 + 0x84) != 0) && (*(short *)(*(int *)(iVar1 + 0x84) + 0x2a) == 0)) &&
         ((**(code **)(*param_2 + 4))(iVar1), *(int *)(param_1 + 0x14) < *piVar2)) {
        return;
      }
    }
    if (piVar2[2] <= *(int *)(param_1 + 0x14)) {
      iVar3 = FUN_002ebf10();
      while ((-1 < iVar3 && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0))) {
        uVar4 = FUN_002bcd30();
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        if ((*(int *)(iVar1 + 0x84) != 0) &&
           ((*(short *)(*(int *)(iVar1 + 0x84) + 0x2a) == 1 &&
            ((**(code **)(*param_2 + 4))(iVar1), *(int *)(param_1 + 0x14) < piVar2[2])))) {
          return;
        }
        iVar3 = iVar3 + -1;
      }
    }
  }
  return;
}
