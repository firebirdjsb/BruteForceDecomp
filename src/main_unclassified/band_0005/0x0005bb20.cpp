/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 261025B63E8D3190091FA071C003331ADFAB54DBDB1A59FA2BCF6D3A603F775F
 * Entry: 0x0005bb20, Ghidra index: 930, label: FUN_0005bb20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_0005bac0(void);
extern undefined4 FUN_0008a720(undefined4 *param_1,int *param_2);
extern void FUN_0005cc20(int param_1,int *param_2,int *param_3);

void FUN_0005bb20(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float local_20;
  int local_1c;
  
  if (param_2 != 0) {
    iVar5 = FUN_0005bac0();
    uVar9 = 0;
    if (iVar5 != 0) {
      FUN_0008a720(param_2,0);
      uVar6 = *(uint *)(param_1 + 4);
      local_1c = 0;
      local_20 = 1e+10;
      if (uVar6 != 0) {
        do {
          if (uVar9 < uVar6) {
            iVar10 = *(int *)(*(int *)(param_1 + 8) + uVar9 * 4);
          }
          else {
            iVar10 = 0;
          }
          if (((*(int *)(iVar10 + 0x14) != 0) && (*(int *)(iVar10 + 0x14) != param_2)) &&
             (piVar1 = *(int **)(iVar10 + 4), piVar1 != (int *)0x0)) {
            iVar7 = (**(code **)(**(int **)(iVar5 + 4) + 0x40))();
            iVar8 = (**(code **)(*piVar1 + 0x40))();
            fVar2 = *(float *)(iVar8 + 0x2c) - *(float *)(iVar7 + 0x2c);
            fVar3 = *(float *)(iVar8 + 0x28) - *(float *)(iVar7 + 0x28);
            fVar4 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
            fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
            if (fVar2 < local_20) {
              local_1c = *(int *)(iVar10 + 4);
              local_20 = fVar2;
            }
          }
          uVar6 = *(uint *)(param_1 + 4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        if (local_1c != 0) {
          FUN_0005cc20(param_1,*(undefined4 *)(iVar5 + 4),local_1c);
        }
      }
    }
  }
  return;
}
