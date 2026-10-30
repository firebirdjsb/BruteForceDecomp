/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 578BCF41F8404A781712C40B5C26F57FA7C1E5330F354084C2BA2F18E9CC8F83
 * Entry: 0x002dc210, Ghidra index: 10299, label: FUN_002dc210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002dc210(int param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int unaff_ESI;
  undefined4 *puVar9;
  int *piVar10;
  int local_8;
  
  puVar3 = *(undefined4 **)(in_EAX + 8);
  uVar5 = (uint)((int)puVar3 + *(int *)(unaff_ESI + 4) * 4 + 0x1f) & 0xffffffe0;
  if (uVar5 < *(uint *)(in_EAX + 0xc)) {
    *(uint *)(in_EAX + 8) = uVar5;
  }
  else {
    puVar3 = (undefined4 *)FUN_002bbe20();
  }
  puVar9 = puVar3;
  for (uVar5 = *(uint *)(unaff_ESI + 4) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar6 = 0;
  bVar2 = false;
  local_8 = 0;
  if (3 < param_3) {
    piVar10 = (int *)(param_2 + 0xc);
    iVar8 = 3;
    pfVar7 = (float *)(param_1 + 4);
    do {
      fVar1 = pfVar7[-1];
      iVar6 = piVar10[-3];
      if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x28) + iVar6 * 4) + 100) *
          *(float *)(unaff_ESI + 0x18) * fVar1 <
          *(float *)(*(int *)(unaff_ESI + 0x1c) + 0xcc) * 0.01) {
        bVar2 = true;
      }
      puVar3[iVar6] = 1;
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar6 * 4) = fVar1;
      fVar1 = *pfVar7;
      iVar6 = *(int *)((param_2 - param_1) + (int)pfVar7);
      if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x28) + iVar6 * 4) + 100) *
          *(float *)(unaff_ESI + 0x18) * fVar1 <
          *(float *)(*(int *)(unaff_ESI + 0x1c) + 0xcc) * 0.01) {
        bVar2 = true;
      }
      puVar3[iVar6] = 1;
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar6 * 4) = fVar1;
      fVar1 = pfVar7[1];
      iVar6 = piVar10[-1];
      if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x28) + iVar6 * 4) + 100) *
          *(float *)(unaff_ESI + 0x18) * fVar1 <
          *(float *)(*(int *)(unaff_ESI + 0x1c) + 0xcc) * 0.01) {
        bVar2 = true;
      }
      puVar3[iVar6] = 1;
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar6 * 4) = fVar1;
      fVar1 = pfVar7[2];
      iVar6 = *piVar10;
      if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x28) + iVar6 * 4) + 100) *
          *(float *)(unaff_ESI + 0x18) * fVar1 <
          *(float *)(*(int *)(unaff_ESI + 0x1c) + 0xcc) * 0.01) {
        bVar2 = true;
      }
      puVar3[iVar6] = 1;
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar6 * 4) = fVar1;
      iVar6 = local_8 + 4;
      iVar8 = iVar8 + 4;
      pfVar7 = pfVar7 + 4;
      piVar10 = piVar10 + 4;
      local_8 = iVar6;
    } while (iVar8 < param_3);
  }
  if (iVar6 < param_3) {
    param_3 = param_3 - iVar6;
    pfVar7 = (float *)(param_1 + iVar6 * 4);
    do {
      fVar1 = *pfVar7;
      iVar6 = *(int *)((int)pfVar7 + (param_2 - param_1));
      if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x28) + iVar6 * 4) + 100) *
          *(float *)(unaff_ESI + 0x18) * fVar1 <
          *(float *)(*(int *)(unaff_ESI + 0x1c) + 0xcc) * 0.01) {
        bVar2 = true;
      }
      puVar3[iVar6] = 1;
      pfVar7 = pfVar7 + 1;
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar6 * 4) = fVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar6 = *(int *)(unaff_ESI + 4);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      if ((puVar3[iVar8] == 0) && (iVar4 = FUN_002d9d70(), iVar4 == 0)) {
        return false;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return !bVar2;
}
