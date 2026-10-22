/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9A07BAFB87AC6851DC22F2587D410855359FC8FDA1F822D4BF620327C046107
 * Entry: 0x00304d70, Ghidra index: 11091, label: FUN_00304d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00304d70(float param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30 [12];
  
  iVar1 = in_EAX + 1;
  local_60[0] = 0.0;
  local_60[1] = 0.0;
  local_60[2] = 0.0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  iVar2 = iVar1 + 1;
  if (iVar2 == 3) {
    iVar2 = 0;
  }
  fVar4 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fsin((float10)param_1);
  local_60[iVar1 * 5] = (float)fVar4;
  local_60[iVar2 * 5] = (float)fVar4;
  local_60[iVar2 + iVar1 * 4] = (float)fVar5;
  local_60[iVar1 + iVar2 * 4] = (float)-fVar5;
  local_60[in_EAX * 5] = 1.0;
  FUN_003049c0();
  puVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *puVar3;
    puVar3 = puVar3 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}
