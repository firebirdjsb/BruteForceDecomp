/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32AF3F866C7522FF7BBBAFD7B11A1EADE84BFB68DD017B489504FB807F779D81
 * Entry: 0x001f4740, Ghidra index: 7034, label: FUN_001f4740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f4740(int param_1,int *param_2,int *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int **)(param_1 + 0x20))[1];
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = (param_4 - -((float)**(int **)(param_1 + 0x20) * 0.5 * *(float *)(param_1 + 8))) *
          *(float *)(param_1 + 0xc);
  iVar3 = (int)fVar2;
  if ((float)iVar3 < fVar2 == ((float)iVar3 == fVar2)) {
    iVar3 = iVar3 + -1;
  }
  *param_2 = iVar3;
  fVar1 = (param_5 - -((float)iVar4 * 0.5 * fVar1)) * *(float *)(param_1 + 0xc);
  iVar4 = (int)fVar1;
  if ((float)iVar4 < fVar1 == ((float)iVar4 == fVar1)) {
    iVar4 = iVar4 + -1;
  }
  *param_3 = iVar4;
  if ((((-1 < *param_2) && (*param_2 < **(int **)(param_1 + 0x20))) && (-1 < *param_3)) &&
     (*param_3 < (*(int **)(param_1 + 0x20))[1])) {
    return 1;
  }
  return 0;
}
