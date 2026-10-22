/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 852A1C025E9894009609316FEB81629082FE826A5A246B2215A35588B6DE1268
 * Entry: 0x0005a950, Ghidra index: 911, label: FUN_0005a950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005a950(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 uVar6;
  float local_18;
  int local_14;
  float local_10;
  float local_8;
  float local_4;
  
  puVar5 = *(undefined4 **)(in_ECX + 4);
  if (puVar5 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
  }
  FUN_001298b0(&local_18,uVar6,puVar5);
  puVar5 = (undefined4 *)0x0;
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x3c);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  for (; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
    local_14 = puVar5[3];
    if (local_14 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      local_18 = *(float *)(local_14 + 0x1c) - in_EAX[2];
      local_8 = *(float *)(local_14 + 0x18) - in_EAX[1];
      fVar3 = *(float *)(local_14 + 0x14) - *in_EAX;
      local_10 = fVar3 * fVar3 + local_8 * local_8 + local_18 * local_18;
      local_4 = local_18;
      iVar4 = FUN_00129e30(in_ECX,iVar2,*(undefined4 *)(iVar2 + 4));
      FUN_000389d0();
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  puVar5 = (undefined4 *)0x0;
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x48);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  for (; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
    local_14 = puVar5[3];
    if (local_14 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      local_4 = *(float *)(local_14 + 0x1c) - in_EAX[2];
      local_18 = *(float *)(local_14 + 0x18) - in_EAX[1];
      fVar3 = *(float *)(local_14 + 0x14) - *in_EAX;
      local_10 = fVar3 * fVar3 + local_18 * local_18 + local_4 * local_4;
      local_8 = local_18;
      iVar4 = FUN_00129e30(in_ECX,iVar2,*(undefined4 *)(iVar2 + 4));
      FUN_000389d0();
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  local_18 = *(float *)(param_1 + 0x1c) - in_EAX[2];
  local_8 = *(float *)(param_1 + 0x18) - in_EAX[1];
  fVar3 = *(float *)(param_1 + 0x14) - *in_EAX;
  iVar2 = *(int *)(in_ECX + 4);
  local_10 = fVar3 * fVar3 + local_8 * local_8 + local_18 * local_18;
  local_14 = param_1;
  local_4 = local_18;
  iVar4 = FUN_00129e30(in_ECX,iVar2,*(undefined4 *)(iVar2 + 4));
  FUN_000389d0();
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return;
}
