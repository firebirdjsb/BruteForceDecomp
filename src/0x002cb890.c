/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B98A823CB74049DE8688268A1DD86DBD5BEB0DB508229484FDB48BC92678148
 * Entry: 0x002cb890, Ghidra index: 10146, label: FUN_002cb890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469e18;
extern uint32_t DAT_00469e20;
extern uint32_t PTR_LAB_0038e5e0;
void FUN_002cb890(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined **local_b98;
  float local_b94;
  float local_b90;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined4 local_b7c;
  undefined4 local_b78;
  undefined4 local_b74;
  undefined4 local_b70;
  undefined4 local_b6c;
  undefined4 local_b68;
  float local_b64;
  undefined8 local_b60;
  undefined4 local_b58;
  undefined1 local_b50 [1448];
  undefined1 local_5a8 [1448];
  
  FUN_002c96d0(local_5a8,param_2);
  FUN_002c96d0(local_b50,param_3);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  local_b98 = &PTR_LAB_0038e5e0;
  local_b78 = 0;
  local_b68 = 0;
  local_b58 = 0;
  local_b7c = 0;
  local_b80 = 0;
  local_b84 = 0;
  local_b6c = 0;
  local_b70 = 0;
  local_b74 = 0;
  local_b64 = *(float *)(param_3 + 0x40) - *(float *)(param_2 + 0x40);
  local_b60 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_3 + 0x44) >> 0x20) -
                       (float)((ulonglong)*(undefined8 *)(param_2 + 0x44) >> 0x20),
                       (float)*(undefined8 *)(param_3 + 0x44) -
                       (float)*(undefined8 *)(param_2 + 0x44));
  FUN_002b65a0(&local_b64);
  local_b94 = *(float *)(param_1 + 8);
  local_b90 = 1.0 / local_b94;
  fVar1 = *(float *)(*(int *)(param_1 + 0x10) + 0x50);
  iVar2 = FUN_002dd8d0(&local_b98,
                       *(float *)(&DAT_00469e20 +
                                 (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar1,fVar1 * 0.5 + DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
  }
  return;
}
