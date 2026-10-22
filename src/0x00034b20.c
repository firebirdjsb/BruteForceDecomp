/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E94128A2936BA569D1C08B413D4451D48FBA5CD371D294AE876D6AB4CB66CF61
 * Entry: 0x00034b20, Ghidra index: 346, label: FUN_00034b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00034b20(int *param_1,float *param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  
  iVar11 = param_1[2];
  puVar1 = *(undefined4 **)(iVar11 + 0x74);
  puVar12 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)*puVar1;
  }
  puVar2 = *(undefined4 **)(iVar11 + 0x68);
  puVar13 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar13 = (undefined4 *)*puVar2;
  }
  puVar3 = *(undefined4 **)(iVar11 + 0x74);
  puVar4 = *(undefined4 **)(iVar11 + 0x68);
  while ((((puVar13 != puVar4 || (puVar2 != puVar4)) || (puVar12 != puVar3)) || (puVar1 != puVar3)))
  {
    if (puVar13 == puVar2) {
      piVar14 = (int *)puVar12[3];
    }
    else {
      piVar14 = (int *)puVar13[3];
    }
    if (((piVar14 != (int *)0x0) && ((*(byte *)(piVar14 + 0x1c) & 1) == 0)) && (piVar14 != param_1))
    {
      piVar9 = (int *)(**(code **)(*piVar14 + 0xec))();
      iVar11 = *piVar9;
      uVar10 = (**(code **)(param_1[0x6d] + 0x9c))();
      cVar8 = (**(code **)(iVar11 + 0xc0))(uVar10);
      if (cVar8 == '\0') {
        iVar11 = (**(code **)(*piVar14 + 0x40))();
        fVar5 = param_2[2] - *(float *)(iVar11 + 0x2c);
        fVar6 = param_2[1] - *(float *)(iVar11 + 0x28);
        fVar7 = *param_2 - *(float *)(iVar11 + 0x24);
        fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
        fVar7 = param_3 * param_3;
        if (fVar7 < fVar5 == 0 && (fVar7 == fVar5) == 0) {
          return CONCAT31((int3)(CONCAT22((short)((uint)fVar6 >> 0x10),
                                          (ushort)(fVar7 < fVar5) << 8 |
                                          (ushort)(isnan(fVar7) || isnan(fVar5)) << 10 |
                                          (ushort)(fVar7 == fVar5) << 0xe) >> 8),1);
        }
      }
    }
    if (puVar13 == puVar2) {
      puVar12 = (undefined4 *)*puVar12;
    }
    else {
      puVar13 = (undefined4 *)*puVar13;
    }
  }
  return (uint)puVar4 & 0xffffff00;
}
