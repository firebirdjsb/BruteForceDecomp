/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0073AD5BE4A4814F7F15FB5CE9C95D0E7EACAA5569BA8CB236D95838919CD423
 * Entry: 0x001403c0, Ghidra index: 4078, label: FUN_001403c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c308;
extern uint32_t PTR_FUN_0039c35c;
float10 FUN_001403c0(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_4 = 0;
  local_24 = (undefined4 *)0x0;
  iVar1 = FUN_00137080(param_1,param_3);
  if (iVar1 != 0) {
    local_20 = (undefined4 *)(local_c + 8);
    while (local_20 + -2 != local_8) {
      puVar2 = (undefined4 *)FUN_002ea01d(0x28);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_0039c308;
        puVar2[1] = 0;
        puVar2[4] = 0;
        puVar2[6] = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        puVar2[8] = param_2;
        DAT_0041f2e0 = DAT_0041f2e0 + 1;
        *puVar2 = &PTR_FUN_0039c35c;
      }
      puVar2[9] = local_20[1];
      puVar2[1] = *local_20;
      puVar2[2] = 0;
      if (puVar2[4] != param_3) {
        if (puVar2[4] != 0) {
          FUN_0008f6e0();
        }
        puVar2[4] = param_3;
        if ((param_3 != 0) && ((param_3 & 1) == 0)) {
          uVar3 = param_3 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[3] = *(undefined4 *)(&DAT_00414da0 + uVar3 * 4);
          *(undefined4 **)(&DAT_00414da0 + uVar3 * 4) = puVar2 + 3;
        }
      }
      if (puVar2[6] != param_4) {
        if (puVar2[6] != 0) {
          FUN_0008f6e0();
        }
        puVar2[6] = param_4;
        if ((param_4 != 0) && ((param_4 & 1) == 0)) {
          uVar3 = param_4 * 0x19660d + 0x3c6ef35f >> 0x15;
          puVar2[5] = *(undefined4 *)(&DAT_00414da0 + uVar3 * 4);
          *(undefined4 **)(&DAT_00414da0 + uVar3 * 4) = puVar2 + 5;
        }
      }
      puVar2[1] = *(float *)(param_1 + 0x28) + (float)puVar2[1];
      iVar1 = *(int *)(param_1 + 0x30);
      local_1c = puVar2;
      iVar4 = FUN_000ff730(param_1 + 0x2c,iVar1,*(undefined4 *)(iVar1 + 4),&local_1c);
      FUN_000b2a50();
      local_18 = local_24;
      *(int *)(iVar1 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      local_1c = (undefined4 *)((float)puVar2[2] + (float)puVar2[1]);
      local_20 = local_20 + 4;
      local_14 = local_24;
      if ((float)local_24 <= (float)local_1c) {
        local_24 = local_1c;
        local_14 = local_1c;
      }
    }
  }
  if (local_c == 0) {
    return (float10)(float)local_24;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_c);
}
