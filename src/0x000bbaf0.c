/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7177AA88262DDC06EAFFF5211C53A8964D545CEC8A8761ADA5D29DBB96EB80C2
 * Entry: 0x000bbaf0, Ghidra index: 2279, label: FUN_000bbaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bbaf0(int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int in_ECX;
  float local_c;
  int local_8;
  float local_4;
  
  fVar2 = 0.0;
  iVar1 = *(int *)(in_ECX + 0x2c);
  local_c = 0.0;
  if (*(int *)(iVar1 + 0x24) != 0) {
    if (*(short *)(iVar1 + 0x34) < 1) {
      fVar2 = 0.0;
      local_c = 0.0;
    }
    else {
      fVar2 = (float)(int)*(short *)(iVar1 + 0x30);
      local_c = (float)(int)*(short *)(iVar1 + 0x32);
    }
  }
  local_8 = *(int *)(in_ECX + 0x40);
  if (local_8 == -1) {
    local_8 = (int)*(short *)(in_ECX + 8);
  }
  else if (local_8 == 0) {
    local_8 = (int)*(short *)(in_ECX + 8) +
              (int)(((float)(int)*(short *)(in_ECX + 0xe) - fVar2) * 0.5);
  }
  else if (local_8 == 1) {
    local_8 = ((int)*(short *)(in_ECX + 8) - (int)fVar2) + (int)*(short *)(in_ECX + 0xe);
  }
  else {
    local_8 = *(short *)(in_ECX + 8) + local_8;
  }
  iVar1 = *(int *)(in_ECX + 0x44);
  if (iVar1 == -1) {
    local_c = (float)(int)*(short *)(in_ECX + 10);
  }
  else if (iVar1 == 0) {
    local_c = (float)(((int)*(short *)(in_ECX + 0xc) - (int)local_c) / 2 +
                     (int)*(short *)(in_ECX + 10));
  }
  else if (iVar1 == 1) {
    local_c = (float)(((int)*(short *)(in_ECX + 10) - (int)local_c) + (int)*(short *)(in_ECX + 0xc))
    ;
  }
  else {
    local_c = (float)(*(short *)(in_ECX + 10) + iVar1);
  }
  fVar2 = 0.0;
  local_4 = 0.0;
  if (((*(int *)(in_ECX + 0x28) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + 8), iVar1 != 0)
      ) && (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) {
    piVar3 = (int *)(**(code **)(*(int *)(iVar1 + 0x48) + 0x18))();
    fVar2 = (float)*piVar3;
    local_4 = (float)piVar3[1];
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  *(int *)(iVar1 + 0x28) = (int)(short)(int)((float)local_8 + fVar2);
  *(int *)(iVar1 + 0x2c) = (int)(short)(int)((float)(int)local_c + local_4);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)((float)local_8 + fVar2);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)((float)(int)local_c + local_4);
  }
  return;
}
