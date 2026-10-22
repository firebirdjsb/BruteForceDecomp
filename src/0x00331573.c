/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 307BE40D1178D30F3381B551320BB8B95DFF4E5C893474E2D4B0EAB8968794ED
 * Entry: 0x00331573, Ghidra index: 12395, label: FUN_00331573
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75d8;
int FUN_00331573(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_5e0 [1472];
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_8 = 0x5c0;
  iVar3 = FUN_00340983(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),local_5e0,
                       &local_8,*(undefined4 *)(param_1 + 0x66c));
  if (iVar3 < 0) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
    *puVar1 = *puVar1 | 8;
    param_1 = -0x7feafff8;
  }
  else {
    local_20 = 2;
    local_1c = *(undefined4 *)
                (*(int *)(param_1 + 0x54) + 8 +
                (*(uint *)(param_1 + 0x18) % *(uint *)(*(int *)(param_1 + 0x54) + 4)) * 4);
    local_1e = FUN_00345df1(0x58);
    local_10 = local_8;
    local_c = local_5e0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_0034515b(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x4c),&local_10,1,&local_8,0,
                         &local_20,0x10,param_1 + 0x58,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (iVar4 == -1) {
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffff3ff | 0x1000;
      uVar5 = XAPILIB__GetLastError();
      *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar5;
      param_1 = -0x7feae6f8;
    }
    else {
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xffffe7ff | 0x400;
      iVar2 = *(int *)(param_1 + 0x18);
      iVar4 = XAPILIB__GetTickCount();
      *(int *)(param_1 + 0x1c) = iVar4 + *(int *)(&DAT_003b75d8 + iVar2 * 4);
      FUN_003476db(param_1 + 0x20,*(undefined4 *)(param_1 + 8),*(int *)(&DAT_003b75d8 + iVar2 * 4));
      param_1 = iVar3;
    }
  }
  return param_1;
}
