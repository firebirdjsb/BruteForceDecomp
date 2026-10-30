/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF851379AB03E272BD90D2F007AD52240B0A4A9CB162929A2630DB41D8672378
 * Entry: 0x002bb290, Ghidra index: 9901, label: FUN_002bb290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb290(void)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  uint uVar10;
  int iVar11;
  int unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0xc) + 0xac);
  iVar11 = *(int *)(iVar3 + 8);
  uVar10 = iVar11 + 0x43U & 0xffffffe0;
  if (uVar10 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar3 + 8) = uVar10;
  }
  else {
    iVar11 = FUN_002bbe20();
  }
  *(int *)(unaff_ESI + 0x1cc) = iVar11;
  *(undefined4 *)(iVar11 + 0x20) = 0;
  uVar2 = *(undefined4 *)(unaff_ESI + 0xa4);
  pdVar1 = (double *)(*(int *)(unaff_ESI + 0xc) + 0x108);
  uVar4 = *(undefined4 *)pdVar1;
  uVar5 = *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x10c);
  dVar9 = *pdVar1;
  puVar6 = *(undefined4 **)(unaff_ESI + 0x1cc);
  uVar7 = *(undefined4 *)(unaff_ESI + 0x9c);
  puVar6[1] = *(undefined4 *)(unaff_ESI + 0xa0);
  *puVar6 = uVar7;
  puVar6[2] = uVar2;
  iVar3 = *(int *)(unaff_ESI + 0x1cc);
  puVar6 = (undefined4 *)(unaff_ESI + 0xec);
  *(undefined4 *)(iVar3 + 0x10) = *puVar6;
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(unaff_ESI + 0xf0);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(unaff_ESI + 0xf4);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(unaff_ESI + 0xf8);
  FUN_002b3d00();
  FUN_002b4370(puVar6,unaff_ESI + 0xdc,puVar6,
               (float)(((float10)dVar9 - (float10)*(double *)(unaff_ESI + 0x70)) *
                      (float10)*(float *)(unaff_ESI + 0x78)));
  FUN_002b4100();
  FUN_002b2b10(unaff_ESI,unaff_ESI + 300,uVar4,uVar5);
  fVar8 = *(float *)(unaff_ESI + 0x78) + *(float *)(unaff_ESI + 0x78);
  fVar12 = (float10)FUN_002b7160(local_10);
  fVar13 = (float10)FUN_002b7160(local_14);
  fVar14 = (float10)FUN_002b7160(local_c);
  *(float *)(unaff_ESI + 0x9c) = (float)fVar13 * fVar8;
  *(float *)(unaff_ESI + 0xa0) = (float)fVar12 * fVar8;
  *(float *)(unaff_ESI + 0xa4) = (float)(fVar14 * (float10)fVar8);
  return;
}
