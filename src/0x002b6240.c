/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39F0C92758428773FFFF08C68CC155970CA8835341130B20756393ED56F1ACE7
 * Entry: 0x002b6240, Ghidra index: 9819, label: FUN_002b6240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6240(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_30;
  undefined8 local_2c;
  float local_24 [5];
  float local_10;
  float local_c;
  float local_8;
  
  pfVar5 = local_24;
  iVar6 = 3;
  do {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  do {
    fVar1 = *(float *)(iVar6 + param_1);
    uVar2 = *(undefined8 *)((float *)(iVar6 + param_1) + 1);
    uVar3 = *(undefined8 *)(param_2 + 1);
    fVar7 = (float)uVar2;
    fVar8 = (float)((ulonglong)uVar2 >> 0x20);
    uVar2 = *(undefined8 *)(param_2 + 5);
    uVar4 = *(undefined8 *)(param_2 + 9);
    *(float *)((int)&local_30 + iVar6) = *param_2 * fVar1 + param_2[4] * fVar7 + param_2[8] * fVar8;
    *(ulonglong *)((int)local_24 + iVar6 + -8) =
         CONCAT44((float)((ulonglong)uVar3 >> 0x20) * fVar1 +
                  (float)((ulonglong)uVar2 >> 0x20) * fVar7 +
                  (float)((ulonglong)uVar4 >> 0x20) * fVar8,
                  (float)uVar3 * fVar1 + (float)uVar2 * fVar7 + (float)uVar4 * fVar8);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x30);
  *param_3 = local_30;
  param_3[1] = (float)local_2c;
  param_3[2] = local_2c._4_4_;
  param_3[4] = local_24[1];
  param_3[5] = local_24[2];
  param_3[6] = local_24[3];
  param_3[8] = local_10;
  param_3[9] = local_c;
  param_3[10] = local_8;
  return;
}
