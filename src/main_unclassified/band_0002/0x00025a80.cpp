/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 542C64E2CE3D0E11670CE8564303ECF8CF28CC3F7EE172E0A9811D70A551912D
 * Entry: 0x00025a80, Ghidra index: 262, label: FUN_00025a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern bool FUN_00162d60(void);
extern float10 FUN_00039460(void);
extern undefined2 FUN_00023630(void);

uint FUN_00025a80(int *param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float *pfVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar4 = FUN_00162d60();
  if ((((char)uVar4 == '\0') &&
      (uVar4 = (param_1[9] << 0x14) >> 0x14, uVar4 == *(ushort *)(in_ECX + 0x114))) &&
     ((*(byte *)(param_1 + 10) & 1) == 0)) {
    iVar5 = (**(code **)(*param_1 + 0x3c))();
    if ((iVar5 != 0x13) || (uVar4 = 0, (char)param_1[0x24] != '\0')) {
      fVar1 = *(float *)(in_ECX + 0x10c);
      (**(code **)(param_1[2] + 4))();
      fVar9 = (float10)FUN_00039460();
      fVar10 = (float10)fVar1 * (float10)fVar1;
      uVar4 = CONCAT22(extraout_var,
                       (ushort)(fVar10 < fVar9) << 8 | (ushort)(isnan(fVar10) || isnan(fVar9)) << 10 |
                       (ushort)(fVar10 == fVar9) << 0xe);
      if (fVar10 < fVar9 || (fVar10 == fVar9) != 0) {
        iVar5 = *(int *)(in_ECX + 0x124);
        uVar4 = FUN_00023630();
        if ((char)uVar4 != '\0') {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 8);
          puVar7 = *(undefined4 **)(iVar5 + 0x74);
          if (puVar7 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)*puVar7;
          }
          if (piVar8 != *(int **)(iVar5 + 0x74)) {
            do {
              if ((int *)piVar8[3] != (int *)0x0) {
                (**(code **)(*(int *)piVar8[3] + 0x40))();
                (**(code **)(param_1[2] + 4))();
                fVar10 = (float10)FUN_00039460();
                fVar9 = (float10)1.0;
                uVar4 = CONCAT22(extraout_var_00,
                                 (ushort)(fVar10 < fVar9) << 8 |
                                 (ushort)(isnan(fVar10) || isnan(fVar9)) << 10 |
                                 (ushort)(fVar10 == fVar9) << 0xe);
                if (fVar10 < fVar9) goto LAB_00025b05;
              }
              piVar8 = (int *)*piVar8;
            } while (piVar8 != (int *)*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x124) + 0x10) +
                                                       8) + 0x74));
          }
          iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x124) + 0x10) + 8);
          puVar7 = *(undefined4 **)(iVar5 + 0x68);
          if (puVar7 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)*puVar7;
          }
          if (piVar8 != *(int **)(iVar5 + 0x68)) {
            do {
              piVar2 = (int *)piVar8[3];
              if (piVar2 != (int *)0x0) {
                pfVar6 = (float *)(**(code **)(param_1[2] + 4))();
                iVar5 = (**(code **)(*piVar2 + 0x40))();
                fVar1 = *(float *)(iVar5 + 0x24) - *pfVar6;
                fVar3 = *(float *)(iVar5 + 0x2c) - pfVar6[2];
                if (fVar1 * fVar1 + fVar3 * fVar3 < 1.5) {
                  fVar1 = ABS(pfVar6[1] - *(float *)(iVar5 + 0x28));
                  uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),
                                   (ushort)(fVar1 < 9.0) << 8 | (ushort)isnan(fVar1) << 10 |
                                   (ushort)(fVar1 == 9.0) << 0xe);
                  if (fVar1 < 9.0) goto LAB_00025b05;
                }
              }
              puVar7 = *(undefined4 **)(*(int *)(in_ECX + 0x124) + 0x10);
              piVar8 = (int *)*piVar8;
            } while (piVar8 != (int *)*(int *)(puVar7[2] + 0x68));
          }
          return CONCAT31((int3)((uint)puVar7 >> 8),1);
        }
      }
LAB_00025b05:
      return uVar4 & 0xffffff00;
    }
  }
  return uVar4 & 0xffffff00;
}
