/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DB76BA9361233AF016A49B08916783D3453DD684DCBEDAD98D732B4F2AFD5D1
 * Entry: 0x00023460, Ghidra index: 225, label: FUN_00023460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00023460(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_1c;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 4);
  local_1c = 0.0;
  if (iVar5 != iVar1) {
    do {
      iVar4 = iVar5 + 0x18;
      if (iVar4 != iVar1) {
        if (*(int *)(iVar5 + 0x2c) == 0) {
          pfVar2 = (float *)(iVar5 + 0x1c);
        }
        else {
          pfVar2 = (float *)(**(code **)(*(int *)(*(int *)(iVar5 + 0x2c) + 8) + 4))();
        }
        if (*(int *)(iVar5 + 0x14) == 0) {
          pfVar3 = (float *)(iVar5 + 4);
        }
        else {
          pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(iVar5 + 0x14) + 8) + 4))();
        }
        local_1c = SQRT((*pfVar2 - *pfVar3) * (*pfVar2 - *pfVar3) +
                        (pfVar2[1] - pfVar3[1]) * (pfVar2[1] - pfVar3[1]) +
                        (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2])) + local_1c;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar5 = iVar4;
    } while (iVar4 != iVar1);
  }
  return (float10)local_1c;
}
