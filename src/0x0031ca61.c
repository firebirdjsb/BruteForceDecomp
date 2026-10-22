/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 733C1466EE774453F10B06F7AAC30BF319E9FDB67B9576896FBD6F84B6E2D9CD
 * Entry: 0x0031ca61, Ghidra index: 12350, label: FUN_0031ca61
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00330000;
extern uint32_t DAT_004a9100;
extern uint32_t DAT_004a9420;
extern uint32_t DAT_004b0220;
void FUN_0031ca61(int param_1)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  undefined4 local_98;
  undefined4 local_94;
  int aiStack_90 [18];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  int local_10;
  undefined4 local_c;
  undefined *local_8;
  
  in_ECX[1] = param_1;
  iVar1 = FUN_003148cf(0x626f5344,0x28,1);
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0031b0d2(0);
  }
  *in_ECX = iVar1;
  FUN_0031b11a(0);
  FUN_0031b21f(0,&DAT_004a9100,800);
  local_8 = &DAT_004a9420;
  param_1 = 0x17f;
  FUN_0031b21f(0x600,&DAT_004a9420,0x5fc);
  local_98 = 0x24;
  local_94 = 6;
  iVar1 = 0x300;
  do {
    FUN_0031c8b1(uVar2,&local_8,&param_1);
    FUN_0031b21f(iVar1 << 2,local_8,param_1 << 2);
    aiStack_90[uVar2 * 2] = iVar1;
    iVar1 = iVar1 + param_1;
    aiStack_90[uVar2 * 2 + 1] = param_1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  local_44 = 0x18;
  local_48 = iVar1;
  FUN_0031b21f(iVar1 * 4,&DAT_004b0220,0x60);
  in_ECX[2] = **(int **)(*in_ECX + 0x10) + iVar1 * 4;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_10 = iVar1 + 0x18;
  local_c = 0x2000;
  FUN_0031b21f(0x400,&local_98,0x90);
  FUN_0031c960(DAT_00330000 + -0x3000);
  return;
}
