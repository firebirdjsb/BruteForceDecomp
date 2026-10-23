/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 196EAC8860FB5D79E03ABCBBC473BF32D137C0363AD8A0D58C8A5DD8B0A9D684
 * Entry: 0x00046c70, Ghidra index: 552, label: FUN_00046c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00046c70(int *param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  int in_EAX;
  float *pfVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(in_EAX + 4);
  iVar1 = *(int *)(in_EAX + 8);
  bVar9 = false;
  if (iVar13 != iVar1) {
    if (*(int *)(iVar13 + 0x14) == 0) {
      pfVar11 = (float *)(iVar13 + 4);
    }
    else {
      pfVar11 = (float *)(**(code **)(*(int *)(*(int *)(iVar13 + 0x14) + 8) + 4))();
    }
    fVar2 = pfVar11[2];
    fVar3 = pfVar11[1];
    fVar4 = *pfVar11;
    iVar13 = iVar13 + 0x18;
    if (iVar13 != iVar1) {
      do {
        iVar5 = *(int *)(iVar13 + 0x14);
        if (iVar5 != 0) {
          fVar6 = *(float *)(iVar5 + 0x1c) - param_2[2];
          pfVar11 = (float *)(iVar5 + 0x14);
          fVar7 = *(float *)(iVar5 + 0x18) - param_2[1];
          fVar6 = (*pfVar11 - *param_2) * (*pfVar11 - *param_2) + fVar7 * fVar7 + fVar6 * fVar6;
          if (fVar6 < param_3 == (fVar6 == param_3)) {
            if (bVar9) {
              return 0;
            }
            if ((*param_2 - fVar4) * (*pfVar11 - fVar4) +
                (param_2[1] - fVar3) * (*(float *)(iVar5 + 0x18) - fVar3) +
                (param_2[2] - fVar2) * (*(float *)(iVar5 + 0x1c) - fVar2) < 0.0) {
              return 0;
            }
          }
          else {
            bVar9 = true;
            iVar12 = (**(code **)(*param_1 + 0x40))();
            fVar6 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar5 + 0x1c);
            fVar7 = *(float *)(iVar12 + 0x28) - *(float *)(iVar5 + 0x18);
            fVar8 = *(float *)(iVar12 + 0x24) - *pfVar11;
            cVar10 = FUN_0004cd10(*(undefined4 *)(iVar5 + 0x10),
                                  SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) + 0.05);
            if (cVar10 != '\0') {
              return iVar5;
            }
          }
        }
        iVar13 = iVar13 + 0x18;
        if (iVar13 == iVar1) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}
