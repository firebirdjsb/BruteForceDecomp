/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C28EF4CB32FCF0334FD3A60A067ED9FB7F26927B83966FB71F5802585B8A5235
 * Entry: 0x0021d4d0, Ghidra index: 7539, label: FUN_0021d4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0021d4d0(float param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  undefined2 extraout_var;
  float in_ECX;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  float local_4;
  
  if (0.0 < param_1) {
    unaff_ESI[0x1d] = 0;
    local_4 = in_ECX;
    do {
      iVar4 = unaff_ESI[0x1d];
      if (unaff_ESI[iVar4 + 1] != 0) {
        piVar2 = (int *)**(undefined4 **)(unaff_ESI[iVar4 + 0x13] + unaff_ESI[0x1c] * 4);
        (**(code **)(*piVar2 + 100))(piVar2,&local_4);
        iVar4 = unaff_ESI[0x1d];
        fVar3 = param_1 * (float)unaff_ESI[iVar4 + 9];
        if (fVar3 >= local_4 && (fVar3 == local_4) == 0) {
          return CONCAT22(extraout_var,
                          (ushort)(fVar3 < local_4) << 8 |
                          (ushort)(isnan(fVar3) || isnan(local_4)) << 10 |
                          (ushort)(fVar3 == local_4) << 0xe);
        }
      }
      unaff_ESI[0x1d] = iVar4 + 1;
    } while (iVar4 + 1 < 8);
  }
  unaff_ESI[0x1d] = 0;
  do {
    iVar4 = *(int *)(unaff_ESI[unaff_ESI[0x1d] + 0x13] + unaff_ESI[0x1c] * 4);
    iVar5 = 0;
    if (0 < unaff_ESI[unaff_ESI[0x1d] + 1]) {
      do {
        piVar2 = *(int **)(iVar4 + iVar5 * 4);
        (**(code **)(*piVar2 + 0x68))(piVar2,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < unaff_ESI[unaff_ESI[0x1d] + 1]);
    }
    iVar4 = unaff_ESI[0x1d];
    unaff_ESI[0x1d] = iVar4 + 1;
  } while (iVar4 + 1 < 8);
  piVar2 = *(int **)(unaff_ESI[0x1b] + 8 + unaff_ESI[0x1c] * 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x68))(piVar2,0);
  }
  iVar4 = *(int *)(unaff_ESI[0x1b] + 0x10 + unaff_ESI[0x1c] * 0x14);
  if ((iVar4 != 0) && (*(float *)(param_2 + 0xc58) < 1.0)) {
    pbVar1 = (byte *)(iVar4 + 0x94);
    *pbVar1 = *pbVar1 | 0x40;
  }
  iVar4 = unaff_ESI[0x1c];
  unaff_ESI[0x1c] = (iVar4 + 1) % *unaff_ESI;
  return CONCAT31((int3)((uint)((iVar4 + 1) / *unaff_ESI) >> 8),1);
}
