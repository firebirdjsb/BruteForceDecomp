/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53B343D763092EC471E18B82247C4391CF1F698FC2E2D69377F5A0DB19AC2652
 * Entry: 0x00151a00, Ghidra index: 4416, label: FUN_00151a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00151a00(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int in_ECX;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  do {
    fVar1 = *param_1;
    if (fVar1 == 0.0) {
      FUN_001516c0(in_ECX);
      return;
    }
    iVar5 = 0;
    pfVar3 = (float *)(in_ECX + 0x6c);
    pfVar2 = param_1;
    do {
      pfVar4 = pfVar2 + 3;
      if ((pfVar2[2] + param_1[5] < pfVar3[-4]) || (*pfVar3 < pfVar2[2] - param_1[5])) break;
      if ((param_1[5] + *pfVar4 < pfVar3[-3]) || (pfVar3[1] < *pfVar4 - param_1[5])) {
        iVar5 = iVar5 + 1;
        break;
      }
      if ((pfVar2[4] + param_1[5] < pfVar3[-2]) || (pfVar3[2] < pfVar2[4] - param_1[5])) {
        iVar5 = iVar5 + 2;
        break;
      }
      iVar5 = iVar5 + 3;
      pfVar3 = pfVar3 + 3;
      pfVar2 = pfVar4;
    } while (iVar5 < 3);
    if (iVar5 != 3) {
      return;
    }
    FUN_00151a00(param_1 + 7);
    param_1 = (float *)((int)param_1 + (int)fVar1);
  } while( true );
}
