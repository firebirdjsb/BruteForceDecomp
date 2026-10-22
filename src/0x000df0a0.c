/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 535B97EE2226120C0102B5C920BE589601911008A3645A59F7E38FB57EC884A3
 * Entry: 0x000df0a0, Ghidra index: 2729, label: FUN_000df0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000df0a0(int param_1,int param_2,int *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float fVar18;
  float fVar19;
  float *local_8;
  
  uVar9 = param_3[0x43];
  bVar15 = (~(byte)(uVar9 >> 1) | ~(byte)uVar9) & 1;
  if (((~(byte)(uVar9 >> 2) & 1) == 0) || (bVar13 = true, *(int *)(param_1 + 0xa40) == 0)) {
    bVar13 = false;
  }
  if ((bVar15 != 0) || (bVar13)) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    fVar19 = *(float *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    fVar18 = fVar19;
    if (fVar4 <= fVar19) {
      fVar18 = fVar4;
    }
    if (fVar19 <= fVar4) {
      fVar19 = fVar4;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 0x204) + 0x3c);
    *(int *)(*(int *)(param_1 + 0x204) + 0x3c) = iVar10 + 1;
    FUN_000cfec0();
    FUN_000d0330();
    while (local_8 != (float *)0x0) {
      if (bVar15 != 0) {
        for (pfVar16 = (float *)local_8[7]; pfVar16 != (float *)0x0; pfVar16 = (float *)*pfVar16) {
          piVar11 = *(int **)((uint)*(ushort *)(pfVar16 + 2) * 0x10 + 0xc +
                             *(int *)(*(int *)(param_1 + 0x204) + 0x14));
          if ((((((piVar11 != (int *)0x0) && (*(char *)((int)piVar11 + 0x26) < '\0')) &&
                (iVar12 = piVar11[6], piVar11[6] = iVar10, iVar12 != iVar10)) &&
               (((param_3[0x44] & 1 << ((byte)*(undefined4 *)(piVar11[3] + 4) & 0x1f)) == 0 &&
                (cVar14 = (**(code **)(*param_3 + 4))(piVar11), cVar14 != '\0')))) &&
              ((**(code **)(*piVar11 + 0x104))(param_2), param_4 != '\0')) &&
             (*(int *)(param_2 + 0xc) != 0)) goto LAB_000df3a1;
        }
      }
      if (bVar13) {
        if ((param_4 == '\0') || (*(int *)(param_2 + 0xc) == 0)) {
          fVar4 = *(float *)((int)local_8[0xe] + 4);
          if (((fVar18 < fVar4 != (fVar18 == fVar4)) &&
              (*(float *)((int)local_8[0xe] + 8) <= fVar19)) &&
             ((local_8[2] != 0.0 || (FUN_001f35b0(0x3f800000), local_8[2] != 0.0)))) {
            FUN_002b8c60();
          }
          goto LAB_000df34c;
        }
LAB_000df353:
        if ((ABS(*local_8 - *(float *)(param_2 + 0x20)) < *(float *)((int)local_8[6] + 0x10)) &&
           (ABS(local_8[1] - *(float *)(param_2 + 0x28)) < *(float *)((int)local_8[6] + 0x10)))
        break;
      }
      else {
LAB_000df34c:
        if (*(int *)(param_2 + 0xc) != 0) goto LAB_000df353;
      }
      local_8 = (float *)FUN_000d0330();
    }
LAB_000df3a1:
    if ((bVar15 != 0) &&
       ((cVar14 = FUN_001f4810(uVar2,uVar1), cVar14 == '\0' ||
        (cVar14 = FUN_001f4810(uVar5,uVar3), cVar14 == '\0')))) {
      puVar17 = *(undefined4 **)(*(int *)(param_1 + 0x204) + 0x2c);
      while ((puVar17 != (undefined4 *)0x0 &&
             ((((piVar11 = *(int **)((uint)*(ushort *)(puVar17 + 2) * 0x10 + 0xc +
                                    *(int *)(*(int *)(param_1 + 0x204) + 0x14)),
                piVar11 == (int *)0x0 || (-1 < *(char *)((int)piVar11 + 0x26))) ||
               (iVar12 = piVar11[6], piVar11[6] = iVar10, iVar12 == iVar10)) ||
              ((((param_3[0x44] & 1 << ((byte)*(undefined4 *)(piVar11[3] + 4) & 0x1f)) != 0 ||
                (cVar14 = (**(code **)(*param_3 + 4))(piVar11), cVar14 == '\0')) ||
               (((**(code **)(*piVar11 + 0x104))(param_2), param_4 == '\0' ||
                (*(int *)(param_2 + 0xc) == 0))))))))) {
        puVar17 = (undefined4 *)*puVar17;
      }
    }
  }
  uVar9 = param_3[0x43];
  if ((((~(byte)(uVar9 >> 4) & 1) != 0) || ((~(byte)(uVar9 >> 6) & 1) != 0)) ||
     ((~(byte)(uVar9 >> 8) & 1) != 0)) {
    if (*(float *)(param_2 + 0x20) <= *(float *)(param_2 + 0x10)) {
      fVar19 = *(float *)(param_2 + 0x20);
    }
    else {
      fVar19 = *(float *)(param_2 + 0x10);
    }
    if (*(float *)(param_2 + 0x10) <= *(float *)(param_2 + 0x20)) {
      fVar4 = *(float *)(param_2 + 0x20);
    }
    else {
      fVar4 = *(float *)(param_2 + 0x10);
    }
    if (*(float *)(param_2 + 0x24) <= *(float *)(param_2 + 0x14)) {
      fVar18 = *(float *)(param_2 + 0x24);
    }
    else {
      fVar18 = *(float *)(param_2 + 0x14);
    }
    if (*(float *)(param_2 + 0x14) <= *(float *)(param_2 + 0x24)) {
      fVar6 = *(float *)(param_2 + 0x24);
    }
    else {
      fVar6 = *(float *)(param_2 + 0x14);
    }
    if (*(float *)(param_2 + 0x28) <= *(float *)(param_2 + 0x18)) {
      fVar7 = *(float *)(param_2 + 0x28);
    }
    else {
      fVar7 = *(float *)(param_2 + 0x18);
    }
    if (*(float *)(param_2 + 0x18) <= *(float *)(param_2 + 0x28)) {
      fVar8 = *(float *)(param_2 + 0x28);
    }
    else {
      fVar8 = *(float *)(param_2 + 0x18);
    }
    pfVar16 = *(float **)(param_1 + 0x104);
    for (puVar17 = *(undefined4 **)(*(int *)(param_1 + 0xa70) + 0x104);
        puVar17 != *(undefined4 **)(*(int *)(param_1 + 0xa70) + 0x108); puVar17 = puVar17 + 0x11) {
      if (((((puVar17[0xf] != 0) && ((param_3[0x43] & 1 << ((byte)*puVar17 & 0x1f)) == 0)) &&
           (*pfVar16 < fVar4 + 0.5 != (*pfVar16 == fVar4 + 0.5))) &&
          (((fVar19 - 0.5 < pfVar16[1] != (fVar19 - 0.5 == pfVar16[1]) &&
            (pfVar16[2] < fVar6 + 0.5 != (pfVar16[2] == fVar6 + 0.5))) &&
           ((fVar18 - 0.5 < pfVar16[3] != (fVar18 - 0.5 == pfVar16[3]) &&
            ((pfVar16[4] < fVar8 + 0.5 != (pfVar16[4] == fVar8 + 0.5) &&
             (fVar7 - 0.5 < pfVar16[5] != (fVar7 - 0.5 == pfVar16[5]))))))))) &&
         (cVar14 = FUN_0016b2d0(), cVar14 != '\0')) {
        iVar10 = puVar17[0xf];
        if ((iVar10 == 0) ||
           (((uVar9 = *(uint *)(param_2 + 8), (uVar9 & 1) == 0 || (*(int *)(iVar10 + 0x18) == 0)) &&
            ((((uVar9 & 2) == 0 || ((*(byte *)(iVar10 + 0x70) & 0x10) != 0)) &&
             (((uVar9 & 4) == 0 || ((*(byte *)(iVar10 + 0x70) & 0x10) == 0)))))))) {
          if (*(int *)(iVar10 + 4) == 2) {
            (**(code **)(**(int **)(iVar10 + 0x7c) + 0x18))(param_2,iVar10);
          }
          else if (*(int *)(iVar10 + 4) == 3) {
            FUN_002b89f0(param_2,iVar10);
          }
        }
        if ((param_4 != '\0') && (*(int *)(param_2 + 0xc) != 0)) {
          return;
        }
      }
      pfVar16 = pfVar16 + 6;
    }
  }
  return;
}
