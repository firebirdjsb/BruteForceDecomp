/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66E075693A21FA2752453445F993799E822E6EE35DA91989AC99B8B20B072659
 * Entry: 0x00054f90, Ghidra index: 803, label: FUN_00054f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00054f90(float param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 extraout_var;
  int *unaff_EBX;
  float10 fVar8;
  float10 fVar9;
  
  uVar7 = in_EAX;
  if (unaff_EBX != (int *)0x0) {
    iVar5 = (**(code **)(*unaff_EBX + 0xf4))();
    uVar7 = 0;
    if (iVar5 != 0) {
      piVar1 = *(int **)(in_EAX + 4);
      iVar5 = (**(code **)(*unaff_EBX + 0x40))();
      iVar6 = (**(code **)(*piVar1 + 0x40))();
      fVar2 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar5 + 0x2c);
      fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(iVar5 + 0x28);
      fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(iVar5 + 0x24);
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      uVar7 = CONCAT22((short)((uint)(iVar6 + 0x24) >> 0x10),
                       (ushort)(fVar2 < 225.0) << 8 | (ushort)isnan(fVar2) << 10 |
                       (ushort)(fVar2 == 225.0) << 0xe);
      if (fVar2 >= 225.0) {
        fVar8 = (float10)FUN_00054e00();
        (**(code **)(*unaff_EBX + 0xf4))();
        fVar9 = (float10)FUN_00054ec0();
        fVar9 = fVar9 - (float10)param_1 * (float10)0.5;
        fVar8 = (float10)(float)fVar8;
        uVar7 = CONCAT22(extraout_var,
                         (ushort)(fVar9 < fVar8) << 8 | (ushort)(isnan(fVar9) || isnan(fVar8)) << 10 |
                         (ushort)(fVar9 == fVar8) << 0xe);
        if (fVar9 < fVar8 == (fVar9 == fVar8)) goto LAB_00055059;
      }
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
LAB_00055059:
  return uVar7 & 0xffffff00;
}
