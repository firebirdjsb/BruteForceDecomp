/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C425C19E960D7754164745A51C339C853D97EA4AA95945C2F88A986F5834ACC3
 * Entry: 0x0013bb40, Ghidra index: 3995, label: FUN_0013bb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013bb40(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iStack_28;
  
  if (0.0 < param_2) {
    piVar1 = *(int **)(param_1 + 0x18);
    fVar10 = param_2 * *(float *)(param_1 + 0x28) + (float)piVar1[0x15];
    if ((float)piVar1[0x14] <= fVar10) {
      fVar10 = (float)piVar1[0x14];
    }
    piVar1[0x15] = (int)fVar10;
    iVar2 = *(int *)(piVar1[2] + 0x204);
    iVar3 = *(int *)(iVar2 + 0x3c);
    *(int *)(iVar2 + 0x3c) = iVar3 + 1;
    iVar8 = (**(code **)(*piVar1 + 0x40))();
    FUN_000d1420(*(undefined4 *)(param_1 + 0x30));
joined_r0x0013bc04:
    if (iStack_28 != 0) {
      for (puVar4 = *(undefined4 **)(iStack_28 + 0x1c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        piVar1 = *(int **)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if ((((piVar1 != (int *)0x0) && (iVar9 = piVar1[6], piVar1[6] = iVar3, iVar9 != iVar3)) &&
            (*(int *)(piVar1[3] + 4) == 3)) &&
           (((*(byte *)(piVar1 + 0x1c) & 1) == 0 &&
            (iVar9 = (**(code **)(*piVar1 + 0x40))(),
            fVar10 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar8 + 0x2c),
            fVar5 = *(float *)(iVar9 + 0x28) - *(float *)(iVar8 + 0x28),
            fVar6 = *(float *)(iVar9 + 0x24) - *(float *)(iVar8 + 0x24),
            fVar6 * fVar6 + fVar5 * fVar5 + fVar10 * fVar10 <=
            *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30))))) {
          cVar7 = FUN_0013bd60();
          if (cVar7 == '\0') {
            cVar7 = FUN_0013bdc0();
            if (cVar7 != '\0') {
              FUN_00223160(param_2 * *(float *)(param_1 + 0x2c),0);
            }
          }
          else {
            FUN_0010f830(piVar1 + 0x12,param_2 * *(float *)(param_1 + 0x28) + (float)piVar1[0x15]);
          }
        }
      }
      do {
        cVar7 = FUN_000d14d0();
        if (cVar7 == '\0') {
          iStack_28 = 0;
          break;
        }
      } while (iStack_28 == 0);
      goto joined_r0x0013bc04;
    }
  }
  return;
}
