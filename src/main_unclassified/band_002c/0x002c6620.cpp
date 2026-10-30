/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FC53C3F50D9E4452DCE9FE9F0E899A01E493A111EA53250C803DB15634DB75D
 * Entry: 0x002c6620, Ghidra index: 10084, label: FUN_002c6620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6620(int *param_1,float *param_2,ushort *param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  double dVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 local_10 [16];
  
  iVar4 = *param_1;
  FUN_002c62f0(iVar4,iVar4 + 0xac,iVar4 + 0x9c);
  fVar10 = (float10)FUN_002b67e0(*param_1 + 0xac);
  *(float *)(*param_1 + 0x150) = (float)fVar10;
  fVar5 = *param_2;
  *(float *)(*param_1 + 0x78) = param_2[1];
  FUN_002c6450(param_1,fVar5,local_10);
  iVar4 = *param_1;
  iVar8 = *(int *)(iVar4 + 0xc);
  dVar7 = *(double *)(iVar8 + 0x108);
  dVar3 = *(double *)(iVar4 + 0x70);
  *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar8 + 0x108);
  *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar8 + 0x10c);
  fVar5 = (float)((float10)dVar7 - (float10)dVar3);
  iVar4 = *param_1;
  *(float *)(iVar4 + 0xbc) = *(float *)(iVar4 + 0xbc) + *(float *)(iVar4 + 0xcc) * fVar5;
  *(ulonglong *)(iVar4 + 0xc0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(iVar4 + 0xc0) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(iVar4 + 0xd0) >> 0x20) * fVar5,
                (float)*(undefined8 *)(iVar4 + 0xc0) + (float)*(undefined8 *)(iVar4 + 0xd0) * fVar5)
  ;
  iVar4 = *param_1;
  *(undefined4 *)(iVar4 + 0xcc) = *(undefined4 *)(iVar4 + 0xac);
  *(undefined4 *)(iVar4 + 0xd0) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(iVar4 + 0xb4);
  iVar4 = *param_1;
  *(undefined4 *)(iVar4 + 0xdc) = *(undefined4 *)(iVar4 + 0xec);
  *(undefined4 *)(iVar4 + 0xe0) = *(undefined4 *)(iVar4 + 0xf0);
  *(undefined4 *)(iVar4 + 0xe4) = *(undefined4 *)(iVar4 + 0xf4);
  *(undefined4 *)(iVar4 + 0xe8) = *(undefined4 *)(iVar4 + 0xf8);
  FUN_002b3d00();
  FUN_002b4600();
  FUN_002c68a0(param_1,local_10);
  iVar4 = *param_1;
  iVar8 = *(ushort *)(iVar4 + 0x52) - 1;
  if (-1 < iVar8) {
    fVar10 = ((float10)*(float *)(iVar4 + 0x158) + (float10)*(float *)(iVar4 + 0x150)) *
             (float10)1.00001;
    do {
      uVar2 = *(undefined4 *)(*param_1 + 0x150);
      iVar4 = *(int *)(*(int *)(*param_1 + 0x54) + iVar8 * 4);
      fVar5 = *param_2;
      pdVar1 = (double *)((int)param_2[2] + 0x108);
      uVar6 = *(undefined4 *)((int)param_2[2] + 0x10c);
      pdVar9 = (double *)(iVar4 + 0x40);
      fVar11 = (float10)*pdVar1 - (float10)*pdVar9;
      *(undefined4 *)pdVar9 = *(undefined4 *)pdVar1;
      *(undefined4 *)(iVar4 + 0x44) = uVar6;
      *(float *)(iVar4 + 0x50) =
           (float)(fVar11 * (float10)*(float *)(iVar4 + 0x48) + (float10)*(float *)(iVar4 + 0x50));
      *(float *)(iVar4 + 0x54) =
           (float)(fVar11 * (float10)*(float *)(iVar4 + 0x4c) + (float10)*(float *)(iVar4 + 0x54));
      *(float *)(iVar4 + 0x48) = (float)fVar10;
      *(undefined4 *)(iVar4 + 0x4c) = uVar2;
      fVar11 = fVar10 * (float10)fVar5 + (float10)*(float *)(iVar4 + 0x50);
      *(float *)(iVar4 + 0x58) = (float)fVar11;
      if (*(int *)(iVar4 + 0x60) == 0) {
        fVar12 = (float10)1e+10;
      }
      else {
        fVar12 = (float10)*(float *)(iVar4 + 100);
      }
      if (fVar12 - fVar11 < (float10)0.0) {
        if (*param_3 <= param_3[1]) {
          fVar10 = (float10)FUN_002ccf80();
        }
        *(double **)(*(int *)(param_3 + 2) + (uint)param_3[1] * 4) = pdVar9;
        param_3[1] = param_3[1] + 1;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}
