/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC89829537BCE7DB7113BDF426A105E56DD77919C45D5B286875248CE0030B70
 * Entry: 0x002c85c0, Ghidra index: 10125, label: FUN_002c85c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c85c0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar3 = ((uint)(param_3 + param_3) >> 0x17 & 0xff) - 0x7e;
  if (iVar3 < -0x28) {
    iVar3 = -0x28;
  }
  iVar2 = (0x29 - iVar3) * 4;
  do {
    fVar1 = *(float *)(iVar2 + param_1);
    fVar4 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x10) - param_3) * fVar1));
    fVar5 = (float10)FUN_002eac34((double)((param_3 + *(float *)(param_2 + 0x10)) * fVar1));
    if ((int)fVar5 <= (int)fVar4 + 2) {
      fVar5 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x14) - param_3) * fVar1));
      fVar6 = (float10)FUN_002eac34((double)((param_3 + *(float *)(param_2 + 0x14)) * fVar1));
      if ((int)fVar6 <= (int)fVar5 + 2) {
        fVar6 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x18) - param_3) * fVar1));
        fVar7 = (float10)FUN_002eac34((double)((param_3 + *(float *)(param_2 + 0x18)) * fVar1));
        if ((int)fVar7 <= (int)fVar6 + 2) {
          *(int *)(param_1 + 0x144) = (int)fVar4;
          *(int *)(param_1 + 0x148) = (int)fVar5;
          *(int *)(param_1 + 0x14c) = (int)fVar6;
          *(int *)(param_1 + 0x150) = iVar3 + -1;
          *(int *)(param_1 + 0x154) = iVar3;
          if (param_3 < param_4) {
            fVar1 = *(float *)(param_1 + (0x28 - iVar3) * 4);
            fVar4 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x10) - param_4) * fVar1));
            fVar5 = (float10)FUN_002eac34((double)((param_4 + *(float *)(param_2 + 0x10)) * fVar1));
            if ((int)fVar5 <= (int)fVar4 + 2) {
              fVar5 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x14) - param_4) * fVar1)
                                           );
              fVar6 = (float10)FUN_002eac34((double)((param_4 + *(float *)(param_2 + 0x14)) * fVar1)
                                           );
              if ((int)fVar6 <= (int)fVar5 + 2) {
                fVar6 = (float10)FUN_002ea51b((double)((*(float *)(param_2 + 0x18) - param_4) *
                                                      fVar1));
                fVar7 = (float10)FUN_002eac34((double)((param_4 + *(float *)(param_2 + 0x18)) *
                                                      fVar1));
                if ((int)fVar7 <= (int)fVar6 + 2) {
                  *(int *)(param_1 + 0x144) = (int)fVar4;
                  *(int *)(param_1 + 0x148) = (int)fVar5;
                  *(int *)(param_1 + 0x14c) = (int)fVar6;
                  *(int *)(param_1 + 0x150) = iVar3;
                  *(int *)(param_1 + 0x154) = iVar3 + 1;
                  return (float10)param_4;
                }
              }
            }
          }
          return (float10)param_3;
        }
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -4;
  } while( true );
}
