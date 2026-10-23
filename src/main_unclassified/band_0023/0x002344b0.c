/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32635E240C5EAEB5D5AFF606D36DEC6ACA5FA86C03FD7F565EB67975A1006CF3
 * Entry: 0x002344b0, Ghidra index: 7800, label: FUN_002344b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002344b0(int *param_1,int param_2)

{
  int *piVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  piVar1 = *(int **)(*(int *)(*param_1 + 0x1c) + 0xc + param_2 * 0x10);
  if (piVar1 == (int *)0x0) {
    return (float10)0.0;
  }
  local_14 = (float)param_1[0xe];
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    local_10 = *(float *)*param_1;
    local_c = 0;
    local_8 = local_10 - (float)param_1[0xe];
    local_4 = local_8;
    if (local_8 <= 0.0) {
      local_4 = 0.0;
    }
    local_14 = local_4;
    if (local_10 <= local_4) {
      local_14 = local_10;
      local_4 = local_10;
    }
  }
  fVar3 = (float)param_1[0xd];
  fVar4 = local_14;
  fVar2 = (float10)(**(code **)(*piVar1 + 0x20))(piVar1,local_14,fVar3,local_18,local_1c);
  (**(code **)(*piVar1 + 0x24))(piVar1,(float)fVar2,local_8,fVar3,fVar4,local_4);
  return (float10)fVar3;
}
