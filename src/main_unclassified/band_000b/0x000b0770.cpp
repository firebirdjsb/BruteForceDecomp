/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AE5B275D1D1B880FA8AC5154D70DD88FD49C85C689C35EEE873B6699D28A46A
 * Entry: 0x000b0770, Ghidra index: 2097, label: FUN_000b0770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000bb170(void);

int FUN_000b0770(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  float local_20;
  int *local_1c;
  float local_18;
  float local_14;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0x34) + 0x30);
  iVar5 = 0;
  local_1c = (int *)0x0;
  local_14 = 0.0;
  local_20 = 0.0;
  local_18 = 0.0;
  if (*(int *)(iVar2 + 4) != 0) {
    if (*(int *)(iVar2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar2 + 8);
    }
    piVar6 = *(int **)(iVar4 + 4);
    uVar7 = 1;
    if (piVar6 != (int *)0x0) {
      do {
        if ((*(byte *)(piVar6 + 0x1c) & 1) == 0) {
          iVar4 = (**(code **)(*piVar6 + 0x40))();
          fVar1 = *(float *)(iVar4 + 0x2c) - param_2[2];
          fVar3 = *(float *)(iVar4 + 0x24) - *param_2;
          fVar3 = fVar3 * fVar3 + fVar1 * fVar1;
          fVar1 = *(float *)(piVar6[3] + 0x2a0);
          fVar1 = fVar1 - (1.0 - (1.0 - (float)piVar6[0x15f]) * (1.0 - (float)piVar6[0x15f])) *
                          (fVar1 - *(float *)(piVar6[3] + 0x2a4));
          fVar1 = fVar1 * fVar1 - fVar3;
          if (local_20 < fVar1) {
            local_20 = fVar1;
            local_1c = piVar6;
            local_18 = fVar3;
          }
        }
        if (*(uint *)(iVar2 + 4) <= uVar7) break;
        iVar5 = iVar5 + 4;
        if (uVar7 < *(uint *)(iVar2 + 4)) {
          iVar4 = *(int *)(iVar5 + *(int *)(iVar2 + 8));
        }
        else {
          iVar4 = 0;
        }
        piVar6 = *(int **)(iVar4 + 4);
        uVar7 = uVar7 + 1;
      } while (piVar6 != (int *)0x0);
      if ((local_20 != 0.0) && (local_1c != (int *)0x0)) {
        fVar1 = *(float *)(local_1c[3] + 0x2a0);
        local_14 = ((fVar1 - (1.0 - (1.0 - (float)local_1c[0x15f]) * (1.0 - (float)local_1c[0x15f]))
                             * (fVar1 - *(float *)(local_1c[3] + 0x2a4))) - SQRT(local_18)) * 0.5;
        if (local_14 < 0.0) {
          local_14 = 0.0;
        }
        else if (1.0 < local_14) {
          local_14 = 1.0;
        }
      }
    }
  }
  fVar8 = (float10)FUN_000bb170();
  return (int)(fVar8 * (float10)local_14 * (float10)255.0);
}
