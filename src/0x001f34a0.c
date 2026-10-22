/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95088DB02FF2B6E2499184C6A1DA611A9A7D65603C9A3D21BE6B6877F14A814F
 * Entry: 0x001f34a0, Ghidra index: 7019, label: FUN_001f34a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f34a0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  fVar2 = (*(float *)(param_2 + 0x10) -
          (float)-**(int **)(param_1 + 0x20) * *(float *)(param_1 + 8) * 0.5) *
          *(float *)(param_1 + 0xc);
  iVar3 = (int)fVar2;
  if ((float)iVar3 < fVar2 == ((float)iVar3 == fVar2)) {
    iVar3 = iVar3 + -1;
  }
  fVar2 = (*(float *)(param_2 + 0x18) -
          (float)-(*(int **)(param_1 + 0x20))[1] * *(float *)(param_1 + 8) * 0.5) *
          *(float *)(param_1 + 0xc);
  iVar4 = (int)fVar2;
  if ((float)iVar4 < fVar2 == ((float)iVar4 == fVar2)) {
    iVar4 = iVar4 + -1;
  }
  if (-1 < iVar3) {
    iVar1 = **(int **)(param_1 + 0x20);
    if ((((iVar3 < iVar1) && (-1 < iVar4)) && (iVar4 < (*(int **)(param_1 + 0x20))[1])) &&
       (iVar3 = (iVar1 * iVar4 + iVar3) * 0x40 + *(int *)(param_1 + 0x18), iVar3 != 0)) {
      if (*(int *)(iVar3 + 8) == 0) {
        FUN_001f35b0(0x3f800000);
      }
      if (*(int *)(iVar3 + 8) != 0) {
        FUN_002b8c60();
      }
    }
  }
  return;
}
