/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EC4778F0A5D3CA27BE20CA8E96BB0D2147C83D4292DDEDCBFECABC427EF50BA
 * Entry: 0x0021cd00, Ghidra index: 7533, label: FUN_0021cd00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern undefined4 FUN_0021ccc0(int param_1);
undefined1 FUN_0021cd00(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_9 = 0;
  puVar5 = (undefined4 *)FUN_002ea01d(0x78);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar12 = puVar5;
    for (iVar9 = 0x1e; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  fVar3 = (float10)log2((float10)param_2 * (float10)0.4);
  fVar4 = (float10)log2((float10)2.0);
  local_8 = (int)(((float10)1.0 / ((float10)0.6931471805599453 * fVar4)) *
                 (float10)0.6931471805599453 * fVar3) + 1;
  local_4 = 1;
  piVar6 = &local_8;
  if (local_8 < 2) {
    piVar6 = &local_4;
  }
  FUN_0021d370(param_1,*piVar6);
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x74) = 0;
  iVar9 = *(int *)(param_1 + 0x9c);
  iVar10 = *(int *)(iVar9 + 0x74);
  while (iVar10 < 8) {
    iVar1 = *(int *)(param_1 + 0x7c + iVar10 * 4);
    if (iVar1 != 0) {
      piVar6 = *(int **)(iVar1 + 0x14);
      (**(code **)(*piVar6 + 0x30))(piVar6,FUN_0021ccc0,iVar9 + 4 + iVar10 * 4);
      piVar7 = *(int **)(param_1 + 0x9c);
      if (piVar7[piVar7[0x1d] + 1] != 0) {
        piVar2 = (int *)piVar7[piVar7[0x1d] + 0x13];
        iVar9 = *piVar7 * piVar7[piVar7[0x1d] + 1];
        piVar7 = (int *)thunk_FUN_002ea01d(iVar9 * 4 + 4);
        if (piVar7 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = piVar7 + 1;
          *piVar7 = iVar9;
          FUN_0001fe40(piVar11,4,iVar9,UINT32_C(0x0012de40));
        }
        *piVar2 = (int)piVar11;
        piVar7 = *(int **)(param_1 + 0x9c);
        iVar9 = 1;
        if (1 < *piVar7) {
          do {
            piVar2[iVar9] = *piVar2 + piVar7[piVar7[0x1d] + 1] * iVar9 * 4;
            piVar7 = *(int **)(param_1 + 0x9c);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *piVar7);
        }
        *(undefined4 *)
         (*(int *)(param_1 + 0x9c) + 4 + *(int *)(*(int *)(param_1 + 0x9c) + 0x74) * 4) = 0;
        (**(code **)(*piVar6 + 0x30))(piVar6,UINT32_C(0x0021ca30),*(undefined4 *)(param_1 + 0x9c));
      }
      local_9 = 1;
    }
    piVar6 = (int *)(*(int *)(param_1 + 0x9c) + 0x74);
    *piVar6 = *piVar6 + 1;
    iVar9 = *(int *)(param_1 + 0x9c);
    iVar10 = *(int *)(iVar9 + 0x74);
  }
  iVar9 = *(int *)(param_1 + 0x9c);
  iVar10 = 0;
  *(float *)(iVar9 + 0x44) = *(float *)(iVar9 + 0x48) + *(float *)(iVar9 + 0x44);
  piVar6 = *(int **)(param_1 + 0x9c);
  if (0 < *piVar6) {
    iVar9 = 0;
    do {
      iVar1 = piVar6[0x1b];
      iVar8 = FUN_00219e40(param_1);
      if (iVar8 != 0) {
        *(byte *)(iVar8 + 0x94) = *(byte *)(iVar8 + 0x94) & 0xbf;
        FUN_0021d040(param_1,iVar8,param_3);
        if (*(int *)(iVar1 + iVar9) != 0) {
          piVar6 = *(int **)(*(int *)(iVar1 + iVar9) + 0x14);
          (**(code **)(*piVar6 + 0x30))(piVar6,UINT32_C(0x0021cfe0),param_1);
        }
      }
      piVar6 = *(int **)(param_1 + 0x9c);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < *piVar6);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0x7f7fffff;
  if (((*(byte *)(param_1 + 0x26) & 0x10) != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_000e03a0();
    *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xef;
  }
  return local_9;
}
