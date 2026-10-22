/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7D07EDED0FEFEBD2388E24B74D5D3E4E03EC2BD1099E957EDB4C3E333CC4D75
 * Entry: 0x0016b3f0, Ghidra index: 4774, label: FUN_0016b3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039df40;
int FUN_0016b3f0(int param_1,undefined4 param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = (undefined4 *)FUN_002ea01d(8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_0039df40;
    puVar4[1] = param_2;
  }
  local_c = *(undefined4 *)(in_EAX + 0x28);
  local_10 = *(undefined4 *)(in_EAX + 0x24);
  local_8 = *(undefined4 *)(in_EAX + 0x2c);
  local_4 = 0;
  FUN_002339d0(&local_30);
  local_1c = local_28;
  local_20 = local_2c;
  local_18 = local_24;
  iVar6 = *(int *)(*(int *)(param_1 + 0xa44) + 0xe0);
  local_14 = local_30;
  iVar5 = FUN_002ea01d(0xa0);
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_002ccc70(iVar5,**(undefined4 **)(iVar6 + 0xc),&local_20);
  }
  iVar5 = *(int *)(iVar6 + 0x90);
  local_2c = *(float *)(iVar5 + 0x18);
  local_30 = *(float *)(iVar5 + 0x14);
  fVar1 = *(float *)(iVar5 + 0x1c);
  bVar2 = 0.005 <= local_30;
  if (!bVar2) {
    local_30 = 0.005;
  }
  bVar3 = 0.005 <= local_2c;
  if (!bVar3) {
    local_2c = 0.005;
  }
  if (0.005 <= fVar1) {
    if (bVar3 && bVar2) {
      return iVar6;
    }
  }
  else {
    fVar1 = 0.005;
  }
  *(float *)(iVar5 + 0x1c) = fVar1;
  *(float *)(iVar5 + 0x14) = local_30;
  *(float *)(iVar5 + 0x18) = local_2c;
  FUN_002bb410(iVar5);
  return iVar6;
}
