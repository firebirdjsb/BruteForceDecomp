/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70212E74F34B61545BD625259962F692D6A75D76C82A9E7BE977B51F4A5E57A0
 * Entry: 0x002c41e0, Ghidra index: 10053, label: FUN_002c41e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c41e0(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int *piVar13;
  int local_20;
  float local_1c [3];
  undefined1 *local_10;
  
  uVar11 = (uint)*(ushort *)(in_ECX + 2);
  local_10 = &stack0xffffffd0;
  piVar4 = *(int **)(in_EAX + 8);
  uVar7 = (int)piVar4 + uVar11 * 4 + 0x1f & 0xffffffe0;
  if (uVar7 < *(uint *)(in_EAX + 0xc)) {
    *(uint *)(in_EAX + 8) = uVar7;
  }
  else {
    piVar4 = (int *)FUN_002bbe20();
  }
  FUN_002ebea0();
  iVar5 = *(ushort *)(in_ECX + 2) - 1;
  if (-1 < iVar5) {
    puVar8 = (undefined4 *)(&stack0xffffffd4 + iVar5 * 0x10);
    do {
      piVar4[iVar5] = *(int *)(*(int *)(in_ECX + 4) + iVar5 * 4);
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[-1] = 0;
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + -4;
    } while (-1 < iVar5);
  }
  local_20 = uVar11 - 1;
  if (0 < local_20) {
    local_1c[0] = 1.4013e-45;
    piVar13 = piVar4;
    do {
      iVar5 = *piVar13;
      puVar12 = local_10;
      for (fVar9 = local_1c[0]; (int)fVar9 < (int)uVar11; fVar9 = (float)((int)fVar9 + 1)) {
        puVar12 = puVar12 + 0x10;
        pfVar6 = *(float **)(piVar4[(int)fVar9] + 0x40);
        pfVar1 = *(float **)(iVar5 + 0x40);
        if (ABS(ABS(*pfVar1 * *pfVar6 + pfVar6[1] * pfVar1[1] + pfVar6[2] * pfVar1[2]) - 1.0) <
            0.001) {
          FUN_002c3e20(puVar12,local_10,1.0 / ((float)uVar11 + 1e-10));
        }
      }
      piVar13 = piVar13 + 1;
      local_1c[0] = (float)((int)local_1c[0] + 1);
      local_10 = local_10 + 0x10;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  iVar5 = 0;
  if (3 < uVar11) {
    piVar13 = piVar4 + 2;
    iVar10 = 3;
    pfVar6 = local_1c;
    do {
      iVar2 = piVar13[-2];
      iVar3 = *(int *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x38) =
           *(float *)(iVar3 + 0x70) * pfVar6[-5] +
           *(float *)(iVar3 + 0x74) * pfVar6[-4] + *(float *)(iVar3 + 0x78) * pfVar6[-3] +
           *(float *)(iVar2 + 0x38);
      *(float *)(iVar2 + 0x3c) =
           *(float *)(iVar3 + 0x80) * pfVar6[-5] +
           *(float *)(iVar3 + 0x84) * pfVar6[-4] + *(float *)(iVar3 + 0x88) * pfVar6[-3] +
           *(float *)(iVar2 + 0x3c);
      iVar2 = piVar13[-1];
      iVar3 = *(int *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x38) =
           *(float *)(iVar3 + 0x70) * pfVar6[-1] +
           *(float *)(iVar3 + 0x74) * *pfVar6 + *(float *)(iVar3 + 0x78) * pfVar6[1] +
           *(float *)(iVar2 + 0x38);
      *(float *)(iVar2 + 0x3c) =
           *(float *)(iVar3 + 0x80) * pfVar6[-1] +
           *(float *)(iVar3 + 0x84) * *pfVar6 + *(float *)(iVar3 + 0x88) * pfVar6[1] +
           *(float *)(iVar2 + 0x3c);
      iVar2 = *piVar13;
      iVar3 = *(int *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x38) =
           *(float *)(iVar3 + 0x70) * pfVar6[3] +
           *(float *)(iVar3 + 0x74) * pfVar6[4] + *(float *)(iVar3 + 0x78) * pfVar6[5] +
           *(float *)(iVar2 + 0x38);
      *(float *)(iVar2 + 0x3c) =
           *(float *)(iVar3 + 0x80) * pfVar6[3] +
           *(float *)(iVar3 + 0x84) * pfVar6[4] + *(float *)(iVar3 + 0x88) * pfVar6[5] +
           *(float *)(iVar2 + 0x3c);
      iVar2 = piVar13[1];
      iVar3 = *(int *)(iVar2 + 0x40);
      iVar10 = iVar10 + 4;
      iVar5 = iVar5 + 4;
      piVar13 = piVar13 + 4;
      *(float *)(iVar2 + 0x38) =
           *(float *)(iVar3 + 0x70) * pfVar6[7] +
           *(float *)(iVar3 + 0x74) * pfVar6[8] + *(float *)(iVar3 + 0x78) * pfVar6[9] +
           *(float *)(iVar2 + 0x38);
      *(float *)(iVar2 + 0x3c) =
           *(float *)(iVar3 + 0x80) * pfVar6[7] +
           *(float *)(iVar3 + 0x84) * pfVar6[8] + *(float *)(iVar3 + 0x88) * pfVar6[9] +
           *(float *)(iVar2 + 0x3c);
      pfVar6 = pfVar6 + 0x10;
    } while (iVar10 < (int)uVar11);
  }
  if (iVar5 < (int)uVar11) {
    pfVar6 = (float *)(&stack0xffffffd4 + iVar5 * 0x10);
    do {
      iVar10 = piVar4[iVar5];
      iVar2 = *(int *)(iVar10 + 0x40);
      iVar5 = iVar5 + 1;
      *(float *)(iVar10 + 0x38) =
           *(float *)(iVar2 + 0x70) * pfVar6[-1] +
           *(float *)(iVar2 + 0x74) * *pfVar6 + *(float *)(iVar2 + 0x78) * pfVar6[1] +
           *(float *)(iVar10 + 0x38);
      *(float *)(iVar10 + 0x3c) =
           *(float *)(iVar2 + 0x80) * pfVar6[-1] +
           *(float *)(iVar2 + 0x84) * *pfVar6 + *(float *)(iVar2 + 0x88) * pfVar6[1] +
           *(float *)(iVar10 + 0x3c);
      pfVar6 = pfVar6 + 4;
    } while (iVar5 < (int)uVar11);
  }
  return;
}
